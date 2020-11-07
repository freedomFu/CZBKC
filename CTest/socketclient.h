// SOCKETCLIENT_H
#ifndef _SOCKETCLIENT_H
#define _SOCKETCLIENT_H

#ifdef __cplusplus
extern "C"{
#endif

// 第一套API函数
// socket客户端初始化
int socketclient_init(void **handle);

// socket客户端报文发送
int socketclient_send(void *handle, unsigned char *buf, int buflen);

// socket客户端报文接收
int socketclient_recv(void *handle, unsigned char *buf, int *buflen);

// socket客户端环境释放
int socketclient_destory(void *handle);

// 第二套API函数
// socket客户端初始化 
int socketclient_init2(void **handle); 

// socket客户端报文发送 
int socketclient_send2(void *handle, unsigned char *buf, int buflen);  

// socket客户端报文接收 
int socketclient_recv2(void *handle, unsigned char **buf, int *buflen);  
// socket客户端环境释放 
int socketclient_destory2(void **handle);

#ifdef __cplusplus 
}
#endif

#endif