#include <stdio.h>
#include <string.h>

int main()
{
	/*
	int* po_i;
	char* po_c;
	float* po_f;
	//포인트의 크기는 항상 같음 4byte
	
	printf("%d %d %d \n", sizeof(po_i), sizeof(po_c), sizeof(po_f));
	

	int var = 10;
	int* pvar; //*:간접 참조 연산자, 포인터 변수가 가리키는 변수의 값을 읽어오거나 변경한다. 
	pvar = &var; //변수의 주소를 넘겨줌 

	printf("pvar:%d \n", *pvar);//값 읽어 옴

	*pvar = 12; //pvar가 가리키는 변수에 접근하여 값 변경 

	printf("var:%d \n", var);
	
	
	int var = 10;
	int* pvar = &var;
	int** dou_pvar = &pvar; //이중 포인터: 포인터의 포인터, 포인터 변수의 주소를 참조하는 포인터 변수  

	printf("pvar의 값:%d \n", pvar); 
	printf("var의 주소값:%d \n", &var);
	//pvar의 값 == var의 주소값
	printf("dou_pvar의 값:%d \n", dou_pvar);
	printf("pvar의 주소값:%d \n", &pvar);
	//dou_pvar의 값== pvar의 주소값 
	
	printf("pvar의 참조값:%d \n", *pvar);
	printf("dou_pvar의 참조값:%d \n", *dou_pvar);
	printf("dou_pvar의 참조의 참조값:%d \n", **dou_pvar); //메모리 값에 두번 접근 
	

	int arr[5] = {1,2,3,4,5}; 
	printf("%d \n", *(arr + 1)); 
	int* parr = arr; //arr이 가리키는 배열의 첫 번째 주소를 참조 
	printf("%d %d \n", &parr, &arr); //parr과 arr의 주소값(이들이 참조하고 있는 값과 다름) 
	printf("%d \n", *parr);
	printf("%d \n", parr[2]);
	printf("%d \n", *(parr + 1));
	printf("%d \n", *arr);

	parr = &arr[0];
	int* parr2 = &parr[0]; //parr
	printf("%d \n", *(parr2 + 1));

	*/
	return 0;
}