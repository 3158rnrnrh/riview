#include <stdio.h>

// ����
void p(int num);
void function_without_return();
int function_with_return();
void function_without_params();
void function_wiht_params(int num1, int num2, int num3);
int apple(int total, int ate);
int add(int cou1, int cou2);
int sub(int cou1, int cou2);
int mul(int cou1, int cou2);
int div(int cou1, int cou2);

int main(void)
{
	// function
	// ����
	
	int num = 2;
	printf("num�� %d �Դϴ�\n", num);

	// 2 + 3 ��?
	num = num + 3;
	p(num);

	// 5 - 1 ��?
	num -= 1;
	p(num);

	// 4 x 3 ��?
	num *= 3;
	p(num);

	// 12 /6 ��?
	num /= 6;
	p(num);
	//==================================================================================================================================================


	// �Լ� ����
	// ��ȯ���� ���� �Լ�
	function_without_return();

	// ��ȯ���� �ִ� �Լ�
	int ret = function_with_return();
	p(ret);

	// �Ķ����(���ް�)�� ���� �Լ�
	function_without_params();

	// �Ķ����(���ް�)�� �ִ� �Լ�
	function_wiht_params(1, 2, 3);

	// �Ķ����(���ް�)�� �ް�, ��ȯ���� �ִ� �Լ�
	int tur = apple(5, 2);
	printf("��� 5�� �߿� 2���� ������? %d ���� ���ƿ�\n", tur);

	// �Ķ����(���ް�)�� �ް�, ��ȯ���� �ִ� �Լ� (�ٸ� ���)
	printf("��� %d �� �߿� %d ���� ������? %d ���� ���ƿ�\n", 55, 21, apple(55, 21));
	//==================================================================================================================================================


	// ���� �Լ�
	int cou = 2;
	cou = add(cou, 3);
	p(cou);

	cou = sub(cou, 1);
	p(cou);

	cou = mul(cou, 3);
	p(cou);

	cou = div(cou, 6);
	p(cou);
	//==================================================================================================================================================


	return 0;
}

// ����
void p(int num)
{
	printf("num �� %d �Դϴ�\n", num);
}
void function_without_return()
{
	printf("��ȯ���� ���� �Լ��Դϴ�\n");
}
int function_with_return()
{
	printf("��ȯ���� �ִ� �Լ��Դϴ�.\n");
	return 10;
}
void function_without_params()
{
	printf("���ް��� ���� �Լ��Դϴ�\n");
}
void function_wiht_params(int num1, int num2, int num3)
{
	printf("���ް��� �ִ� �Լ��̸� ���޹��� ���� %d, %d, %d �Դϴ�\n", num1,num2, num3);
}
int apple(int total, int ate)
{
	return total - ate;
}
int add(int cou1, int cou2)
{
	return cou1 + cou2;
}
int sub(int cou1, int cou2)
{
	return cou1 - cou2;
}
int mul(int cou1, int cou2)
{
	return cou1 * cou2;
}
int div(int cou1, int cou2)
{
	return cou1 / cou2;
}