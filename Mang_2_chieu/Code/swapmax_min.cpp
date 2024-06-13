#include <iostream>
#define max 10

using namespace std;
int a[max][max], n;
int idxmax_c, idxmax_r, idxmin_c, idxmin_r;

void nhap()
{
	do
	{
		cout << "Nhap n: ";
		cin >> n;
	}while( n < 2 || n > 10);
	cout << "Nhap ma tran:" << endl;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}	
	} 
}

void inmt()
{
	for(int i = 0;i<n;i++)
	{
		for(int j= 0;j<n;j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}
int maxd()
{
	idxmax_c = 0, idxmax_r = 0;
	int maxd = INT_MIN;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(a[i][j] > maxd)
			{
				maxd = a[i][j];
				idxmax_r = i;
				idxmax_c = j;
			}
		}
	}
	return maxd;
} 

int min() 
{
	idxmin_c = 0, idxmin_r = 0;
	int min = INT_MAX;
	for(int i = 0; i < n; i++)
	{
		for(int j= 0; j < n;j++){
			if(a[i][j] < min) 
			{
				min = a[i][j];
				idxmin_r = i;
				idxmin_c = j;
			}
		}
	}

	return min;
} 
void swap(int *x,int *y){
	int tam = *x;
	*x = *y;
	*y = tam;
}
void swapmax_min()
{
	maxd();
	min();
	swap(&a[idxmax_r][idxmax_c],&a[idxmin_r][idxmin_c]);
	cout << "max " << maxd() << " min " << min() << endl;

	cout << "mang sau khi doi:\n";
	inmt();
}
int main ()
{
	nhap();
	cout << "Ma tran vua nhap" << endl;
	inmt();
	swapmax_min();
} 
  
