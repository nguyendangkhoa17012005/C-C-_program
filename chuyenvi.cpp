#include<stdio.h>
# define maxd 10
int n;
int a[maxd][maxd];
void nhapn()
{
	do{
		printf("nhap hang=cot=n:");
		scanf("%d", &n);
	}while(2 > n || n >= 5);
}
void nhapmt()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}		
}
void inmt()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
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
void mtcv()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j < i)
			swap(&a[i][j], &a[j][i]);
		}
	}
	printf("\nMa tran chuyen vi la : \n");
	inmt();
}
int main ()
{
	nhapn();
	nhapmt();
	printf("ma tran da nhap:\n");
	inmt();
	mtcv();
}
