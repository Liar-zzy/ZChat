#include "mainwindow.h"

#include "myapp.h"
#include "global.h"
#include "loginwidget.h"
#include "databasemagr.h"
#include "picturecutdialog.h"

#include <QApplication>
#include <QHostInfo>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setQuitOnLastWindowClosed(false);

    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF8"));

    MyApp::InitApp(a.applicationDirPath());
    myHelper::setStyle("default");
    // 加载数据库
    DataBaseMagr::Instance()->OpenUserDb(MyApp::m_strDatabasePath + "user.db");
    DataBaseMagr::Instance()->OpenMessageDb(MyApp::m_strDatabasePath + "msg.db");

    //调试用
    //MainWindow w;
    LoginWidget w;
    myHelper::FormInCenter(&w);
    w.show();

    return a.exec();
}
