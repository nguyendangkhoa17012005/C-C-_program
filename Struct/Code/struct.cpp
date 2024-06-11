#include<stdio.h>
#include<string.h>
#define MAX 50 
struct hocsinh
{
	char hoten [255];
	char xeploai[20];
	float dkt;
	float dt;
	float dtb;
};
struct hocsinh hs[MAX];
int soluong = 3;
void nhap ()
{
	for (int i = 0; i < soluong; i++)
	{
		printf("Thong tin hoc sinh thu %d: \n",i);
		printf("Ho va ten :");
		fflush(stdin);
		gets(hs[i].hoten);
		printf("Diem kiem tra: ");
		scanf("%f",&hs[i].dkt);
		printf("Diem thi: ");
		scanf("%f",&hs[i].dt);
		float dtb = (hs[i].dkt + hs[i].dt) / 2;
		hs[i].dtb = dtb;
	}
}

void inds(struct hocsinh t[MAX], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%s",t[i].hoten);
		printf("\t%.2f",t[i].dkt);
		printf("\t%.2f",t[i].dt);
		printf("\t%.2f",t[i].dtb);
		printf("\n");
	}
}
void swap(float *x,float *y)
{
	float tam = *x;
	*x = *y;
	*y = tam;
}
void giam(struct hocsinh t[MAX], int size)
{
	for(int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if(t[i].dtb <t[j].dtb)
			{
				swap(&t[i].dtb,&t[j].dtb);
				char chuoitam [MAX];
				strcpy(chuoitam,t[i].hoten);
				strcpy(t[i].hoten,t[j].hoten);
				strcpy(t[j].hoten,chuoitam);
				swap(&t[i].dt,&t[j].dt);
				swap(&t[i].dkt,&t[j].dkt);
			}
			
		}
	}
	inds(t,size);
}
void xeploai(struct hocsinh t[MAX], int size)
{
	for(int i = 0; i < size; i++)
	{
		if(t[i].dtb >= 8)
		strcpy(t[i].xeploai,"Gioi");
		else if(t[i].dtb < 8 && t[i].dtb >= 6.5)
		strcpy(t[i].xeploai,"Kha");
		else if(t[i].dtb < 6.5 && t[i].dtb > 5)
		strcpy(t[i].xeploai,"Trung Binh");
		else strcpy(t[i].xeploai,"Yeu");
	}
	printf("Danh sach lop duoc xep loai:\n");
	printf("====================================\n");
	printf("Ho va ten\tDKT\tDthi\tDTB\tXep loai\n");
	printf("====================================\n");
	for (int i = 0; i < size; i++)
	{
		printf("%s",t[i].hoten);
		printf("\t%.2f",t[i].dkt);
		printf("\t%.2f",t[i].dt);
		printf("\t%.2f",t[i].dtb);
		printf("\t%s",t[i].xeploai);
		printf("\n");
	}
}
int main ()
{
	nhap();
	printf("====================================\n");
	printf("Ho va ten\tDKT\tDthi\tDTB\n");
	printf("====================================\n");
	inds(hs,soluong);
	printf("Danh sach lop giam dan theo diem tb:\n");
	printf("====================================\n");
	printf("Ho va ten\tDKT\tDthi\tDTB\n");
	printf("====================================\n");
	giam(hs,soluong);
	xeploai(hs,soluong);
	return 0;
}
