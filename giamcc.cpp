#include<stdio.h>
#define maxd 10
int n;
int a[maxd][maxd];
int b[maxd];
void nhapn()
{
	do
	{
		printf("nhap n:");
		scanf("%d",&n);	
	}while(2 > n || n>5);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
}
void inmt()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++){
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
}
void swap(int *x, int *y)
{
	int tam = *x;
	*x = *y;
	*y = tam;
}
void giam(int b[])
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 1; j < n; j++){
			if (b[i] < b[j])
			{
				swap(&b[i], &b[j]);	
			}
		}
	}
}
void giamdancc()
{	
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++){
			if (i == j)
			{	
				b[dem++] = a[i][j];
			}	
		}
	}
	giam(b);
	for (int i = 0; i < dem;i++)
	{
		a[i][i] = b[i];
	}
	inmt();
}
int main ()
{
	nhapn();
	printf("Mang vua nhap la : \n");
	inmt();
	printf("Mang giam dan cheo chinh la : \n");
	giamdancc();
}
