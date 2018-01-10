#include "../include/stdinc.h"
#include "socket_info.h"
#include "common_function.h"

static void
usage(char *argv)
{
	printf("options: \n");
	printf("\targv[1]: port\n");
	printf("\t\t-p + port\n");
}

int
main(int argc, char *argv[])
{
	struct info server_info;
	struct sockaddr_in server_addr;
	int opt;
	int client_fd;
	char buf[1024];
	int size;

	if (argc < 2) {
		fprintf(stderr, "options error\n");
		usage(argv[0]);
		exit(1);
	}

	while ((opt = getopt(argc, argv, "p:")) != -1) {
		switch (opt) {
		case 'p':
			server_info.port = atoi(optarg);
			break;
		default:
			usage(argv[0]);
			exit(1);
		}
	}

	if ((server_info.sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
		fprintf(stderr, "socket error\n");
		exit(1);
	}
	
	memset(&server_addr, 0, sizeof(server_addr));
	server_addr.sin_family = AF_INET;
	server_addr.sin_port = htons(atoi(argv[1]));
	//server_addr.sin_addr.s_addr = INADDR_ANY;
	server_addr.sin_addr.s_addr = INADDR_ANY;

	if (bind(server_info.sockfd, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
		fprintf(stderr, "bind error\n");
		exit(1);
	}

	if (listen(server_info.sockfd, 10) < 0) {
		fprintf(stderr, "listen error\n");
		exit(1);
	}

	while (1) {
		stdout_server_info(server_info.port, &server_addr);
		client_fd = accept(server_info.sockfd, NULL, NULL);
		if (client_fd < 0) {
			fprintf(stderr, "accept error\n");
			break;
		}
		if ((size = read(client_fd, buf, sizeof(buf))) < 0) {
			fprintf(stderr, "read error\n");
			break;
		}
		printf("buf = %s\n", buf);
	}	

	close(server_info.sockfd);
	
	return 0;
}
