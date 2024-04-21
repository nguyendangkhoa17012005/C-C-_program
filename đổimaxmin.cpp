#include<stdio.h>
# define N 5
#include<limits.h>
int n;
int vt_hangmax,vt_cotmax;
int vt_hangmin,vt_cotmin;
int a[N][N];
void nhapn(){
	do{
		scanf("%d",&n);
	}while(n<0||n>5);
	printf("nhap mt");
	for(int i = 0;i<n;i++){
		for(int j= 0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
void inmt(){
	for(int i = 0;i<n;i++){
		for(int j= 0;j<n;j++){
			printf("\t%d",a[i][j]);
		}printf("\n");
	}
}
int somax(){
	int max =INT_MIN;
	vt_hangmax=0;
	vt_cotmax=0;
	for(int i = 0;i<n;i++){
		for(int j= 0;j<n;j++){
			if(a[i][j]>max){
			max=a[i][j];
			vt_hangmax = i;vt_cotmax=j;
			}
		}
	}return max;
} 

int somin(){
	int min =INT_MAX;
	 vt_hangmin=0;
	 vt_cotmin=0;
	for(int i = 0;i<n;i++){
		for(int j= 0;j<n;j++){
			if(a[i][j]<min){
			min=a[i][j];
			vt_hangmin=i;
			vt_cotmin=j;
			}
		}
	}return min;
} 
void swap(int *x,int *y){
	int tam;
	tam = *x;
	*x=*y;
	*y=tam;
}
void doicho(){
	somax();
	somin();
	swap(&a[vt_hangmax][vt_cotmax],&a[vt_hangmin][vt_cotmin]);
	printf("max %d min %d \n",somax(),somin());
	printf("mang sau khi doi:\n");
	inmt();
}
int main(){
	nhapn();
	doicho();
}
