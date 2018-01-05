#include "../include/stdinc.h"

static void
usage()
{
	printf("options: \n");
	printf("\tusage[1]: ip\n");
	printf("\t\t-i +ip\n");
	printf("\tusage[2]: port\n");
	printf("\t\t-p +port\n");
}

static void
get_fd_info(int argc, char *argv[])
{
	int opt;
	while ((opt = getopt(argc, argv, "i:p:")) != -1) {
		switch (opt) {
		case 'i':
			argv[1] = optarg;
			break;
		case 'p':
			argv[2] = optarg;
			break;
		default:
			usage();
			exit(1);
		}
	}
}

int
main(int argc, char *argv[])
{
	int fd;
	struct sockaddr_in client_addr;

	if (argc < 3) {
		fprintf(stderr, "options error\n");
		usage();
		exit(1);
	}

	get_fd_info(argc, argv);

	fd = socket(AF_INET, SOCK_STREAM, 0);
	if (fd < 0) {
		fprintf(stderr, "socket error\n");
		exit(1);
	}

	memset(&client_addr, 0, sizeof(client_addr));
	client_addr.sin_family = AF_INET;
	client_addr.sin_port = htons(atoi(argv[2]));
	inet_pton(AF_INET, argv[1], &client_addr.sin_addr.s_addr);
	
	if (connect(fd, (struct sockaddr *)&client_addr, sizeof(client_addr)) < 0) {
		fprintf(stderr, "client connect error\n");
		exit(1);
	}

	close(fd);

	return 0;
}
