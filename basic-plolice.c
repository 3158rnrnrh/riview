#include<stdio.h>

int main(void)
{
	// ����		
	int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);


	// �Ǽ��� ������ ���� ����
	float f = 46.5f;
	printf("%f\n", f);
	double d = 4.428;
	printf("%.2lf\n", d);

	// ���
	const int YEAR = 2000;
	printf("�¾ �⵵ : %d\n", YEAR);

	// printf
	// ����
	int add = 3 + 7;
	printf("3 + 7 = %d\n", add);

	printf("%d + %d = %d\n", 5, 6, 5 + 6);

	// scacf
	// Ű���� �Է��� �޾Ƽ� ����
	int intput;
	printf("���� �Է��ϼ��� :");
	scanf_s("%d", &intput);
	printf("�Է°� : %d\n", intput);

	int one, two, three;
	printf("3���� ������ �Է��ϼ��� :");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù��° �� : %d\n", one);
	printf("�ι�° �� : %d\n", two);
	printf("����° �� : %d\n", three);

	// ����(�� ����), ���ڿ�(�� ���� �̻��� ���� ����)
	char c = 'A';
	printf("%c\n", c);

	char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);


	// ������Ʈ
	// �������� �������� ������ �Լ� (���� �ۼ�)
	// �̸� , ����, ������, Ű, ���˸�
	char name[64];
	printf("�̸��� ������?");
	scanf_s("%s", name, sizeof(name));

	int old;
	printf("���̰� ��� �ǽ���? ");
	scanf_s("%d", &old);

	float weight;
	printf("�����԰� ��kg �̽���? ");
	scanf_s("%f", &weight);

	double height;
	printf("Ű�� ��cm �̽���? ");
	scanf_s("%lf", &height);

	char crime[85];
	printf("���� �߸��� �ϼ̳���? ");
	scanf_s("%s", crime, sizeof(crime));

	printf("\n\n--- ������ ���� ---\n\n");
	printf("�̸�               : %s\n", name);
	printf("����               : %d\n", old);
	printf("������             : %f\n", weight);
	printf("Ű                 : %.1lf\n", height);
	printf("�߸�               : %s\n", crime);



	return 0;
}