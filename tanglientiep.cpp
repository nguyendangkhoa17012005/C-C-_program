#include<stdio.h>
# define maxd 15
int n;
int a[maxd];
void nhapn()
{
	do
	{
		printf("Nhap n :");
		scanf("%d",&n);
	}while(0 > n || n > 15);
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
}
void inmang()
{
	for (int i = 0; i < n; i++)
	{
		printf("%4d",a[i]);
	}
}
int ltdainhat(int a[],int n)
{	
	int b[maxd];
	int dem = 1;
	for(int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (a[j] < a[j+1])
			{
				dem++;
			}
			else break;
		}
			b[i] = dem;
			dem = 1;
	}
	int max = b[0];
	for (int i = 1; i < n; i++ )
	{
		if (b[i] > max)
		max = b[i];
	}
	return max;
} 
int main()
{
	nhapn();
	printf("Mang vua nhap :");
	inmang();
	printf("\n%d",ltdainhat(a,n));
}
