#include<stdio.h>
#include<math.h>
#define max 100
int n,m; 
int d,c;
int a[max][max];

void nhapmt(int a[][max],int &n,int &m)
{
	do
	{
		printf("Nhap n dong: ");
		scanf("%d",&n);
		printf("Nhap m cot: ");
		scanf("%d",&m);
	}while(3 > m || 3 > n || 10 < m || 10 < n);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			printf("A[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void inmt(int s[][max],int n,int m)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
float tbc(int s[][max], int n, int m)
{
	int tong = 0, dem = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(i == 0 || j == 0 || i == n -1 || j == m - 1)
			{
				tong += a[i][j];
				dem++;	
			}	
		}
	}
	float tbc = 1.0 * tong / dem;
	return tbc;
}

void cphuong(int a[][max], int n, int m)
{
	int tong = 0;
		for(int j = 0; j < m; j++)
		{
			if((float) sqrt(a[d][j]) == (int) sqrt(a[d][j])) 
			{
				tong += a[d][j];	
			}	
		}
	printf("Tong cac so chinh phuong la %d",tong);
}
void xoa (int a[][max], int n, int m)
{
	printf("\nMa tran sau khi xoa dong d : \n");
	for(int i = 0; i < d; i++)
	{
		for(int j = 0; j < m; j++)
		{
			printf("%d\t",a[i][j]);
		}	
		printf("\n");
	}
	for(int i = d + 1; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}

int tonguoc(int a)
{
	int sum = 0;  
	for (int i = 1; i < a; i++)
	{
		if(a % i == 0)
		sum += i;
	}
	return sum;
}
void sothanthiet(int a[][max], int n, int m)
{
	int dem = 0;
	for (int i = 0; i < n -1; i++) 
	{
		for(int j = i +1; j < n; j++)
		if(tonguoc(a[i][c]) == a[j][c] && a[i][c] == tonguoc(a[j][c]))
		dem++;
	}
	if(dem == 0)
	printf("\nKhong co cap so than thiet:");
	else
	printf("Co %d cap so than thiet",dem);
} 
int main ()
{
	nhapmt(a,n,m);
	printf("Ma tran vua nhap :\n");
	inmt(a,n,m);
	printf("TBC cua cac ptu tren duong bien : %.2f",tbc(a,n,m));
	printf("\nNhap dong d :");
	scanf("%d",&d);
	cphuong(a,n,m);
	xoa(a,n,m);
	printf("Nhap cot c :");
	scanf("%d",&c);
	sothanthiet(a,n,m);
}

