# include<stdio.h>
# include<time.h>

int main(void)
{
	// �迭
	int subway_1 = 30;
	int subway_2 = 40;
	int subway_3 = 50;

	printf("����ö 1ȣ�ڿ� %d ���� Ÿ�� �ֽ��ϴ�\n", subway_1);
	printf("����ö 2ȣ�ڿ� %d ���� Ÿ�� �ֽ��ϴ�\n", subway_2);
	printf("����ö 3ȣ�ڿ� %d ���� Ÿ�� �ֽ��ϴ�\n", subway_3);

	// �������� ������ �Բ�, ���ÿ� ����
	int subway_array[3];
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++)
	{
		printf("����ö %d ȣ���� %d ���� Ÿ�� �ֽ��ϴ�\n", i + 1, subway_array[i]);
	}
	//==========================================================================================================================


	// �� ���� ���
	int ard[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", ard[i]);
	}

	// �迭 ũ��� �׻� ����� ����
	int size = 10;
	int arr[10];

	// �迭 ũ��� �׻� ����� ���� 2

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


	// ���� vs ���ڿ�
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

	char kor[] = "�����ڵ�";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));
	//==========================================================================================================================


	// ���ڿ� ��ȭ
	char c_array[7] = {'c','o','d','i','n','g','\0'};  // 1��
	printf("%s\n", c_array);
	char c_array[6] = { 'c','o','d','i','n','g' };		// 2��
	printf("%s\n", c_array);

	char c_array[10] = { 'c','o','d','i','n','g' };
	printf("%s\n", c_array);						// 3��
	for (int i = 0; i < sizeof(c_array); i++)		// 4��
	{
		printf("%c\n", c_array[i]);
	}

	for (int i = 0; i < sizeof(c_array); i++)		// 5��
	{
		printf("%d\n", c_array[i]);
	}

	// ���ڿ� �Է¹ޱ� : ������ ���� ���� ����
	char name[256];
	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name);
	//==========================================================================================================================


	// ASCII �ڵ�
	printf("%c\n", 'a');		// 1��
	printf("%d\n", 'a');		// 2��

	// ASCII �ڵ� 2
	for (int i = 0; i < 127; i++)
	{
		printf("�ƽ�Ű �ڵ� ���� %d : %c\n", i, i);
	}
	//==========================================================================================================================


	// ������Ʈ
srand(time(NULL));
printf("\n\n === �ƺ��� ��Ӹ� ���� === \n\n");
int answer;
int treatment = rand() % 4;
int cntShowBottle = 0;
int prevShowBottle = 0;

// 3���� ��ȸ
for (int i = 1; i <= 3; i++)
{
	int bottle[4] = { 0,0,0,0 };
	do {
		cntShowBottle = rand() % 2 + 2;
	} while (cntShowBottle == prevShowBottle);
	prevShowBottle = cntShowBottle; 

	int isIncluded = 0;
	printf(" > %d ��° �õ� : ", i);

	// ������ �� ���� ����
	for (int j = 0; j < cntShowBottle; j++)
	{
		int randBottle = rand() % 4;

		// ���� ���õ��� ���� ���̸� ���õǾ��� �� ����ó��
		if (bottle[randBottle] == 0)
		{
			bottle[randBottle] = 1;
			if (randBottle == treatment)
			{
				isIncluded = 1;
			}
		}
		// �̹� ���õ� ���̸�, �ߺ��̹Ƿ� �ٽ� ����
		else
		{
			j--;
		}
	}
	// ����ڿ��� ���� ǥ��
	for (int k = 0; k < 4; k++)
	{
		if (bottle[k] == 1)
			printf("%d", k + 1);
	}
	printf(" ������ �Ӹ��� �ٸ��ϴ�\n\n");
	
	if (isIncluded == 1)
	{
		printf(" >> ���� ! �Ӹ��� ����� ! \n");
	}
	else
	{
		printf(" >> ���� ! �Ӹ��� ���� �ʾҾ�� ! \n");
	}

	printf("\n ... ��� �Ϸ��� �ƹ�Ű�� �������� ...");
	getchar();
}
printf("\n\n�߸����� �� ���ϱ��?");
scanf_s("%d", &answer);

if (answer = treatment + 1)
{
	printf("\n >>�����Դϴ�~\n");
}
else
{
	printf("\n >> �� ! Ʋ�Ⱦ��. ������ %d �Դϴ�\n", treatment + 1);
}







	return 0;
}