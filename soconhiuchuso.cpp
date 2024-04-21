#include<stdio.h>
#include<math.h>
#define N 10
int n;
int a[N];
void nhapmang(int a[],int &n){
	do{
		scanf("%d",&n);
	}while(n<=5||n>=10);
	for (int i = 0; i<n;i++){
		scanf("%d",&a[i]);
	}
}
void inmang(int a[],int n){
	for (int i = 0; i<n;i++){
		printf("%d ",a[i]);
	}
}
int slcs(int x){
	int dem=0;
	while(x!=0){
		x/=10; 
		dem++;
	}return dem;
}
void inso(int a[],int n){
// muon in so thi phai biet vi tri 
	int max=slcs(a[0]);
	int vt=0;
	for (int i=1;i<n;i++){
		if(slcs(a[i])>max){
			max=slcs(a[i]);
			vt=i;
		}
	}printf("%d",a[vt]);
}
int main(){
	nhapmang(a,n);
	inso(a,n);
}
