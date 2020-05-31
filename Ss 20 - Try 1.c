#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct{
	float yards;
	float feet;
	float inches;
} dodai;

void main()
{
	int i;
	dodai *arr;
	arr = (dodai *) malloc (5*sizeof(dodai));
	void sort(dodai* abc);
	printf("Moi ban nhap vao du lieu cua cac do dai: \n");
	for (i=0; i<5; i++)
	{
		printf("------------------------------\n");
		printf("Nhap vao do dai thu %d:\n", i+1);
		printf("Do dai theo yards la: ");		
		scanf("%f", &(arr+i)->yards);
		printf("Do dai theo feet la: ");	
		scanf("%f", &(arr+i)->feet);
		printf("Do dai theo inches la: ");
		scanf("%f", &(arr+i)->inches);
	}
		
	printf("Hien thi do dai cac do dai: \n");
	for (i=0; i<5; i++)
	{
		printf("Do dai thu %d:\n", i+1);
		printf("Do dai theo yards la: %.2f\n", (arr+i)->yards);
		printf("Do dai theo feet la: %.2f\n", (arr+i)->feet);
		printf("Do dai theo inches la: %.2f\n", (arr+i)->inches);
		printf("--------------------------------- \n");		
	}
	
	sort(arr);
	printf("Cac do dai sau khi duoc sap xep la: \n");
	printf("======================\n");
	for (i=0; i<5; i++)
	{
		printf("Do dai theo yards la: %.2f\n", (arr+i)->yards);
		printf("Do dai theo feet la: %.2f\n", (arr+i)->feet);
		printf("Do dai theo inches la: %.2f\n", (arr+i)->inches);
		printf("---------------------------------\n");
	}
}

void sort(dodai* abc)
{
	int i, j;
	dodai temp;
	for (i=3; i>=0; i--)
		for (j=4; j>=4-i; j--)
		{
			if ((abc+j)->yards < (abc +(j-1))->yards)
			{
				temp = *(abc+j);
				*(abc+j) = *(abc +(j-1));
				*(abc +(j-1)) = temp;
			}
		}
}

