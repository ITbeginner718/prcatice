#include <stdio.h>
#include <string.h>
#define VAR 100 //��ũ�� ����� ���̺귯���� ���� ���� �����ݷ��� ���� �ʴ´�. 

int main()
{/*
	printf("VAR��ó����:%d \n", VAR);
	
	const int var = 10; //const����: �� ���� �Ұ� 

	char c =0;
	scanf_s("%c",&c,1);
	printf("%c���� �빮�� ����:%c \n",c, c - 32);  

	int num = 0;
	scanf_s("%d \n",&num);
	printf("%d", num);
	char c = 0;
	
	if (num <= 0 || num > 100)
		printf("�߸� �Է�\n");

	else
	{
		if (num <= 100 && num >= 90)
			c = 'a';
		else if (num <= 89 && num >= 80)
			c = 'b';
		else if (num <= 79 && num >= 70)
			c = 'c';
		else if (num <= 69 && num >= 60)
			c = 'd';
		else
			c = 'f';
	}
	
	printf("���:%c \n", c);
	
	
	int num;
	printf("���� �Է�:");
	scanf_s("%d",&num);
	
	switch(num)//������(����) �Է�
	{
	case 1: printf("1�Է� �Ϸ�\n"); break; //break���� ������� ������ ���� �������� �̵�
	case 2: printf("2�Է� �Ϸ� \n"); break;
	case 3: printf("3�Է� �Ϸ� \n"); break;
	case 4: printf("4�Է� �Ϸ� \n"); break;
	default: printf("�߸� �Է�"); break;
	}
	getchar();
	

	int arr[10] = { 0 };
	printf("%d \n", sizeof(arr));
	for (int i = 0; i < 10; i++)
		scanf_s("%d", &arr[i]);

	for (int i = 0; i < 10; i++)
		printf("%d, ", arr[i]);
	int index = 0;
	for (int i = 0; i < 9; i++)
	{
		index = i;
		for (int j = i + 1; j < 10; j++)
		{
			if (arr[index] > arr[j])
				index = j;
		}
		int temp = arr[index];
		arr[index] = arr[i];
		arr[i] = temp;
	}
	printf("\n ���� ��:");
	for (int i = 0; i < 10; i++)
		printf("%d, ", arr[i]);

	

	int index = 1;
	int arr[4][5];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = index++;
			printf("%d, ", arr[i][j]);
		}
		
	}
	

	char carr[20] = "";
	strcpy_s(carr,sizeof(carr),"kwon soon ho");
	printf("%s", carr);
	printf("%d\n",strlen(carr));

	if (strcmp(carr, "kwon soon ho") == 0)
	{
		printf("���� ���ڿ� �Դϴ�.");
	}
	*/

	char carr[3][5] = { "" };
	strcpy_s(carr[0],sizeof(carr[0]), "kwon");
	strcpy_s(&carr[1][0], sizeof(carr[1]), "soon");
	strcpy_s(&carr[2][0], sizeof(carr[2]), "ho");
	
	for (int i = 0; i < 3; i++)
		printf("%s ", carr[i]);
	
	
	return 0;
}