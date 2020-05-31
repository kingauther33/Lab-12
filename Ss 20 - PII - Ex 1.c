#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct{
	int mssv;
	char names[20];
	char courses[20];
	int year;
} stud;

void main()
{
	int i, j, n, nam, chon, mssvktra;
	char tieptuc = 'y', tieptuc1;
	stud **p1;
	
	printf("Moi ban nhap vao so sinh vien muon ghi thong tin: ");
	scanf("%d", &n);
	p1 = (stud **) malloc (sizeof(stud*));
	for (i=0; i<n; i++)
		p1[i] = (stud *) malloc (sizeof(stud));
	
	while (tieptuc == 'y')
	{
		printf("Menu sinh vien: \n");
		printf("-------------------------\n");
		printf("1. Nhap thong tin sinh vien.\n");
		printf("2. Hien thi thong tin chi tiet cua sinh vien bang cach nhap nam sinh vien vao hoc.\n");
		printf("3. Hien thi thong tin chi tiet cua sinh vien bang cach nhap ma sinh vien. \n");
		printf("4. Ket thuc chuong trinh \n");
		printf("Moi ban chon cong viec muon thuc hien (1/2/3): ");
		scanf("%d", &chon);
		printf("========================== \n");
		switch(chon)
		{
		case 1:
			for(i=0; i<n; i++)
			{
				printf("Sinh vien thu %d: \n", i+1);
				printf(" - Ma so cua sinh vien la: ");
				scanf("%d", &p1[i]->mssv);
				fflush(stdin);
				printf(" - Ten sinh vien: ");
				scanf("%s", p1[i]->names);
				fflush(stdin);
				printf(" - Khoa hoc sinh vien dang hoc: ");
				scanf("%s", p1[i]->courses);
				printf(" - Sinh vien nhap hoc nam bao nhieu?: ");
				scanf("%d", &p1[i]->year);
				printf("---------------------------\n");
			}
			break;
		case 2:
			tieptuc1 = 'y';
			while (tieptuc1 == 'y')
			{
				printf("Moi ban nhap vao nam sinh vien nhap hoc muon hien thi: ");
				scanf("%d", &nam);
				printf("==========================\n");
				for (i=0, j=1; i<n, j<=n; i++)
				{
					if (nam == p1[i]->year)
					{
						printf("Thong tin cua sinh vien thu %d la:\n", j);
						printf("Ten sinh vien la: %s\n", p1[i]->names);
						printf("Khoa sinh vien dang theo hoc la: %s\n", p1[i]->courses);
						printf("--------------------------\n");
						j++;
					}
				}
				fflush(stdin);
				printf("Ban co muon hien thi them du lieu cua sinh vien qua cac nam ko? (y/n) ");
				scanf("%c", &tieptuc1);
			}
			break;
		case 3:
			tieptuc1 = 'y';
			while (tieptuc1 == 'y')
			{
				printf("Moi ban nhap ma so sinh vien nhap hoc muon hien thi: ");
				scanf("%d", &mssvktra);
				printf("==========================\n");
				for (i=0, j=1; i<n, j<=n; i++)
				{
					if (mssvktra == p1[i]->mssv)
					{
						printf("Thong tin cua sinh vien do la: %d\n", j);
						printf("Ten sinh vien thu do la: %s\n", p1[i]->names);
						printf("Khoa sinh vien do dang theo hoc la: %s\n", p1[i]->courses);
						printf("Nam sinh vien dang theo hoc la: %d\n", p1[i]->year);
						printf("--------------------------\n");
					}
				}
				fflush(stdin);
				printf("Ban co muon hien thi them du lieu cua sinh vien bang ma so sinh vien nua ko? (y/n) ");
				scanf("%c", &tieptuc1);
			}
			break;
		default:
			printf("Ban da nhap nham menu, moi nhap lai hoac ket thuc chuong trinh\n");	
			break;		
		}
		printf("Ban co muon quay tro lai menu ko? (y/n): ");
		fflush(stdin);
		scanf("%c", &tieptuc);
	}
}


















