#ifndef CHATROOM_SERVER_TCPNET_H
#define CHATROOM_SERVER_TCPNET_H

#include <stdio.h>
#include <stdlib.h>
#include <netinet/in.h> //sockaddr_in
#include <unistd.h> //close() 文件夹
#include <sys/stat.h>
#include <string.h> //memset()
#include <fcntl.h> //fcntl()
#include <errno.h>
#include <list>
#include <arpa/inet.h> //inet_pton()
#include <sys/socket.h>
#include <sys/epoll.h> //epoll()


#define EPOLL_SIZE 2048 //Epoll最大事件数

class TCPNet {
private:
    int m_srvSock;
    int m_epfd;     //创建epoll文件描述符
    epoll_event event;
//    char buffer[BUF_SIZE];
public:
    std::list<int> m_cliList; //已连接的客户端socket列表
    TCPNet();
    ~TCPNet();
    void handle_error(const char* message);
    bool initNetWork();
//    int setnonblocking(int fd); //将文件描述符设置为非堵塞的
    void addfd(int epfd, int socket, bool epoll_et); //注册文件描述符上的事件
    bool sendData(int sock,char* szbuf,int nlen);
    void run();
};


#endif //CHATROOM_SERVER_TCPNET_H
