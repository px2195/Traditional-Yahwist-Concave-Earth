#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>
#include <QRunnable>
#include <KPixmapRegionSelectorWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void Open(QString file);
    void Transform();
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_btnOpen_clicked();

    void on_btnTransform_clicked();

    void on_btnSrcSxiv_clicked();

    void on_btnXY0_clicked();

    void on_dsbXstart_valueChanged(double arg1);

    void on_dsbYstart_valueChanged(double arg1);

    void on_dsbXend_valueChanged(double arg1);

    void on_dsbYend_valueChanged(double arg1);

    void on_btnXY2Max_clicked();

    void on_actionCo_to_jest_triggered();

    void on_actionPrzyk_adowy_z_internetu_triggered();
    
    void on_btnPreview_clicked();

    void on_actionPrzyk_adowy_obraz_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
