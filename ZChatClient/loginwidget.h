#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H

#include "customwidget.h"
#include "clientsocket.h"
#include "mainwindow.h"

namespace Ui {
class LoginWidget;
}

// 登陆界面设计
class LoginWidget : public CustomMoveWidget
{
    Q_OBJECT

public:
    explicit LoginWidget(QWidget *parent = 0);
    ~LoginWidget();

signals:
    //转换形态信号

    void signalRotate();
protected:

    void changeEvent(QEvent *e);

private slots:

    // 登陆按钮触发函数
    void on_btnLogin_clicked();

    // 注册
    void on_btnRegister_clicked();

    // 服务器信息返回处理
    void SltTcpStatus(const quint8 &state);
    //取消保存配置
    void on_btnCancel_clicked();
    //保存配置
    void on_btnSaveCfg_clicked();
    //菜单
    void on_btnWinMenu_clicked();
    //动画停止
    void SltAnimationFinished();
    //停止编辑出发函数
    void SltEditFinished();

    //记住密码 标记
    void on_checkBoxPasswd_clicked(bool checked);
    //自动登录 标记
    void on_checkBoxAutoLogin_clicked(bool checked);
private:
    Ui::LoginWidget *ui;

    bool m_bConnected;
    // socket通信
    ClientSocket *m_tcpSocket;

    void InitWidget();
protected:
    void paintEvent(QPaintEvent *);
};

#endif // LOGINWIDGET_H
