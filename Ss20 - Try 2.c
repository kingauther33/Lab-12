#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct
{
	int id;
	char names[20];
	float salary;
	int years;
} details;

void main()
{
	int i, congviec;
	char chon;
	details salaries[3];
	printf("Moi ban nhap vao thong tin cua cac nhan vien: \n\n");
	for (i=0; i<3; i++)
	{
		printf("Moi ban nhap vao thong tin cua nhan vien thu %d \n", i+1);
		printf("ID la: ");
		scanf("%d", &salaries[i].id);
		printf("Ten nhan vien la: ");
		scanf("%s", salaries[i].names);
		printf("Luong co ban cua nhan vien la: ");
		scanf("%f", &salaries[i].salary);
		printf("Nhap nam nhan vien vao lam o cong ty: ");
		scanf("%d", &salaries[i].years);
		printf("\n");
	}
	
	chon = 'y';
	while (chon == 'y')
	{
		printf("Menu: \n");
		printf("1. Tang luong cua nhan vien. \n");
		printf("2. Hien thi so nhan vien da gan bo 10 nam voi cong ty: \n");
		printf("3. Ket thuc chuong trinh.\n");
		printf("Moi ban chon cong viec can thuc hien: ");
		fflush(stdin);
		scanf("%d", &congviec);
		switch (congviec)
		{
			case 1:
				for (i=0; i<3; i++)
				{
					if (salaries[i].salary <= 2000)
					{
						salaries[i].salary *= 1.15;
						printf("Luong cua nhan vien %d sau khi duoc tang la: %.2f\n", i+1, salaries[i].salary);
					}
					else if ((salaries[i].salary > 2000) && (salaries[i].salary <=5000))
					{
						salaries[i].salary *= 1.1;
						printf("Luong cua nhan vien %d sau khi duoc tang la: %.2f\n", i+1, salaries[i].salary);
					}
					else
						printf("Luong cua nhan vien %d khong duoc tang\n", i+1);
				}
				break;
			case 2:
				printf("Nhung nhan vien gan bo 10 nam voi cong ty la: \n");
				for (i=0; i<3; i++)
					if ((2020 - salaries[i].years) >= 10)
						printf("Nhan vien thu %d: %s\n", i+1, salaries[i].names);
				break;
		}
		if ((congviec != 1) && (congviec != 2))
		{
			printf("Ban da nhap nhap sai thao tac tren menu, ban co muon nhap lai ko? (y/n): ");
			fflush(stdin);
			scanf("&c", &chon);
		}
		else
		{
			printf("Ban co muon nhap tro lai menu hong? (y/n): ");
			fflush(stdin);
			scanf("%c", &chon);
		}
		printf("\n\n");
	}
}

