#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int GetRandomNumber(int level);
void ShowQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void)
{
	// 프로젝트 문 비밀번호, 5개의 문을 모두 풀어보고 몇개 맞고 틀렸는지 카운트
	// 문이 5개가 있고, 각 문마다 점점 어려운 수식 퀴즈가 출제 (랜덤)
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
			printf("프로그램을 종료합니다\n");
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
	printf("\n\n 당신은 총 5개의 비밀번호중 %d 개를 맞혔습니다 !\n", count);


	return 0;
}

int GetRandomNumber(int level)
{
	return rand() % (level * 7) + 1;
}
void ShowQuestion(int level, int num1, int num2)
{
	printf("\n\n\n######### %d 번째 비밀번호########\n", level);
	printf("\n\t\ %d x %d ?\n\n", num1, num2);
	printf("#####################################\n");
	printf("비밀번호를 입력하세요 (종료 : -1) >>");
}
void success()
{
	printf("정답입니다 !\n");
}
void fail()
{
	printf("땡! 틀렸습니다 \n");
}