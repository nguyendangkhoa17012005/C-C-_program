#include<stdio.h> 
int n;
struct HocPhan
{
	char maHP[7];
	char tenHP[50];
	unsigned int soTC;
};

//void Nhap(HocPhan &s)
//{
//	printf("Ma HP:");
//	gets(s.maHP);
//	printf("Ten HP:");
//	gets(s.tenHP);
//	printf("So TC:");
//	scanf("%d",&s.soTC);
//}
void nhaphp(int &n,HocPhan a[])
{
	
	do 
	{
		printf("Nhap n hoc phan: ");
		scanf("%d",&n);
	}while(n < 2 || n > 10);
	for (int i = 0; i < n; i++)
	{
		fflush(stdin);
		printf("Ma HP:");
		gets(a[i].maHP);
		printf("Ten HP:");
		gets(a[i].tenHP);
		printf("So TC:");
		scanf("%d",&a[i].soTC);
	}
}
void Xuat(HocPhan a[],int n)
{	
	for (int i = 0; i < n; i++)
	{
		printf("\nHoc phan da nhap :");
		printf("%s\t%s\t%d",a[i].maHP, a[i].tenHP, a[i].soTC);
	}
}
int dem(HocPhan a[],int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if(a[i].soTC == 3)
		dem++;
	}
	return dem;
}
int main()
{
	struct HocPhan dshp[10];
	//Nhap(hp1);
	//Xuat(hp1);
	nhaphp(n,dshp);
	Xuat(dshp,n);
	printf("\nSo luong hoc phan co so tin chi = 3 la %d",dem(dshp,n));
}
