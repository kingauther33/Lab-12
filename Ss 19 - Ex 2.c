#include <stdio.h>
#include <malloc.h>

void main()
{
	int i, j, n, temp, *num;
	printf("Co bao nhieu gia tri ban muon nhap vao mang? ");
	scanf("%d", &n);
	num = (int *) malloc (n*sizeof(int));
	printf("========================== \n");
	
	printf("Moi ban nhap vao gia tri cho tung o trong mang: \n");
	for (i=0; i<n; i++)
	{
		printf("Nhap gia tri tai o [%d]: ", i);
		scanf("%d", &num[i]);
	}
	
	printf("Mang ban vua nhap la: \n");
	for (i=0; i<n; i++)
		printf("Gia tri tai [%d] la: %d\n", i, num[i]);
	
	for (i=n-2; i>=0; i--)
		for (j=n-1; j>=n-1-i; j--)
		{
			if (num[j] < num[j-1])
			{
				temp = num[j];
				num[j] = num[j-1];
				num[j-1] = temp;
			}
		}
	printf("Chuoi da duoc sap xep theo bubble sort la: \n");
	for (i=0; i<n; i++)
		printf("%d ", num[i]);
}
