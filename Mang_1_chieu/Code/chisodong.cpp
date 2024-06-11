#include<stdio.h>
#include<limits.h>
#define MAX 100 
int A[MAX][MAX];
int n;
int m;
void nhapmang(){
    do{
     printf("Nhap so hang cua ma tran: ");
     scanf("%d", &n);
     printf("Nhap so cot cua ma tran: ");
     scanf("%d", &m);
      }
      while(3>m||3>n||10<m||10<n);
      for(int i=0;i<n;i++){
              for(int j=0;j<m;j++){
                      scanf("%d",&A[i][j]);
                      }
                      }
     }
void inmang(){
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf ("%d\t",A[i][j]);
        }
        printf("\n");
    }
}
void min(){
    int x,y;
    int min=INT_MAX;
    for(int i=0; i<n;i++){
        for(int j=0; j<m;j++){
            if(A[i][j]<=min)
            {
                min=A[i][j];
                x=i;y=j;
            }
        }
    }
    printf ("chi so dong va cot cua phan tu nho nhat cuoi cung la %d,%d",x,y);
}
int main(){
    nhapmang();
    inmang();
    min();
}
