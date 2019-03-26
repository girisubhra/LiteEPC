#include <stdio.h>
#include <string.h>
#include "headers.h"
struct sockaddr_in mme;

int mme_init_socket_if()
{
	int sock;
#ifdef TEST_043
	printf("Hello Macro\n\n");
#endif	
	mme.sin_family=AF_INET;
	mme.sin_port=htons(2123);
	mme.sin_addr.s_addr=htonl("127.0.0.1");

	if((sock=socket(PF_INET,SOCK_DGRAM,0))==-1)
	{
		perror("\nSocket error : ");
		return -1;
	}
	return sock;
}
	
int mme_init()
{
	int sockfd;
	sockfd = mme_init_socket_if();
	printf("Initialization success\n");
}

void prnLOGO()
{
	printf("---------------------------------------- \n");
	printf("|   ||        ||  ||        || ||||||  | \n");
	printf("|   || ||  || ||  || ||  || || ||      | \n");
	printf("|   ||   ||   ||  ||   ||   || ||||||  | \n");
	printf("|   ||        ||  ||        || ||      | \n");
	printf("|   ||        ||  ||        || ||||||  | \n");
	printf("|                                      | \n");
	printf("---------------------------------------- \n");
}










