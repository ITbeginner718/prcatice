#include <stdio.h>

struct
{
	char name[20];	//�̸�
	int id;			//�й� 
	float grade;	//����
}typedef st; //typedef:����ü ���������� ���ϴ� ���ϴ� ������������ �ٲ� �� ���� 
			 //����ü�� c�������� ���������� ������ �����ݷ� ����� ��.
st input();

int main()
{
	st arr[3];
	
	for (int i = 0; i < 3; i++)
	{
		if (i != 0)
			getchar();
		arr[i] = input(); //����ü ���� ���� ���� ���� 
		
	}

	for (int i = 0; i < 3; i++)
	{
		printf("%s %d %.2f \n",arr[i].name, arr[i].id, arr[i].grade);
	}

	return 0; 
}

st input()
{
	st var;
	printf("�̸� �Է�:");
	gets_s(var.name, sizeof(var.name));

	printf("\n�й� �Է�:");
	scanf_s("%d", &var.id);

	printf("\n���� �Է�:");
	scanf_s("%f", &var.grade);
	
	return var;
}

