#include<stdio.h>

void main()
{
	int i, j, arr[9] = { 23, 90, 9, 25, 16, 100, 2, 3, 4 };
	char flag;
	for(i=1; i<9; i++)
		for(j=0, flag='n'; j<i && flag=='n'; j++)
		{
			if(arr[j]>arr[i])
			{
				insertnum(arr, i, j);
				flag='y';
			}
		}
	printf("The sorted array\n");
	for(i=0; i<9; i++)
		printf("%d\t", arr[i]);
}

insertnum(int arrnum[], int x, int y)
{
	int temp;
	temp=arrnum[x];
	for(; x>y; x--)
		arrnum[x]=arrnum[x-1];
	arrnum[x] = temp;
}
