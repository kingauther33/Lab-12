#include <stdio.h>
#include <malloc.h>

typedef struct
{
	char name[30];
	int num;
	float amt;
} struct1;
// hoac khai bao struct s1 nhu bthg roi dung typedef struct s1 struct1;

void intcal(struct1 *abc);

void main()
{
	struct1 *xyz;
	xyz = (struct1 *)malloc(sizeof(struct1));
	intcal(xyz);
}

void intcal(struct1 *abc)
{
	float si, rate = 5.5, yrs = 2.5;
	
	printf("Nhap ten cua khach hang: ");
	scanf("%s", abc->name);
	printf("Ten khach hang la: %s\n", abc->name);
	fflush(stdin);
	
	printf("Nhap ma so cua khach hang: ");
	scanf("%d", &abc->num);
	printf("Ma so cua khach hang la: %d\n", abc->num);
	fflush(stdin);
	
	printf("Nhap so tien goc cua khach hang: ");
	scanf("%f", &abc->amt);
	printf("So tien goc cua khach hang la: %f\n", abc->amt);
	fflush(stdin);
	
	si = (abc->amt * rate * yrs) / 100;
	printf("Phan loi cua khach hang la: %.3f", si);
	return;
}
