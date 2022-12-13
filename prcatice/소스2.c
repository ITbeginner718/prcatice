#include <stdio.h>
#include <string.h>
#define VAR 100 //매크로 상수는 라이브러리와 같이 끝에 세미콜론을 쓰지 않는다. 

int main()
{/*
	printf("VAR전처리기:%d \n", VAR);
	
	const int var = 10; //const변수: 값 변경 불가 

	char c =0;
	scanf_s("%c",&c,1);
	printf("%c에서 대문자 변경:%c \n",c, c - 32);  

	int num = 0;
	scanf_s("%d \n",&num);
	printf("%d", num);
	char c = 0;
	
	if (num <= 0 || num > 100)
		printf("잘못 입력\n");

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
	
	printf("등급:%c \n", c);
	
	
	int num;
	printf("숫자 입력:");
	scanf_s("%d",&num);
	
	switch(num)//정수식(변수) 입력
	{
	case 1: printf("1입력 완료\n"); break; //break문을 사용하지 않으면 다음 문항으로 이동
	case 2: printf("2입력 완료 \n"); break;
	case 3: printf("3입력 완료 \n"); break;
	case 4: printf("4입력 완료 \n"); break;
	default: printf("잘못 입력"); break;
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
	printf("\n 변경 후:");
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
		printf("같은 문자열 입니다.");
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