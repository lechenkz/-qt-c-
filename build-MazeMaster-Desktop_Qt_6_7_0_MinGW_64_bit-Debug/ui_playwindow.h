/********************************************************************************
** Form generated from reading UI file 'playwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYWINDOW_H
#define UI_PLAYWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlayWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *timeLabel;
    QLabel *label_2;
    QLabel *congraLabel;
    QLabel *label_3;

    void setupUi(QMainWindow *PlayWindow)
    {
        if (PlayWindow->objectName().isEmpty())
            PlayWindow->setObjectName("PlayWindow");
        PlayWindow->resize(800, 600);
        PlayWindow->setMinimumSize(QSize(800, 600));
        PlayWindow->setMaximumSize(QSize(800, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/destination.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        PlayWindow->setWindowIcon(icon);
        centralwidget = new QWidget(PlayWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(610, 10, 91, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font.setPointSize(12);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));
        timeLabel = new QLabel(centralwidget);
        timeLabel->setObjectName("timeLabel");
        timeLabel->setGeometry(QRect(710, 10, 51, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font1.setPointSize(14);
        timeLabel->setFont(font1);
        timeLabel->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));
        timeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(610, 60, 171, 231));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267")});
        font2.setPointSize(12);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 127);"));
        congraLabel = new QLabel(centralwidget);
        congraLabel->setObjectName("congraLabel");
        congraLabel->setGeometry(QRect(240, 0, 150, 120));
        congraLabel->setPixmap(QPixmap(QString::fromUtf8(":/res/succeed.png")));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(770, 10, 21, 41));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        PlayWindow->setCentralWidget(centralwidget);

        retranslateUi(PlayWindow);

        QMetaObject::connectSlotsByName(PlayWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PlayWindow)
    {
        PlayWindow->setWindowTitle(QCoreApplication::translate("PlayWindow", "\351\227\257\345\205\263\344\270\255", nullptr));
        label->setText(QCoreApplication::translate("PlayWindow", "\345\211\251\344\275\231\346\227\266\351\227\264\357\274\232", nullptr));
        timeLabel->setText(QCoreApplication::translate("PlayWindow", "0", nullptr));
        label_2->setText(QCoreApplication::translate("PlayWindow", "<html><head/><body><p><span style=\" font-weight:600;\">\346\217\220\347\244\272\357\274\232</span></p><p>\346\214\211WASD\351\224\256\347\247\273\345\212\250</p><p>\347\257\256\347\220\203\344\270\272\350\277\267\345\256\253\345\207\272\345\217\243</p><p>\350\277\267\345\256\253\345\217\257\350\203\275\346\262\241\346\234\211\351\200\232\350\267\257</p><p>\350\257\264\346\230\216\350\277\231\344\270\252\350\277\267\345\256\253\346\230\257\345\201\207\350\261\241\357\274\214</p><p>\346\255\244\346\227\266\350\257\267\346\214\211\344\270\213\346\226\271\347\232\204\342\200\235\350\277\267</p><p>\345\256\253\346\227\240\350\247\243\342\200\235\346\214\211\351\222\256\350\265\266\345\277\253\351\200\200\345\207\272</p></body></html>", nullptr));
        congraLabel->setText(QString());
        label_3->setText(QCoreApplication::translate("PlayWindow", "\347\247\222", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlayWindow: public Ui_PlayWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYWINDOW_H
