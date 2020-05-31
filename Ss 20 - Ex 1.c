#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct{
	int bood_cd;
	char book_nm[30];
	char author[30];
	int copies;
} book_st;

typedef struct{
	int month;
	int day;
	int year;
} date_st;

typedef struct{
	int book_code;
	char tran_type;
	date_st tran_dt;
} tran_st;

void main()
{
	int choice = 1, i;
	char addflag;
	book_st books[5];
	tran_st trans[10];
	while (choice!=4)
	{
		printf("Chon tu menu: \n");
		printf("1. Them ten sach: \n");
		printf("2. Muon/tra sach: \n");
		printf("3. Sap xep cac lan muon sach: \n");
		printf("4. Thoat chuong trinh: \n");
		printf("Nhap vao lua chon cua ban: ");
		scanf("%d", &choice);
		if (choice == 1)
		{
			addflag = 'y';
			for (i=0; i<5 && addflag == 'y'; i++)
			{
				books[i].bood_cd = i+1;
				printf("Book code: %d\n", i+1);
				printf("Nhap vao ten sach: ");
				scanf(" %s", books[i].book_nm);
				printf("Nhap vao ten tac gia cua sach:");
				scanf(" %s", books[i].author);
				printf("So copies la: ");
				scanf("%d", &books[i].copies);
				printf("Ban muon tiep tuc ko? (y/n): ");
				scanf(" %c", &addflag);
			}
		}
		else if (choice == 2)
		{
			addflag = 'y';
			for (i=0; i<10 && addflag == 'y'; i++)
			{
				printf("Book code: \n");
				scanf("%d", &trans[i].book_code);
				fflush(stdin);
				printf("Muon hay tra sach? (M/T): ");
				scanf("% c", &trans[i].tran_type);
				printf("Ngay thuc hien giao dich: ");
				scanf("%d %d %d", &trans[i].tran_dt.day, &trans[i].tran_dt.month, &trans[i].tran_dt.year);
				fflush(stdin);
				printf("Ban muon tiep tuc khong? (Y/N): ");
				scanf("%c", &addflag);
			}
		}
		else if(choice == 3)
			sorttran(trans);
	}
}

sorttran(tran_st tran[10])
{
	int i, j, tempcode;
	tran_st temptran;
	for(i=0; i<10; i++)
		for(j=i+1; j<10; j++)
		{
			if(tran[i].book_code > tran[j].book_code)
			{
				temptran = tran[i];
				tran[i] = tran[j];
				tran[j] = temptran;
			}
		}
	
	for(i=0, j=0; i<10; j=0)
	{
		tempcode = tran[i].book_code;
		while(tran[i].book_code == tempcode && i<10)
		{
			i++;
			j++;
		}
		printf("Book code %d co %d giao dich", tempcode, j);
	}
}

