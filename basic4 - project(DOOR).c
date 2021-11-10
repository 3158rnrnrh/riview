#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int GetRandomNumber(int level);
void ShowQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void)
{
	// ������Ʈ �� ��й�ȣ, 5���� ���� ��� Ǯ��� � �°� Ʋ�ȴ��� ī��Ʈ
	// ���� 5���� �ְ�, �� ������ ���� ����� ���� ��� ���� (����)
	srand(time(NULL));
	int count = 0;
	for (int i = 1; i <= 5; i++)
	{
		int num1 = GetRandomNumber(i);
		int num2 = GetRandomNumber(i);
		ShowQuestion(i, num1, num2);
		
		int answer = -1;
		scanf_s("%d", &answer);
		if (answer == -1)
		{
			printf("���α׷��� �����մϴ�\n");
			exit(0);
		}
		else if (answer == num1 * num2)
		{
			success();
			count++;
		}
		else
		{
			fail();
		}
	}
	printf("\n\n ����� �� 5���� ��й�ȣ�� %d ���� �������ϴ� !\n", count);


	return 0;
}

int GetRandomNumber(int level)
{
	return rand() % (level * 7) + 1;
}
void ShowQuestion(int level, int num1, int num2)
{
	printf("\n\n\n######### %d ��° ��й�ȣ########\n", level);
	printf("\n\t\ %d x %d ?\n\n", num1, num2);
	printf("#####################################\n");
	printf("��й�ȣ�� �Է��ϼ��� (���� : -1) >>");
}
void success()
{
	printf("�����Դϴ� !\n");
}
void fail()
{
	printf("��! Ʋ�Ƚ��ϴ� \n");
}