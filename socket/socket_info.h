#ifndef __SOCKET_INFO_H__
#define __SOCKET_INFO_H__
	
#define IPLENGTH	1024

struct info {
	int sockfd;
	int port;
	char ip[IPLENGTH];
};


#endif
