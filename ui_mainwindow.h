/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "kpixmapregionselectorwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionZako_cz;
    QAction *actionPrzyk_adowy_z_internetu;
    QAction *actionKopiuj_cie_k_wyniku;
    QAction *actionCo_to_jest;
    QAction *actionPrzyk_adowy_obraz;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *lblSrc;
    QLabel *lblSrc_2;
    QFrame *line_5;
    QPushButton *btnOpen;
    QLabel *lbl;
    QDoubleSpinBox *dsbR;
    QComboBox *comboBox;
    QSpinBox *sbOpenNumber;
    QPushButton *btnTransform;
    QPushButton *btnSrcSxiv;
    QDoubleSpinBox *dsbXstart;
    QDoubleSpinBox *dsbYstart;
    QPushButton *btnXY0;
    QLabel *lblSrcSize;
    QLabel *label;
    QDoubleSpinBox *dsbStep;
    KPixmapRegionSelectorWidget *kpsw;
    QLabel *label_2;
    QDoubleSpinBox *dsbXend;
    QDoubleSpinBox *dsbYend;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *btnXY2Max;
    QProgressBar *prg;
    QSpinBox *sbFfmpegRate;
    QCheckBox *chkSun;
    QListView *lvSun;
    QPushButton *btnPreview;
    QDoubleSpinBox *dsbSunHeight;
    QDoubleSpinBox *dsb_r;
    QDoubleSpinBox *dsbRayLen;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QFrame *line;
    QDoubleSpinBox *dsbAnStart;
    QLabel *label_11;
    QDoubleSpinBox *dsbAnEnd;
    QLabel *label_12;
    QDoubleSpinBox *dsbSunLoc;
    QLabel *label_13;
    QMenuBar *menubar;
    QMenu *menu_Plik;
    QMenu *menuPo_moc;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(861, 600);
        actionZako_cz = new QAction(MainWindow);
        actionZako_cz->setObjectName(QString::fromUtf8("actionZako_cz"));
        actionPrzyk_adowy_z_internetu = new QAction(MainWindow);
        actionPrzyk_adowy_z_internetu->setObjectName(QString::fromUtf8("actionPrzyk_adowy_z_internetu"));
        actionKopiuj_cie_k_wyniku = new QAction(MainWindow);
        actionKopiuj_cie_k_wyniku->setObjectName(QString::fromUtf8("actionKopiuj_cie_k_wyniku"));
        actionCo_to_jest = new QAction(MainWindow);
        actionCo_to_jest->setObjectName(QString::fromUtf8("actionCo_to_jest"));
        actionPrzyk_adowy_obraz = new QAction(MainWindow);
        actionPrzyk_adowy_obraz->setObjectName(QString::fromUtf8("actionPrzyk_adowy_obraz"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 240, 291, 28));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 200, 261, 28));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 280, 291, 28));
        lblSrc = new QLabel(centralwidget);
        lblSrc->setObjectName(QString::fromUtf8("lblSrc"));
        lblSrc->setGeometry(QRect(80, 10, 831, 31));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        lblSrc->setFont(font);
        lblSrc->setFrameShape(QFrame::Box);
        lblSrc->setFrameShadow(QFrame::Sunken);
        lblSrc->setLineWidth(2);
        lblSrc_2 = new QLabel(centralwidget);
        lblSrc_2->setObjectName(QString::fromUtf8("lblSrc_2"));
        lblSrc_2->setGeometry(QRect(10, 10, 61, 31));
        lblSrc_2->setFont(font);
        lblSrc_2->setFrameShape(QFrame::NoFrame);
        lblSrc_2->setFrameShadow(QFrame::Sunken);
        lblSrc_2->setLineWidth(2);
        line_5 = new QFrame(centralwidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(10, 144, 850, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        btnOpen = new QPushButton(centralwidget);
        btnOpen->setObjectName(QString::fromUtf8("btnOpen"));
        btnOpen->setGeometry(QRect(120, 50, 121, 28));
        lbl = new QLabel(centralwidget);
        lbl->setObjectName(QString::fromUtf8("lbl"));
        lbl->setGeometry(QRect(10, 160, 71, 31));
        lbl->setFont(font);
        lbl->setFrameShape(QFrame::NoFrame);
        lbl->setFrameShadow(QFrame::Sunken);
        lbl->setLineWidth(2);
        dsbR = new QDoubleSpinBox(centralwidget);
        dsbR->setObjectName(QString::fromUtf8("dsbR"));
        dsbR->setGeometry(QRect(80, 160, 101, 28));
        dsbR->setDecimals(0);
        dsbR->setMinimum(0.000000000000000);
        dsbR->setMaximum(100000000.000000000000000);
        dsbR->setValue(500.000000000000000);
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(210, 160, 81, 27));
        sbOpenNumber = new QSpinBox(centralwidget);
        sbOpenNumber->setObjectName(QString::fromUtf8("sbOpenNumber"));
        sbOpenNumber->setGeometry(QRect(320, 260, 71, 28));
        sbOpenNumber->setMaximum(1000000);
        btnTransform = new QPushButton(centralwidget);
        btnTransform->setObjectName(QString::fromUtf8("btnTransform"));
        btnTransform->setEnabled(false);
        btnTransform->setGeometry(QRect(0, 200, 111, 28));
        btnSrcSxiv = new QPushButton(centralwidget);
        btnSrcSxiv->setObjectName(QString::fromUtf8("btnSrcSxiv"));
        btnSrcSxiv->setGeometry(QRect(250, 50, 131, 28));
        dsbXstart = new QDoubleSpinBox(centralwidget);
        dsbXstart->setObjectName(QString::fromUtf8("dsbXstart"));
        dsbXstart->setGeometry(QRect(116, 120, 75, 28));
        dsbXstart->setAccelerated(true);
        dsbXstart->setDecimals(0);
        dsbXstart->setMinimum(-1.000000000000000);
        dsbXstart->setMaximum(1.000000000000000);
        dsbXstart->setSingleStep(10.000000000000000);
        dsbYstart = new QDoubleSpinBox(centralwidget);
        dsbYstart->setObjectName(QString::fromUtf8("dsbYstart"));
        dsbYstart->setGeometry(QRect(220, 120, 75, 28));
        dsbYstart->setAccelerated(true);
        dsbYstart->setDecimals(0);
        dsbYstart->setMinimum(-1.000000000000000);
        dsbYstart->setMaximum(1.000000000000000);
        dsbYstart->setSingleStep(10.000000000000000);
        btnXY0 = new QPushButton(centralwidget);
        btnXY0->setObjectName(QString::fromUtf8("btnXY0"));
        btnXY0->setGeometry(QRect(300, 120, 61, 28));
        lblSrcSize = new QLabel(centralwidget);
        lblSrcSize->setObjectName(QString::fromUtf8("lblSrcSize"));
        lblSrcSize->setGeometry(QRect(260, 90, 121, 20));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(400, 90, 41, 20));
        dsbStep = new QDoubleSpinBox(centralwidget);
        dsbStep->setObjectName(QString::fromUtf8("dsbStep"));
        dsbStep->setGeometry(QRect(450, 86, 81, 28));
        dsbStep->setDecimals(3);
        dsbStep->setMinimum(0.001000000000000);
        dsbStep->setMaximum(30.000000000000000);
        dsbStep->setSingleStep(0.010000000000000);
        dsbStep->setValue(0.300000000000000);
        kpsw = new KPixmapRegionSelectorWidget(centralwidget);
        kpsw->setObjectName(QString::fromUtf8("kpsw"));
        kpsw->setGeometry(QRect(10, 70, 81, 71));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 90, 141, 19));
        dsbXend = new QDoubleSpinBox(centralwidget);
        dsbXend->setObjectName(QString::fromUtf8("dsbXend"));
        dsbXend->setGeometry(QRect(390, 120, 75, 28));
        dsbXend->setAccelerated(true);
        dsbXend->setDecimals(0);
        dsbXend->setMinimum(0.000000000000000);
        dsbXend->setMaximum(100000.000000000000000);
        dsbXend->setSingleStep(10.000000000000000);
        dsbYend = new QDoubleSpinBox(centralwidget);
        dsbYend->setObjectName(QString::fromUtf8("dsbYend"));
        dsbYend->setGeometry(QRect(493, 120, 75, 28));
        dsbYend->setAccelerated(true);
        dsbYend->setDecimals(0);
        dsbYend->setMinimum(0.000000000000000);
        dsbYend->setMaximum(100000.000000000000000);
        dsbYend->setSingleStep(10.000000000000000);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(365, 124, 40, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(470, 124, 21, 20));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(195, 125, 21, 20));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(91, 125, 40, 20));
        btnXY2Max = new QPushButton(centralwidget);
        btnXY2Max->setObjectName(QString::fromUtf8("btnXY2Max"));
        btnXY2Max->setGeometry(QRect(570, 120, 61, 28));
        prg = new QProgressBar(centralwidget);
        prg->setObjectName(QString::fromUtf8("prg"));
        prg->setGeometry(QRect(10, 350, 361, 23));
        prg->setMinimum(0);
        prg->setValue(0);
        sbFfmpegRate = new QSpinBox(centralwidget);
        sbFfmpegRate->setObjectName(QString::fromUtf8("sbFfmpegRate"));
        sbFfmpegRate->setGeometry(QRect(420, 200, 71, 28));
        sbFfmpegRate->setMaximum(600);
        chkSun = new QCheckBox(centralwidget);
        chkSun->setObjectName(QString::fromUtf8("chkSun"));
        chkSun->setGeometry(QRect(501, 160, 107, 25));
        chkSun->setChecked(true);
        lvSun = new QListView(centralwidget);
        lvSun->setObjectName(QString::fromUtf8("lvSun"));
        lvSun->setGeometry(QRect(510, 300, 256, 71));
        btnPreview = new QPushButton(centralwidget);
        btnPreview->setObjectName(QString::fromUtf8("btnPreview"));
        btnPreview->setGeometry(QRect(510, 270, 211, 28));
        btnPreview->setFlat(false);
        dsbSunHeight = new QDoubleSpinBox(centralwidget);
        dsbSunHeight->setObjectName(QString::fromUtf8("dsbSunHeight"));
        dsbSunHeight->setGeometry(QRect(580, 190, 75, 28));
        dsbSunHeight->setFrame(true);
        dsbSunHeight->setMinimum(0.000000000000000);
        dsbSunHeight->setMaximum(30000.000000000000000);
        dsbSunHeight->setSingleStep(10.000000000000000);
        dsbSunHeight->setValue(50.000000000000000);
        dsb_r = new QDoubleSpinBox(centralwidget);
        dsb_r->setObjectName(QString::fromUtf8("dsb_r"));
        dsb_r->setGeometry(QRect(670, 190, 75, 28));
        dsb_r->setMaximum(200.000000000000000);
        dsb_r->setValue(30.000000000000000);
        dsbRayLen = new QDoubleSpinBox(centralwidget);
        dsbRayLen->setObjectName(QString::fromUtf8("dsbRayLen"));
        dsbRayLen->setGeometry(QRect(760, 190, 75, 28));
        dsbRayLen->setMaximum(2000.000000000000000);
        dsbRayLen->setValue(600.000000000000000);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(390, 204, 31, 20));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(580, 170, 76, 19));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(670, 170, 61, 19));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(760, 170, 100, 19));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(490, 160, 20, 230));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        dsbAnStart = new QDoubleSpinBox(centralwidget);
        dsbAnStart->setObjectName(QString::fromUtf8("dsbAnStart"));
        dsbAnStart->setGeometry(QRect(580, 240, 75, 28));
        dsbAnStart->setFrame(true);
        dsbAnStart->setMinimum(-3.140000000000000);
        dsbAnStart->setMaximum(3.140000000000000);
        dsbAnStart->setSingleStep(0.010000000000000);
        dsbAnStart->setValue(-1.700000000000000);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(580, 220, 76, 19));
        dsbAnEnd = new QDoubleSpinBox(centralwidget);
        dsbAnEnd->setObjectName(QString::fromUtf8("dsbAnEnd"));
        dsbAnEnd->setGeometry(QRect(670, 240, 75, 28));
        dsbAnEnd->setFrame(true);
        dsbAnEnd->setMinimum(-3.140000000000000);
        dsbAnEnd->setMaximum(3.140000000000000);
        dsbAnEnd->setSingleStep(0.010000000000000);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(670, 220, 92, 19));
        dsbSunLoc = new QDoubleSpinBox(centralwidget);
        dsbSunLoc->setObjectName(QString::fromUtf8("dsbSunLoc"));
        dsbSunLoc->setGeometry(QRect(760, 240, 75, 28));
        dsbSunLoc->setFrame(true);
        dsbSunLoc->setDecimals(3);
        dsbSunLoc->setMinimum(0.000000000000000);
        dsbSunLoc->setMaximum(1.000000000000000);
        dsbSunLoc->setSingleStep(0.010000000000000);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(760, 220, 111, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 861, 24));
        menu_Plik = new QMenu(menubar);
        menu_Plik->setObjectName(QString::fromUtf8("menu_Plik"));
        menuPo_moc = new QMenu(menubar);
        menuPo_moc->setObjectName(QString::fromUtf8("menuPo_moc"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_Plik->menuAction());
        menubar->addAction(menuPo_moc->menuAction());
        menu_Plik->addAction(actionPrzyk_adowy_z_internetu);
        menu_Plik->addAction(actionKopiuj_cie_k_wyniku);
        menu_Plik->addAction(actionZako_cz);
        menu_Plik->addAction(actionPrzyk_adowy_obraz);
        menuPo_moc->addAction(actionCo_to_jest);

        retranslateUi(MainWindow);

        btnTransform->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Transformacja niebocentryczna", nullptr));
        actionZako_cz->setText(QCoreApplication::translate("MainWindow", "Zako\305\204cz", nullptr));
        actionPrzyk_adowy_z_internetu->setText(QCoreApplication::translate("MainWindow", "Przyk\305\202adowy z internetu", nullptr));
        actionKopiuj_cie_k_wyniku->setText(QCoreApplication::translate("MainWindow", "Kopiuj \305\233cie\305\274k\304\231 wyniku", nullptr));
        actionCo_to_jest->setText(QCoreApplication::translate("MainWindow", "Co to jest?", nullptr));
        actionPrzyk_adowy_obraz->setText(QCoreApplication::translate("MainWindow", "Przyk\305\202adowy obraz", nullptr));
#if QT_CONFIG(whatsthis)
        pushButton->setWhatsThis(QCoreApplication::translate("MainWindow", "Otwiera przy u\305\274yciu szybkiego ale funkcjonalnego sxiv.", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton->setText(QCoreApplication::translate("MainWindow", "Otw\303\263rz w sxiv", nullptr));
#if QT_CONFIG(whatsthis)
        pushButton_2->setWhatsThis(QCoreApplication::translate("MainWindow", "Tworzy wideo w katalogu tymczasowym.", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Utw\303\263rz wideo ffmpeg w tmp/tem", nullptr));
#if QT_CONFIG(whatsthis)
        pushButton_3->setWhatsThis(QCoreApplication::translate("MainWindow", "Otwiera przy u\305\274yciu domy\305\233lnego programu", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Otw\303\263rz z xdg-open", nullptr));
        lblSrc->setText(QString());
        lblSrc_2->setText(QCoreApplication::translate("MainWindow", "\305\271r\303\263d\305\202o:", nullptr));
#if QT_CONFIG(whatsthis)
        btnOpen->setWhatsThis(QCoreApplication::translate("MainWindow", "Otwiera obraz kt\303\263ry ma by\304\207 przekszta\305\202cony.", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnOpen->setText(QCoreApplication::translate("MainWindow", "Wybierz...", nullptr));
#if QT_CONFIG(whatsthis)
        lbl->setWhatsThis(QCoreApplication::translate("MainWindow", "Wartio\305\233\304\207 parametru promienia we wzorze transformacji.", nullptr));
#endif // QT_CONFIG(whatsthis)
        lbl->setText(QCoreApplication::translate("MainWindow", "Promie\305\204", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "pix", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "cm", nullptr));

#if QT_CONFIG(whatsthis)
        btnTransform->setWhatsThis(QCoreApplication::translate("MainWindow", "Rozpoczyna proces", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnTransform->setText(QCoreApplication::translate("MainWindow", "Przekszta\305\202\304\207", nullptr));
        btnSrcSxiv->setText(QCoreApplication::translate("MainWindow", "Otw\303\263rz w sxiv", nullptr));
        btnXY0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lblSrcSize->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Skok:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Wyb\303\263r z obszaru", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "X2", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Y2", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Y2", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "X1", nullptr));
        btnXY2Max->setText(QCoreApplication::translate("MainWindow", "Maks.", nullptr));
        chkSun->setText(QCoreApplication::translate("MainWindow", "S\305\202o\305\204ce", nullptr));
        btnPreview->setText(QCoreApplication::translate("MainWindow", "Wy\305\233wietl wst\304\231pn\304\205 grafik\304\231", nullptr));
#if QT_CONFIG(whatsthis)
        dsbSunHeight->setWhatsThis(QCoreApplication::translate("MainWindow", "Po\305\202o\305\274enie s\305\202o\305\204ca od brzegu", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        dsb_r->setWhatsThis(QCoreApplication::translate("MainWindow", "Promie\305\204 tarczy s\305\202o\305\204ca", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        dsbRayLen->setWhatsThis(QCoreApplication::translate("MainWindow", "D\305\202ugo\305\233\304\207 ka\305\274dego promienia \305\233wiat\305\202a wychodz\304\205cego ze s\305\202o\305\204ca", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_7->setText(QCoreApplication::translate("MainWindow", "kl/s", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Wysoko\305\233\304\207", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "r tarczy", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "D\305\202. promieni", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "K\304\205t prom.", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "K\304\205t pr.ko\305\204.", nullptr));
#if QT_CONFIG(whatsthis)
        dsbSunLoc->setWhatsThis(QCoreApplication::translate("MainWindow", "Wzgl\304\231dny k\304\205t po\305\202o\305\274enia s\305\202o\305\204ca na okr\304\231gu", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_13->setText(QCoreApplication::translate("MainWindow", "Miejsce 0..1", nullptr));
        menu_Plik->setTitle(QCoreApplication::translate("MainWindow", "&Plik", nullptr));
        menuPo_moc->setTitle(QCoreApplication::translate("MainWindow", "Po&moc", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
