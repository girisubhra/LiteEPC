#include<stdio.h>
#include "headers.h"
int main()
{
	int choice;
	printf("MME is Loading \n");
	prnLOGO();
	mme_init();

	for(;;)
	{
		printf("1. Send Create Session Request\n");
		printf("2. Send Modify Bearer Request \n");
		scanf("%d",&choice);
	
		switch(choice)
		{
			case 1:
				create_session_request();
				break;
			case 2:
				modify_bearer_request();
				break;
			default:
				printf("Invalid option\n");
				exit(0);
		}
	}

}
