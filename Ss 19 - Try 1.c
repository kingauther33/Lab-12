#include <stdio.h>
#include <malloc.h>

typedef struct{
	int num;
	char name[20];
	int rate;
	int amt;
} invent;

void main()
{
	int i, j, n, tong = 0;
	invent **xyz;
	void nhap(invent *abc, int x);
	void xuat(invent *abc, int x);
	printf("Danh sach cua ban co bao nhieu mon hang? ");
	scanf("%d", &n);
	fflush(stdin);
	xyz = (invent **) malloc (sizeof(invent *));
	for (i=0; i<n; i++)
		xyz[i] = (invent *) malloc (sizeof(invent));
		
		
	printf("Moi ban nhap du lieu cua cac mon hang: \n");
	printf("------------------------------------------\n");
	for (i=0; i<n; i++)
	{
		nhap(xyz[i], i);
		tong += xyz[i]->rate*xyz[i]->amt;
	}
	for (i=0; i<n ;i++)
		xuat(xyz[i], i);

	printf("Tong gia tri cua invent la: %d", tong);
}
	
void nhap(invent *abc, int x)
{
	printf("Du lieu cua hang thu %d: \n", x+1);
	printf("Nhap vao ma so cua hang: ");
	scanf("%d", &abc->num);
	printf("Nhap vao ten cua hang: ");
	scanf("%s", abc->name);
	printf("Nhap vao gia cua hang: ");
	scanf("%d", &abc->rate);
	printf("Nhap vao so luong cua hang: ");
	scanf("%d", &abc->amt);	
	printf("========================== \n");
}

void xuat(invent *abc, int x)
{
	printf("Ma so cua hang %d la: %d\n", x+1, abc->num);
	printf("Ten cua hang %d la: %s\n", x+1, abc->name);
	printf("Gia cua hang %d la: %d\n", x+1, abc->rate);
	printf("So luong cua hang %d la: %d\n", x+1, abc->amt);
	printf("========================== \n");		
}
