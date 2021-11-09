#include<time.h>
#include<stdlib.h>	
#include<stdio.h>

int main(void)
{
	// srand(time(NULL));
	//int num = rand() % 3;	
	printf("난수 초기화 이전..\n\n");
	for (int i = 0; i < 10; i++)
		printf("%d", rand() % 10);

	srand(time(NULL));
	printf("\n\n난수 초기화 이후..\n");
	for (int i = 0; i < 10; i++)
		printf("%d", rand() % 10);
	
	return 0;
}