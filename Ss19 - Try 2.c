#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct{
	char name[20];
	int diem;
} str1;

void main()
{
	int i, j, n;
	
	printf("Nhap vao so hoc sinh ban muon khai bao: ");
	scanf("%d", &n);
// Cap phat bo nho cho mang
	str1 **arr;
	str1 *temp;
	arr = (str1 **) malloc (sizeof(str1 *));
	for (i=0; i<n; i++)
	{
		arr[i] = (str1 *) malloc (sizeof(str1));
	}
	temp = (str1 *) malloc (sizeof(str1));
// Nhap, xuat du lieu cua mang
	printf("Moi ban nhap du lieu cua cac hoc sinh: \n");
	printf("--------------------------- \n");
	for (i=0; i<n; i++)
	{
		printf("Nhap vao ten cua hoc sinh thu %d: ", i+1);
		scanf("%s", arr[i]->name);
		printf("Nhap vao diem cua hoc sinh thu %d: ", i+1);
		scanf("%d", &arr[i]->diem);
	}
	printf("========================== \n");
	for (i=0; i<n; i++)
	{
		printf("Ten hoc sinh thu %d la: %s\n", i+1, arr[i]->name);
		printf("Diem hoc sinh thu %d la: %d\n", i+1, arr[i]->diem);
	}
//	// sap xep thu de dung vao vong lap 'for'
//	temp = arr[0];
//	arr[0] = arr[1];
//	arr[1] = temp;
//	// HOAC: 
//	
////	memcpy(temp, arr[0], sizeof(str1));    str1 hay temp hay arr[0]??
////	memcpy(arr[0], arr[1], sizeof(str1));
////	memcpy(arr[1], temp, sizeof(str1));
//	printf("DIem va ten cua Hsinh 1 duoc sap xep la la: %d and %s", arr[0]->diem, arr[0]->name);
//	printf("DIem va ten cua Hsinh 2 duoc sap xep la la: %d and %s", arr[1]->diem, arr[1]->name);



// Sap xep giam dan mang theo so diem
	for (i=0; i<n-1; i++)
		for (j=1; j<n; j++)
		{
			if (arr[i]->diem < arr[j]->diem)
			{
				memcpy(temp, arr[i], sizeof(str1));
				memcpy(arr[i], arr[j], sizeof(str1));
				memcpy(arr[j], temp, sizeof(str1));
				
			}
		}
// Hien thi mang da sap xep
	printf("========================== \n");
	printf("Hoc sinh duoc sap xep theo diem la: \n");
	for (i=0; i<n; i++)
		printf("%d. Hoc sinh %s voi %d diem\n", i+1, arr[i]->name, arr[i]->diem);	
}
