#include "../include/stdinc.h"
#include "socket_info.h"

void
stdout_server_info(int port, struct sockaddr_in *server_info)
{
	struct info *ser_info;

	ser_info = (struct info *)malloc(sizeof(struct info));
	if (ser_info == NULL) {
		fprintf(stderr, "malloc error\n");
		exit(1);
	}

	inet_ntop(AF_INET, &server_info->sin_addr.s_addr, ser_info->ip, IPLENGTH);
	//ser_info->port = ntohs(server_info->sin_port);
	//printf("server_port: %d\n", ser_info->port);
	printf("server_port: %d\n", port);
	printf("server_ip: %s\n", ser_info->ip);

	free(ser_info);
}
