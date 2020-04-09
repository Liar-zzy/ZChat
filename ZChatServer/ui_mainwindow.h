/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "animationstackedwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widgetWinTitle;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelWinIcon;
    QLabel *labelWinTitle;
    QPushButton *btnWinMin;
    QPushButton *btnWinClose;
    QWidget *widgetBody;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidgetMain;
    QWidget *LoginWidget;
    QWidget *widgetUser;
    QPushButton *btnExit;
    QPushButton *btnLogin;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditUser;
    QLineEdit *lineEditPasswd;
    QWidget *MainWidget;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widgetNav;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btnScorePage;
    QPushButton *btnDataBackup;
    QSpacerItem *verticalSpacer;
    QPushButton *btnQuit;
    QWidget *widgetRight;
    QVBoxLayout *verticalLayout_8;
    AnimationStackedWidget *stackedWidgetFunc;
    QWidget *page;
    QVBoxLayout *verticalLayout_11;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_5;
    QTextBrowser *textBrowser;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_9;
    QWidget *page_4;
    QHBoxLayout *horizontalLayout_6;
    QWidget *widget_2;
    QTableView *tableViewUsers;
    QWidget *page_5;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_3;
    QLabel *label_15;
    QLineEdit *lineEditOldPasswd;
    QLabel *label_16;
    QLineEdit *lineEditNewPasswd;
    QLabel *label_17;
    QLineEdit *lineEditNewPasswd2;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnPasswdChange;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QWidget *page_6;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_6;
    QLineEdit *lineEditBackup;
    QToolButton *toolButton;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btnBackup;
    QPushButton *btnDataUdo;
    QSpacerItem *verticalSpacer_2;
    QWidget *widgetStatus;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget;
    QLabel *labelHostAddr;
    QLabel *labelSystemTime;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(956, 615);
        QIcon icon;
        icon.addFile(QStringLiteral(":/resource/images/ic_app.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(MainWindow);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        widgetWinTitle = new QWidget(MainWindow);
        widgetWinTitle->setObjectName(QStringLiteral("widgetWinTitle"));
        widgetWinTitle->setMinimumSize(QSize(0, 40));
        widgetWinTitle->setMaximumSize(QSize(16777215, 40));
        horizontalLayout_2 = new QHBoxLayout(widgetWinTitle);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 0, 0, 0);
        labelWinIcon = new QLabel(widgetWinTitle);
        labelWinIcon->setObjectName(QStringLiteral("labelWinIcon"));
        labelWinIcon->setMinimumSize(QSize(30, 30));
        labelWinIcon->setMaximumSize(QSize(50, 50));
        labelWinIcon->setPixmap(QPixmap(QString::fromUtf8(":/resource/images/ic_app.png")));

        horizontalLayout_2->addWidget(labelWinIcon);

        labelWinTitle = new QLabel(widgetWinTitle);
        labelWinTitle->setObjectName(QStringLiteral("labelWinTitle"));
        labelWinTitle->setStyleSheet(QStringLiteral("color: #FFFFFF;"));

        horizontalLayout_2->addWidget(labelWinTitle);

        btnWinMin = new QPushButton(widgetWinTitle);
        btnWinMin->setObjectName(QStringLiteral("btnWinMin"));
        btnWinMin->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resource/common/ic_min.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnWinMin->setIcon(icon1);

        horizontalLayout_2->addWidget(btnWinMin, 0, Qt::AlignTop);

        btnWinClose = new QPushButton(widgetWinTitle);
        btnWinClose->setObjectName(QStringLiteral("btnWinClose"));
        btnWinClose->setFocusPolicy(Qt::NoFocus);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resource/common/ic_close_white.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnWinClose->setIcon(icon2);

        horizontalLayout_2->addWidget(btnWinClose, 0, Qt::AlignTop);

        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addWidget(widgetWinTitle);

        widgetBody = new QWidget(MainWindow);
        widgetBody->setObjectName(QStringLiteral("widgetBody"));
        horizontalLayout = new QHBoxLayout(widgetBody);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidgetMain = new QStackedWidget(widgetBody);
        stackedWidgetMain->setObjectName(QStringLiteral("stackedWidgetMain"));
        LoginWidget = new QWidget();
        LoginWidget->setObjectName(QStringLiteral("LoginWidget"));
        widgetUser = new QWidget(LoginWidget);
        widgetUser->setObjectName(QStringLiteral("widgetUser"));
        widgetUser->setGeometry(QRect(600, 160, 282, 147));
        widgetUser->setMinimumSize(QSize(282, 147));
        widgetUser->setMaximumSize(QSize(282, 147));
        btnExit = new QPushButton(widgetUser);
        btnExit->setObjectName(QStringLiteral("btnExit"));
        btnExit->setGeometry(QRect(36, 109, 75, 23));
        btnExit->setFocusPolicy(Qt::NoFocus);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/resource/images/ic_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnExit->setIcon(icon3);
        btnLogin = new QPushButton(widgetUser);
        btnLogin->setObjectName(QStringLiteral("btnLogin"));
        btnLogin->setGeometry(QRect(173, 110, 75, 23));
        btnLogin->setFocusPolicy(Qt::NoFocus);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/resource/images/ic_ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnLogin->setIcon(icon4);
        label = new QLabel(widgetUser);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(33, 22, 36, 16));
        label_2 = new QLabel(widgetUser);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(33, 66, 36, 16));
        lineEditUser = new QLineEdit(widgetUser);
        lineEditUser->setObjectName(QStringLiteral("lineEditUser"));
        lineEditUser->setGeometry(QRect(78, 22, 171, 20));
        lineEditPasswd = new QLineEdit(widgetUser);
        lineEditPasswd->setObjectName(QStringLiteral("lineEditPasswd"));
        lineEditPasswd->setGeometry(QRect(78, 66, 171, 20));
        lineEditPasswd->setEchoMode(QLineEdit::Password);
        stackedWidgetMain->addWidget(LoginWidget);
        MainWidget = new QWidget();
        MainWidget->setObjectName(QStringLiteral("MainWidget"));
        horizontalLayout_3 = new QHBoxLayout(MainWidget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(10, 0, 2, 2);
        widgetNav = new QWidget(MainWidget);
        widgetNav->setObjectName(QStringLiteral("widgetNav"));
        verticalLayout_3 = new QVBoxLayout(widgetNav);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        btnScorePage = new QPushButton(widgetNav);
        btnScorePage->setObjectName(QStringLiteral("btnScorePage"));
        btnScorePage->setFocusPolicy(Qt::NoFocus);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/resource/images/ic_goods.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnScorePage->setIcon(icon5);
        btnScorePage->setIconSize(QSize(24, 24));
        btnScorePage->setCheckable(true);

        verticalLayout_3->addWidget(btnScorePage);

        btnDataBackup = new QPushButton(widgetNav);
        btnDataBackup->setObjectName(QStringLiteral("btnDataBackup"));
        btnDataBackup->setFocusPolicy(Qt::NoFocus);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/resource/images/ic_backup.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDataBackup->setIcon(icon6);
        btnDataBackup->setIconSize(QSize(24, 24));
        btnDataBackup->setCheckable(true);

        verticalLayout_3->addWidget(btnDataBackup);

        verticalSpacer = new QSpacerItem(20, 330, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        btnQuit = new QPushButton(widgetNav);
        btnQuit->setObjectName(QStringLiteral("btnQuit"));
        btnQuit->setFocusPolicy(Qt::NoFocus);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/resource/images/ic_exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnQuit->setIcon(icon7);
        btnQuit->setIconSize(QSize(24, 24));

        verticalLayout_3->addWidget(btnQuit);


        horizontalLayout_3->addWidget(widgetNav);

        widgetRight = new QWidget(MainWidget);
        widgetRight->setObjectName(QStringLiteral("widgetRight"));
        verticalLayout_8 = new QVBoxLayout(widgetRight);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        stackedWidgetFunc = new AnimationStackedWidget(widgetRight);
        stackedWidgetFunc->setObjectName(QStringLiteral("stackedWidgetFunc"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_11 = new QVBoxLayout(page);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        groupBox_2 = new QGroupBox(page);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));

        verticalLayout_11->addWidget(groupBox_2, 0, Qt::AlignLeft|Qt::AlignTop);

        stackedWidgetFunc->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_5 = new QVBoxLayout(page_2);
        verticalLayout_5->setSpacing(10);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(10, 10, 10, 10);
        textBrowser = new QTextBrowser(page_2);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout_5->addWidget(textBrowser);

        stackedWidgetFunc->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        verticalLayout_9 = new QVBoxLayout(page_3);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        stackedWidgetFunc->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        horizontalLayout_6 = new QHBoxLayout(page_4);
        horizontalLayout_6->setSpacing(10);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(10, 10, 10, 0);
        widget_2 = new QWidget(page_4);
        widget_2->setObjectName(QStringLiteral("widget_2"));

        horizontalLayout_6->addWidget(widget_2);

        tableViewUsers = new QTableView(page_4);
        tableViewUsers->setObjectName(QStringLiteral("tableViewUsers"));

        horizontalLayout_6->addWidget(tableViewUsers);

        horizontalLayout_6->setStretch(1, 1);
        stackedWidgetFunc->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        groupBox_6 = new QGroupBox(page_5);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(180, 170, 351, 251));
        verticalLayout_2 = new QVBoxLayout(groupBox_6);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(6);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_15 = new QLabel(groupBox_6);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_15);

        lineEditOldPasswd = new QLineEdit(groupBox_6);
        lineEditOldPasswd->setObjectName(QStringLiteral("lineEditOldPasswd"));
        lineEditOldPasswd->setEchoMode(QLineEdit::Password);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineEditOldPasswd);

        label_16 = new QLabel(groupBox_6);
        label_16->setObjectName(QStringLiteral("label_16"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_16);

        lineEditNewPasswd = new QLineEdit(groupBox_6);
        lineEditNewPasswd->setObjectName(QStringLiteral("lineEditNewPasswd"));
        lineEditNewPasswd->setEchoMode(QLineEdit::Password);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, lineEditNewPasswd);

        label_17 = new QLabel(groupBox_6);
        label_17->setObjectName(QStringLiteral("label_17"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_17);

        lineEditNewPasswd2 = new QLineEdit(groupBox_6);
        lineEditNewPasswd2->setObjectName(QStringLiteral("lineEditNewPasswd2"));
        lineEditNewPasswd2->setEchoMode(QLineEdit::Password);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, lineEditNewPasswd2);


        verticalLayout_2->addLayout(formLayout_3);

        verticalSpacer_5 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_4 = new QSpacerItem(37, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        btnPasswdChange = new QPushButton(groupBox_6);
        btnPasswdChange->setObjectName(QStringLiteral("btnPasswdChange"));
        btnPasswdChange->setMinimumSize(QSize(150, 30));
        btnPasswdChange->setFocusPolicy(Qt::NoFocus);
        btnPasswdChange->setIcon(icon4);

        horizontalLayout_8->addWidget(btnPasswdChange);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_8);

        verticalSpacer_4 = new QSpacerItem(20, 45, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        stackedWidgetFunc->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        verticalLayout_6 = new QVBoxLayout(page_6);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        groupBox = new QGroupBox(page_6);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_10 = new QVBoxLayout(groupBox);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_14->addWidget(label_6);

        lineEditBackup = new QLineEdit(groupBox);
        lineEditBackup->setObjectName(QStringLiteral("lineEditBackup"));
        lineEditBackup->setMinimumSize(QSize(350, 0));
        lineEditBackup->setReadOnly(true);

        horizontalLayout_14->addWidget(lineEditBackup);

        toolButton = new QToolButton(groupBox);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        horizontalLayout_14->addWidget(toolButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_5);

        btnBackup = new QPushButton(groupBox);
        btnBackup->setObjectName(QStringLiteral("btnBackup"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/resource/images/ic_data_backup.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnBackup->setIcon(icon8);
        btnBackup->setIconSize(QSize(24, 24));

        horizontalLayout_14->addWidget(btnBackup);

        btnDataUdo = new QPushButton(groupBox);
        btnDataUdo->setObjectName(QStringLiteral("btnDataUdo"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/resource/images/ic_data_udo.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDataUdo->setIcon(icon9);
        btnDataUdo->setIconSize(QSize(24, 24));

        horizontalLayout_14->addWidget(btnDataUdo);


        verticalLayout_10->addLayout(horizontalLayout_14);

        verticalSpacer_2 = new QSpacerItem(20, 490, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_2);


        verticalLayout_6->addWidget(groupBox);

        stackedWidgetFunc->addWidget(page_6);

        verticalLayout_8->addWidget(stackedWidgetFunc);

        widgetStatus = new QWidget(widgetRight);
        widgetStatus->setObjectName(QStringLiteral("widgetStatus"));
        widgetStatus->setMinimumSize(QSize(0, 35));
        horizontalLayout_5 = new QHBoxLayout(widgetStatus);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(2, 2, 2, 2);
        widget = new QWidget(widgetStatus);
        widget->setObjectName(QStringLiteral("widget"));

        horizontalLayout_5->addWidget(widget);

        labelHostAddr = new QLabel(widgetStatus);
        labelHostAddr->setObjectName(QStringLiteral("labelHostAddr"));

        horizontalLayout_5->addWidget(labelHostAddr);

        labelSystemTime = new QLabel(widgetStatus);
        labelSystemTime->setObjectName(QStringLiteral("labelSystemTime"));
        labelSystemTime->setMinimumSize(QSize(200, 0));
        labelSystemTime->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(labelSystemTime);

        horizontalLayout_5->setStretch(0, 1);

        verticalLayout_8->addWidget(widgetStatus);


        horizontalLayout_3->addWidget(widgetRight);

        stackedWidgetMain->addWidget(MainWidget);

        horizontalLayout->addWidget(stackedWidgetMain);


        verticalLayout->addWidget(widgetBody);

        QWidget::setTabOrder(lineEditUser, lineEditPasswd);

        retranslateUi(MainWindow);

        stackedWidgetMain->setCurrentIndex(1);
        stackedWidgetFunc->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\215\263\346\227\266\351\200\232\350\256\257\350\275\257\344\273\266\345\220\216\345\217\260", Q_NULLPTR));
        labelWinIcon->setText(QString());
        labelWinTitle->setText(QApplication::translate("MainWindow", "\345\215\263\346\227\266\351\200\232\350\256\257\350\275\257\344\273\266 \345\220\216\345\217\260", Q_NULLPTR));
        btnWinMin->setText(QString());
        btnWinClose->setText(QString());
        btnExit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        btnLogin->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\347\224\250\345\220\215\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        lineEditUser->setText(QApplication::translate("MainWindow", "admin", Q_NULLPTR));
        lineEditPasswd->setText(QApplication::translate("MainWindow", "123456", Q_NULLPTR));
        btnScorePage->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\344\277\241\346\201\257", Q_NULLPTR));
        btnDataBackup->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\244\207\344\273\275", Q_NULLPTR));
        btnQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272\347\263\273\347\273\237", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\347\224\250\346\210\267\344\277\241\346\201\257", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "\346\227\247\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "\346\226\260\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "\346\226\260\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        btnPasswdChange->setText(QApplication::translate("MainWindow", "\344\277\256\346\224\271", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_6->setText(QApplication::translate("MainWindow", "\345\244\207\344\273\275\347\233\256\345\275\225\357\274\232", Q_NULLPTR));
        toolButton->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        btnBackup->setText(QApplication::translate("MainWindow", "\345\244\207\344\273\275", Q_NULLPTR));
        btnDataUdo->setText(QApplication::translate("MainWindow", "\350\277\230\345\216\237", Q_NULLPTR));
        labelHostAddr->setText(QApplication::translate("MainWindow", "\346\234\254\346\234\272IP\357\274\232192.168.1.1", Q_NULLPTR));
        labelSystemTime->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
