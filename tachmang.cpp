// tach mang a thanh 2 mang , mang b chua cac so chan,mang c chua cac so le

#include<stdio.h>
# define MAX 50
int A[MAX],B[MAX],C[MAX];
int N;
void nhapN()
{
  printf("Nhap so phan tu cua mang = ");
  scanf("%d",&N);
  while(N<0 || N>50)
  {
    printf("So phan tu cua mang nam trong khoang tu 1 den N");
    printf("Nhap so phan tu cua mang = ");
    scanf("%d",&N);
  }
}

//nhap cac phan tu cho mang
void nhapmang()
{
  int i;
  
  for(i=0; i<N;i++)
  {
    printf("A[%d] = ",i);
    scanf("%d",&A[i]);
  }
}
void inmang()
{
  int i;
  printf("\nCac phan tu trong mang da nhap la: \n");
  for(i=0; i<N;i++)
  {
    printf("%4d",A[i]);
  }
}
void tachmang(int A[],int N){
	int j=0 , k=0;
	for (int i = 0; i < N; i++) {
        if (A[i] % 2 == 0) {
            B[j] = A[i];
            j++;
        }else {
            C[k] = A[i];
            k++;
     	}	
    }
    printf("\nMang chua cac so chan la : ");
    for (int i = 0; i < j; i++) {
        printf("%d ", B[i]);
    }


    printf("\nMang chua cac so le la : ");
    for (int i = 0; i < k; i++) {
        printf("%d ", C[i]);
    }
}

int main (){
	nhapN();
	nhapmang();
	inmang();
	tachmang(A,N);
}
