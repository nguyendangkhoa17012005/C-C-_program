#include<stdio.h>
#define N 10
#include<math.h>
int n,p;
int a[N][N];
void nhapMT(int h[N][N],int &n){
	do{
	printf("Nhap hang = cot = n:");
	scanf("%d",&n);
	}while (2>n ||n>10);
	for (int i=0;i<n;i++){
		for(int j =0;j<n;j++){
			printf("Nhap a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void xuatmang(int h[N][N],int n){
	for (int i=0;i<n;i++){
		for(int j =0;j<n;j++){
			printf("\t%d",a[i][j]);
		}printf("\n");
	}   
}
int  ktra(int x){
	return pow(sqrt(x),2);
}
int SoLuong(int h[N][N],int n){
	int dem=0;
	for (int i=0;i<n;i++){
		for(int j =0;j<n;j++){
			if (i=j){
				if(ktra(h[i][j])== float (h[i][j]))
				dem++;
			}
		}
	}
	printf("\nSL ptu chinh phuong tren duong cheo chinh :%d",dem);
}
void Tongptu(int h[N][N],int n){
	int tong=0;
	for (int i=0;i<n;i++){
		for(int j =0;j<n;j++){
			if (j==p)
			tong+=h[i][j];
			}
		}
	printf("\nTong cac ptu tren cot p = %d",tong);
}

int main() {
	nhapMT(a,n);
	printf("nhap p:");
	scanf("%d",&p);
	xuatmang(a,n);
	SoLuong(a,n);
	Tongptu(a,n);
}
