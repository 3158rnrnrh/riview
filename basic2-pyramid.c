#include <stdio.h>

int main(void)
{
	//++ 뿔뿔
	int a = 10;
	printf("a 는 %d\n", a);
	a++;
	printf("a 는 %d\n", a);
	a++;
	printf("a 는 %d\n", a);

	int b = 20;
	printf("b 는 %d\n", ++b);
	printf("b 는 %d\n", b++);
	printf("b 는 %d\n", b);
	//======================================================================================================================================

	
	// 반복문
	// for, while, do while

	// for(선언; 조건; 증감) { }
	for (int i = 1; i <= 10; i++)
	{
		printf("Hello World %d\n", i);
	}

	// while(조건)  { }
	int i = 1;
	while (i <= 10)
	{
		printf("Hello World %d\n", i++);

	}

	// do { } while (조건);
	int d = 1;
	do {
		printf("Hello World %d\n", d++);
	} while (d <= 10);
	//======================================================================================================================================


	// 2중 반복문
	for (int k = 1; k <= 3; k++)
	{
		printf("첫 번째 반복문 : %d\n", k);

		for (int j = 1; j <= 5; j++)
		{
			printf("      두 번째 반복문 : %d\n", j);
		}
	}

	// 구구단 (응용)
	// 2 x 1 = 2
	// 2 x 2 = 4
	// 2 x 3 = 6
	// 2 x 4 = 8...
	//...
	// 9 x 9 = 81
	for (int i = 2; i <= 9; i++)
	{
		printf("%d단 계산\n", i);
		for (int j = 1; j <= 9; j++)
		{
			printf("   %d x %d = %d\n", i, j, i * j);
		}
	}
	
	
	// 다른 응용
	for (int i = 0; i <= 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	// 또 다른 응용 (거꾸로 별), 위 응용과 좌우 대칭
	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5 - 1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	//======================================================================================================================================


	// 프로젝트 (피라미드) (1, 3, 5, 7, 9개 순으로)
	int floor;
	printf("몇 층으로 쌓겠는가?");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++)
	{
		for (int j = i; j < floor - 1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < i * 2 + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}



	return 0;
}