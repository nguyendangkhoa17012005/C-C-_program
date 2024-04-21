// kiem tra mang a co cac phan tu theo thu tu tang dan khong
#include<stdio.h>
# define MAX 50
int A[MAX];
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
int tanggiam(){
	for (int i=1;i<N-1;i+=2){
		if (A[i]>A[i-1]){
			return 0;
		}
	}return 1;
} 
int main (){
	nhapN();
	nhapmang();
	inmang();
	if (tanggiam())
	printf("mang la mang tang giam");// 4 3 6 2 4 so sau lon hon so truoc
	else printf("khong phai la mang tang giam");
}
