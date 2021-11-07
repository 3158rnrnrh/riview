#include<stdio.h>

int main(void)
{
	// 기초		
	int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);


	// 실수형 변수에 대한 에제
	float f = 46.5f;
	printf("%f\n", f);
	double d = 4.428;
	printf("%.2lf\n", d);

	// 상수
	const int YEAR = 2000;
	printf("태어난 년도 : %d\n", YEAR);

	// printf
	// 연산
	int add = 3 + 7;
	printf("3 + 7 = %d\n", add);

	printf("%d + %d = %d\n", 5, 6, 5 + 6);

	// scacf
	// 키보드 입력을 받아서 저장
	int intput;
	printf("값을 입력하세요 :");
	scanf_s("%d", &intput);
	printf("입력값 : %d\n", intput);

	int one, two, three;
	printf("3개의 정수를 입력하세요 :");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three);

	// 문자(한 글자), 문자열(한 글자 이상의 여러 글자)
	char c = 'A';
	printf("%c\n", c);

	char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);


	// 프로젝트
	// 경찰관이 범죄자의 정보를 입수 (조서 작성)
	// 이름 , 나이, 몸무게, 키, 범죄명
	char name[64];
	printf("이름이 뭐에요?");
	scanf_s("%s", name, sizeof(name));

	int old;
	printf("나이가 어떻게 되시죠? ");
	scanf_s("%d", &old);

	float weight;
	printf("몸무게가 몇kg 이시죠? ");
	scanf_s("%f", &weight);

	double height;
	printf("키가 몇cm 이시죠? ");
	scanf_s("%lf", &height);

	char crime[85];
	printf("무슨 잘못을 하셨나요? ");
	scanf_s("%s", crime, sizeof(crime));

	printf("\n\n--- 범죄자 정보 ---\n\n");
	printf("이름               : %s\n", name);
	printf("나이               : %d\n", old);
	printf("몸무게             : %f\n", weight);
	printf("키                 : %.1lf\n", height);
	printf("잘못               : %s\n", crime);



	return 0;
}