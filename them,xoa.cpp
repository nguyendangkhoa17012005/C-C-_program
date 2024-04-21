#include<stdio.h>
# define MAX 50
int A[MAX];
int N,x;
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
    printf("\t%d",A[i]);
  }
}
int timmax(){
	int vtri = 0;
	int max =A[0] ;
	for (int i=1;i<N;i++){
		if(max < A[i]){
			max = A[i];
		vtri = i;
		}
	} return vtri;
}
void them()
{
  int vt = timmax();
  if (vt >= 0 && vt < N)
  {
    for (int i = N; i > vt; i--)
      A[i] = A[i - 1];
    A[vt] = x;
    N++;
  }
  printf("\nMang duoc sap xep lai la : ");
  for (int i = 0; i < N ; i++)
  {
    printf("\t%d", A[i]);
  }
}
void xoa(){
	int vt = timmax();
	if (vt >=0 && vt <N){
		for(int i=vt;i<N;i++){
			A[i]=A[i+1];
			N--;
		}
	}
	printf("\nMang sau khi duoc xoa :");
	for (int i=0;i<N;i++){
		printf("%d   ",A[i]);
	}
}
int main(){
	nhapN();
	nhapmang();
	inmang();
	timmax();
	printf("\nnhap gia tri x : ");
	scanf("%d",&x);
	them();
	xoa();

}
