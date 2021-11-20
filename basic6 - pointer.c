#include<stdio.h>

void swap(int a, int b);
void swap_addr(int* a, int* b);
void changeArray(int* ptr);

int main(void)
{
	// 포인터
	// [철수] : 101호 -> 메모리 공간의 주소 // 컴퓨터 메모리공간
	// [영희] : 201호
	// [민수] : 301호
	// 각 문 앞에 '암호'가 걸려있음
	int 철수 = 1;
	int 영희 = 2;
	int 민수 = 3;
	
	printf("철수네 주소 : %d, 암호 : %d\n", &철수, 철수);
	printf("영희네 주소 : %d, 암호 : %d\n", &영희, 영희);
	printf("민수네 주소 : %d, 암호 : %d\n", &민수, 민수);

	// 미션맨

	// 첫 번째 미션 : 아파트 각 직에 방문하여 문에 적힌 암호 확인
	int* 미션맨;
	미션맨 = &철수;
	printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	미션맨 = &영희;
	printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	미션맨 = &민수;
	printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	// 두 번째 미션 : 각 암호에 3을 곱해라
	미션맨 = &철수;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 암호를 바꾼 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	미션맨 = &영희;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 암호를 바꾼 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	미션맨 = &민수;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 암호를 바꾼 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	// 스파이
	// 미션맨이 바꾼 암호에서 2를 빼라
	int* 스파이 = 미션맨;
	printf("\n ... 스파이가 미션 수행하는중 ... \n\n");
	스파이 = &철수;
	*스파이 = *스파이 - 2;
	printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", 스파이, *스파이);

	스파이 = &영희;
	*스파이 = *스파이 - 2;	
	printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", 스파이, *스파이);

	스파이 = &민수;
	*스파이 = *스파이 - 2;	
	printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", 스파이, *스파이);

	printf("\n ... 철수 영희 민수는 집에 오고서는 바뀐 암호를 보고 깜놀 ...\n\n");

	printf("철수네 주소 : %d, 암호 : %d\n", &철수, 철수);
	printf("영희네 주소 : %d, 암호 : %d\n", &영희, 영희);
	printf("민수네 주소 : %d, 암호 : %d\n", &민수, 민수);

	printf("미션맨의 주소 : %d\n", &미션맨);
	printf("스파이의 주소 : %d\n\n\n\n\n\n\n\n\n\n", &스파이);
	//================================================================================================================

	// 배열 
	int arr[3] = { 5,10,15 };
	int* ptr = arr;
	for (int i = 0; i < 3; i++)
	{
		printf("배열 arr[%d] 의 값 : %d\n", i, arr[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("포인터 ptr[%d] 의 값 : %d\n", i, ptr[i]);
	}

	ptr[0] = 100;
	ptr[1] = 200;
	ptr[2] = 300;
	for (int i = 0; i < 3; i++)
	{
		printf("배열 arr[%d] 의 값 : %d\n", i, arr[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("포인터 ptr[%d] 의 값 : %d\n", i, ptr[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("배열 arr[%d] 의 값 : %d\n", i, *(arr + i));
	}
	for (int i = 0; i < 3; i++)
	{
		printf("포인터 ptr[%d] 의 값 : %d\n", i, *(ptr + i));
	}

	printf("arr 자체의 주소 : %d\n", arr);
	printf("arr[1] 의 주소 : %d\n", &arr[1]);

	printf("arr 자체의 값이 가지는 주소의 실제 값 : %d\n", *arr);
	printf("arr[0] 의 실제 값 : %d\n", *&arr[0]); 
	//================================================================================================================

	// SWAP
	int a = 10;
	int b = 20;

	printf("a 의 주소 : %d\n", &a);
	printf("b 의 주소 : %d\n", &b);
	printf("Swap함수 전 => a : %d, b : %d\n", a, b);
	swap(a, b);
	printf("Swap 함수 후 => a : %d, b : %d\n", a, b);

	// 주소값을 넘기면? 메모리 공간에 있는 주소값 자체를 넘기면... 
	printf("(주소값 전달)Swap 함수 전 => a : %d, b : %d\n", a, b);
	swap_addr(&a, &b);
	printf("(주소값 전달)Swap 함수 후 => a : %d, b : %d\n", a, b);
	//================================================================================================================

	// arr2 자체가 주소 
	int arr2[3] = { 10,20,30 };
	changeArray(arr2);
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr2[i]);
	}


	return 0;

}


void swap(int a, int b)
{
	printf("(Swap 함수 내) a 의 주소 : %d\n", &a);
	printf("(Swap 함수 내) b 의 주소 : %d\n", &b);	

	int temp = a;
	a = b;
	b = temp;
	printf("Swap 함수 내 => a : %d, b : %d\n", a, b);
	
}

void swap_addr(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("(주소값 전달)Swap 함수 내 => a : %d, b : %d\n", *a, *b);
}

void changeArray(int* ptr)
{
	ptr[2] = 50;
}