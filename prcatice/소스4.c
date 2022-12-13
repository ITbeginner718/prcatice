#include <stdio.h>

struct
{
	char name[20];	//이름
	int id;			//학번 
	float grade;	//학점
}typedef st; //typedef:구조체 데이터형을 원하는 원하는 데이터형으로 바꿀 수 있음 
			 //구조체도 c문장으로 간주함으로 무조건 세미콜론 써줘야 함.
st input();

int main()
{
	st arr[3];
	
	for (int i = 0; i < 3; i++)
	{
		if (i != 0)
			getchar();
		arr[i] = input(); //구조체 변수 끼리 대입 가능 
		
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
	printf("이름 입력:");
	gets_s(var.name, sizeof(var.name));

	printf("\n학번 입력:");
	scanf_s("%d", &var.id);

	printf("\n학점 입력:");
	scanf_s("%f", &var.grade);
	
	return var;
}

