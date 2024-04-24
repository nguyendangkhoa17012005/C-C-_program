#include<stdio.h>
#define maxd 15
#include<limits.h>
int n;
int a[maxd][maxd];
int c;
void nhapn()
{
	do
	{
		printf("Nhap n: ");
		scanf("%d",&n);
	}while (2 > n || n > 15);
	for (int i = 0; i < n; i++)
	{	
		for (int j = 0; j < n; j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
}
void inmt()
{
	for (int i = 0; i < n; i++)
	{	
		for (int j = 0; j < n; j++)
		{
		printf("%3d",a[i][j]);
		}
		printf("\n");
	}
}
int ktr(int a)
{
	if (a%2!=0)
	{
		return 1;
	}
	return 0;
}
int tbc(int a[][maxd],int n)
{
	int dem = 0, sum = 0;
	for (int i = 0; i < n; i++)
	{	
		for (int j = 0; j < n; j++)
		{
			if(i + j == n - 1 && ktr(a[i][j]) == 1)
			{
				sum += a[i][j];
				dem++;
			}
		}
	}
	return sum / dem;
}
int min(int a[][maxd],int n)
{
	int mind = INT_MAX;
	for (int i = 0; i < n; i++)
	{	
		for (int j = 0; j < n; j++)
		{
			if(i > j && a[i][j] < mind)
			{
				mind = a[i][j];
			}
		}
	}
	return mind;
}

void MT(int m[][maxd], int n)
{
	if(n == 15)
	{
		printf("\nNhap c: ");
		scanf("%d", &c);
		for (int i = 0; i < n; i++)
		{	
			for (int j = 0; j < n; j++)
			{
				if( i == j)
				{
					a[i][j] = 0;
				}
				else
				{
					a[i][j] = c;
				}
			}
		}
		inmt();
	}
}

int main()
{
	nhapn();
	printf("Ma tran vua nhap la:\n");
	inmt();
	printf("Tbc cac ptu so le tren cheo phu: %d",tbc(a,n));
	printf("\nSo nho nhat duoi cheo chinh = %d",min(a,n));
	MT(a,n);
}
