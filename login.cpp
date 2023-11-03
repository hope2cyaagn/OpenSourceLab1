login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login() {
    temp ++;
}

void login::setKernel(TCPKernel *kernel) {
    m_pKernel = kernel;
}

void login::on_Button_login_clicked() {
    //获取登录信息
    QString strUser = ui->lineEdit_userName->text();
    QString strPassword = ui->lineEdit_userPwd->text();
    //发送登录请求
    STRU_LOGIN_RQ loginRQ;
    loginRQ.m_type = _default_protocol_login_rq;
    strlcpy(loginRQ.loginName,strUser.toStdString().c_str(),strUser.size() + 1);
    strlcpy(loginRQ.loginPassword,strPassword.toStdString().c_str(),strPassword.size() + 1);
    m_pKernel->sendData((char*)&loginRQ,sizeof(loginRQ));
}

