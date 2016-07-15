#include<stdio.h>
extern int mme_init();
int main()
{
	printf("MME is Loading \n");
	prnLOGO();
	mme_init();
}
