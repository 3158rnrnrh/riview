#include <stdio.h>

int main(void)
{
	//++ �Ի�
	int a = 10;
	printf("a �� %d\n", a);
	a++;
	printf("a �� %d\n", a);
	a++;
	printf("a �� %d\n", a);

	int b = 20;
	printf("b �� %d\n", ++b);
	printf("b �� %d\n", b++);
	printf("b �� %d\n", b);
	//======================================================================================================================================

	
	// �ݺ���
	// for, while, do while

	// for(����; ����; ����) { }
	for (int i = 1; i <= 10; i++)
	{
		printf("Hello World %d\n", i);
	}

	// while(����)  { }
	int i = 1;
	while (i <= 10)
	{
		printf("Hello World %d\n", i++);

	}

	// do { } while (����);
	int d = 1;
	do {
		printf("Hello World %d\n", d++);
	} while (d <= 10);
	//======================================================================================================================================


	// 2�� �ݺ���
	for (int k = 1; k <= 3; k++)
	{
		printf("ù ��° �ݺ��� : %d\n", k);

		for (int j = 1; j <= 5; j++)
		{
			printf("      �� ��° �ݺ��� : %d\n", j);
		}
	}

	// ������ (����)
	// 2 x 1 = 2
	// 2 x 2 = 4
	// 2 x 3 = 6
	// 2 x 4 = 8...
	//...
	// 9 x 9 = 81
	for (int i = 2; i <= 9; i++)
	{
		printf("%d�� ���\n", i);
		for (int j = 1; j <= 9; j++)
		{
			printf("   %d x %d = %d\n", i, j, i * j);
		}
	}
	
	
	// �ٸ� ����
	for (int i = 0; i <= 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	// �� �ٸ� ���� (�Ųٷ� ��), �� ����� �¿� ��Ī
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


	// ������Ʈ (�Ƕ�̵�) (1, 3, 5, 7, 9�� ������)
	int floor;
	printf("�� ������ �װڴ°�?");
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