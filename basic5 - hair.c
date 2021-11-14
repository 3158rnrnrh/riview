# include<stdio.h>
# include<time.h>

int main(void)
{
	// 배열
	int subway_1 = 30;
	int subway_2 = 40;
	int subway_3 = 50;

	printf("지하철 1호자에 %d 명이 타고 있습니다\n", subway_1);
	printf("지하철 2호자에 %d 명이 타고 있습니다\n", subway_2);
	printf("지하철 3호자에 %d 명이 타고 있습니다\n", subway_3);

	// 여러개의 변수를 함께, 동시에 생성
	int subway_array[3];
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++)
	{
		printf("지하철 %d 호차에 %d 명이 타고 있습니다\n", i + 1, subway_array[i]);
	}
	//==========================================================================================================================


	// 값 설정 방법
	int ard[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", ard[i]);
	}

	// 배열 크기는 항상 상수로 선언
	int size = 10;
	int arr[10];

	// 배열 크기는 항상 상수로 선언 2

	int arrr[10] = {1,2};
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arrr[i]);
	}

	// int arrr[] = { 1,2 };

	float arr_f[5] = { 1.0f, 2.0f, 3.0f };
	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arr_f[i]);
	}
	//==========================================================================================================================


	// 문자 vs 문자열
	char c = 'A';
	printf("%c\n", c);

	char str[7] = "coding";
	printf("%s\n", str);

	char std[] = "coding";
	printf("%d\n", sizeof(std));

	for (int i = 0; i < sizeof(std); i++)
	{
		printf("%c\n", std[i]);
	}

	char kor[] = "나도코딩";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));
	//==========================================================================================================================


	// 문자열 심화
	char c_array[7] = {'c','o','d','i','n','g','\0'};  // 1번
	printf("%s\n", c_array);
	char c_array[6] = { 'c','o','d','i','n','g' };		// 2번
	printf("%s\n", c_array);

	char c_array[10] = { 'c','o','d','i','n','g' };
	printf("%s\n", c_array);						// 3번
	for (int i = 0; i < sizeof(c_array); i++)		// 4번
	{
		printf("%c\n", c_array[i]);
	}

	for (int i = 0; i < sizeof(c_array); i++)		// 5번
	{
		printf("%d\n", c_array[i]);
	}

	// 문자열 입력받기 : 경찰서 조서 쓰기 예제
	char name[256];
	printf("이름을 입력하세요 : ");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name);
	//==========================================================================================================================


	// ASCII 코드
	printf("%c\n", 'a');		// 1번
	printf("%d\n", 'a');		// 2번

	// ASCII 코드 2
	for (int i = 0; i < 127; i++)
	{
		printf("아스키 코드 정수 %d : %c\n", i, i);
	}
	//==========================================================================================================================


	// 프로젝트
srand(time(NULL));
printf("\n\n === 아빠는 대머리 게임 === \n\n");
int answer;
int treatment = rand() % 4;
int cntShowBottle = 0;
int prevShowBottle = 0;

// 3번의 기회
for (int i = 1; i <= 3; i++)
{
	int bottle[4] = { 0,0,0,0 };
	do {
		cntShowBottle = rand() % 2 + 2;
	} while (cntShowBottle == prevShowBottle);
	prevShowBottle = cntShowBottle; 

	int isIncluded = 0;
	printf(" > %d 번째 시도 : ", i);

	// 보여줄 병 종류 선택
	for (int j = 0; j < cntShowBottle; j++)
	{
		int randBottle = rand() % 4;

		// 아직 선택되지 않은 병이면 선택되었을 때 선택처리
		if (bottle[randBottle] == 0)
		{
			bottle[randBottle] = 1;
			if (randBottle == treatment)
			{
				isIncluded = 1;
			}
		}
		// 이미 선택된 병이면, 중복이므로 다시 선택
		else
		{
			j--;
		}
	}
	// 사용자에게 문제 표시
	for (int k = 0; k < 4; k++)
	{
		if (bottle[k] == 1)
			printf("%d", k + 1);
	}
	printf(" 물약을 머리에 바릅니다\n\n");
	
	if (isIncluded == 1)
	{
		printf(" >> 성공 ! 머리가 났어요 ! \n");
	}
	else
	{
		printf(" >> 실패 ! 머리가 나지 않았어요 ! \n");
	}

	printf("\n ... 계속 하려면 아무키나 누르세요 ...");
	getchar();
}
printf("\n\n발모제는 몇 번일까요?");
scanf_s("%d", &answer);

if (answer = treatment + 1)
{
	printf("\n >>정답입니다~\n");
}
else
{
	printf("\n >> 땡 ! 틀렸어요. 정답은 %d 입니다\n", treatment + 1);
}







	return 0;
}