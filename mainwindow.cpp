#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QProcess>
#include <QFileDialog>
#include <cmath>
#include <QWhatsThis>
#include <QPainter>

bool done;

QString fdest="/tem/Niebocentryzm Heavencenstrism Skycentrism przestrzeń transformowana"; //rdzeń nazwy docelowego obrazu bez ext
QString dest;
uint ImageNumber=0;
float R;
QImage img0;
QImage img;
QImage img2;
QLabel *preview;

float x,Xstart_,Xend_,halfH,halfW,Xstart,W,H,Xend;
const char *const ext=".png";

Ui::MainWindow *ui;
MainWindow *mainwin;

void DrawSun(uint wys,uint r,uint raylen,float angles,float anglee,float pos){
    float x1,y1,x2,y2;
    QPainter qp(&img);
    float xCen=0,yCen;
    yCen=H-wys;
    xCen=pos*W;
    QBrush br=QBrush(QColor::fromRgb(255,255,0));
    qp.setPen(QPen(br,2));
    qp.setBrush(br);
    qp.drawEllipse(QPoint(xCen,yCen),r,r);
    for(float i=angles;i<anglee;i+=0.04)
    {
        x1=xCen+sin(i)*r;
        y1=yCen+cos(i)*r;
        x2=xCen+sin(i)*(r+raylen);
        y2=yCen+cos(i)*(r+raylen);
        qp.drawLine(x1,y1,x2,y2);
    }
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ::ui=ui;
    mainwin=this;
}

MainWindow::~MainWindow()
{
    delete ui;
}
QString fnending(uint ImageNumber){
    return QString::number(ImageNumber).rightJustified(4,'0');
}
void MainWindow::on_pushButton_2_clicked()
{
    QProcess qp;
    qp.execute("lxterminal -e \'ffmpeg -r 1/"+ui->sbFfmpegRate->text()+" -i \""+fdest+"-%"+fnending(1)+"d\" -c:v libx264 -r 30 -pix_fmt yuv420p -vf scale=800:400   /tem/NC_Transform_Video.mp4\'");
    this->statusBar()->showMessage("Rozpoczęty ffmpeg...");
    qp.waitForFinished();
    this->statusBar()->showMessage("Zakończono ffmpeg...");
}
void MainWindow::on_pushButton_3_clicked()
{
       QProcess qp;
       qp.execute("xdg-open \""+fdest+"-"+fnending(ui->sbOpenNumber->value())+"."+ext+"\"");
}
void MainWindow::on_pushButton_clicked()
{
     QProcess qp;
     qp.execute("sxiv \""+fdest+"-"+fnending(ui->sbOpenNumber->value())+"."+ext+"\"");
}
void MainWindow::on_btnOpen_clicked()
{
    QString f=QFileDialog::getOpenFileName(this,"Otwórz obraz do niebocentrycznej tranformacji","/tem/");
    Open(f);
}
void MainWindow::Open(QString file){
    if(file.length())
    {
        this->statusBar()->showMessage("Wczytywanie");
        QApplication::processEvents();
        img.load(file);
        img0=img.copy();
        ui->lblSrcSize->setText(QString::number(img.width())+"x"+QString::number(img.height()));
        this->statusBar()->showMessage("Wczytano obraz ");
        this->ui->lblSrc->setText(file);
        ui->dsbXend->setMaximum(img.width());
        ui->dsbYend->setMaximum(img.height());
        ui->dsbXstart->setMaximum(img.width());
        ui->dsbYstart->setMaximum(img.height());
        ui->kpsw->setPixmap(QPixmap::fromImage(img).scaled(ui->kpsw->size()));
        ui->btnTransform->setEnabled(true);
    }
}
class Thread : public QThread {
private:
    void run();
} th;
void Thread::run(){
    using ::x;
    //
    QSize s=img.size();
    R=ui->dsbR->value();
    img2=QImage(s,QImage::Format_RGB888);
    float y,x_,y_,prevy_=-1;
    float R_2=R*R;
    float step=ui->dsbStep->value();
    float Ystart=ui->dsbYstart->value();
    float Yend=ui->dsbYend->value();
    float x_pow2,k;
    float Yend_=-halfH+Yend;
    bool sun=ui->chkSun->isChecked();
    if(sun)
    {
        img=img0.copy();
        DrawSun(ui->dsbSunHeight->value(),ui->dsb_r->
                value(),ui->dsbRayLen->value(),ui->
                dsbAnStart->value(),ui->dsbAnEnd->value()
                ,ui->dsbSunLoc->value());
    }
    for(x=Xstart_;x<Xend_;x+=step)
    {
        x_pow2=x*x;
        for(y=-halfH+Ystart;y<Yend_;y+=step)
        {
            k=R_2/(x_pow2+y*y);
            x_=k*(x)+halfW;
            y_=k*(y)+halfH;
            if(y_==prevy_) continue;
            img2.setPixel(x_,prevy_=y_,img.pixel(x+halfW,y+halfH));
        }
    }
    img2.save(dest);
    done=true;
    return;
}
void MainWindow::on_btnTransform_clicked()
{
    ui->btnTransform->setEnabled(false);
    ui->prg->setValue(0);
    this->statusBar()->showMessage("Przetwarzanie");
    QApplication::processEvents();
    QSize s=img.size();
    W=s.width();
    H=s.height();
    Xend=ui->dsbXend->value();
    Xend_=-halfW+Xend;
    halfH=H/2,halfW=W/2;
    Xstart=ui->dsbXstart->value();
    Xstart_=-halfW+Xstart;
    float ProcessingWidth=Xend_-Xstart_;
    dest=fdest+"-"+fnending(ImageNumber)+"."+ext;
    done=false;
    th.start();
    while(!done)
    {
        using ::x;
        float f=(x-Xstart_)/ProcessingWidth*100;
        ui->prg->setValue(f);
        QApplication::processEvents(0,100);
    };
    ui->btnTransform->setEnabled(true);
    ui->sbOpenNumber->setMaximum(ImageNumber);
    ui->sbOpenNumber->setValue(ImageNumber);
    ImageNumber++;
    mainwin->statusBar()->showMessage("zapisano "+dest);
}
void MainWindow::on_btnSrcSxiv_clicked()
{
     QProcess::execute("sxiv \""+ui->lblSrc->text()+"\"");
}
void MainWindow::on_btnXY0_clicked()
{
    ui->dsbXstart->setValue(0);
    ui->dsbYstart->setValue(0);
}
void MainWindow::on_dsbXstart_valueChanged(double arg1)
{
    QRect r=ui->kpsw->selectedRegion();
    r.setX(arg1);
    ui->kpsw->setSelectedRegion(r);
}
void MainWindow::on_dsbYstart_valueChanged(double arg1)
{
    QRect r=ui->kpsw->selectedRegion();
    r.setY(arg1);
    ui->kpsw->setSelectedRegion(r);
}
void MainWindow::on_dsbXend_valueChanged(double arg1)
{
    QRect r=ui->kpsw->selectedRegion();
    r.setRight(arg1);
    ui->kpsw->setSelectedRegion(r);
}
void MainWindow::on_dsbYend_valueChanged(double arg1)
{
    QRect r=ui->kpsw->selectedRegion();
    r.setBottom(arg1);
    ui->kpsw->setSelectedRegion(r);
}
void MainWindow::on_btnXY2Max_clicked()
{
    ui->dsbXend->setValue(img.width());
    ui->dsbYend->setValue(img.height());
}
void MainWindow::on_actionPrzyk_adowy_z_internetu_triggered()
{
    if(!QFile::exists(""))
    {
        QProcess qp;
        qp.execute(QString("/bin/sh"), QStringList() << "-c" << "cd /tem; wget \'"
        "\'");
        //while(!qp.waitForFinished(100)) QApplication::processEvents();
    }
    //Open("/tem/");
}
void MainWindow::on_actionCo_to_jest_triggered()
{
    QWhatsThis::enterWhatsThisMode();
}
void MainWindow::on_btnPreview_clicked()
{
    if(!preview) preview=new QLabel;
    preview->setWindowTitle("Podgląd - przed transformacją");
    preview->showMaximized();
    preview->setScaledContents(true);
    preview->setPixmap(QPixmap::fromImage(img));
}

void MainWindow::on_actionPrzyk_adowy_obraz_triggered()
{
    Open("../Linie.png");
}
