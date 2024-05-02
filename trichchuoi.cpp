#include<stdio.h>
#include<string.h>
#define maxd 100
int n,len;
char a[maxd];
void trich(int n)
{
	char b[maxd];
	for (int i = 0; i < n; i++)
	{
		b[i] = a[i];
	}
	printf("Chuoi duoc trich la :");
	printf("%s",b);
}
void dem(char a[maxd])
{
	char b[] = "ueoai";
	int dem = 0;
	int len = strlen(a);
	for (int i = 0; i < len; i++)
	{	
		for (int j = 0; j < strlen(b); j++)
		{
			if (a[i] == b[j])
			{
				a[i] -= 32;
				dem++;
			}
		}
	}	
	printf("\nCo %d nguyen am va duoc thay the : %s",dem,a);
}
void xoa(char a[])
{
	int len = strlen(a),i;
	int cout = 1,dem = 0;
	for (int i = 0; i < len; i++)
	{
		if (a[i] == ' ')
		{
			cout++;
		}
	}
	cout -= 2;
	printf("\nChuoi sau khi xoa :");
	for (int i = 0; i < strlen(a); i++)
	{
		printf("%c",a[i]);
		if(a[i] == ' ')
		{
			dem++;
		}
		if(dem == cout) break;
	}
}
void dao(char a[])
{
	int len = strlen(a);
	int vt = 0;
	char b[maxd];
	for(int i = strlen(a) - 1; i >= 0;i--)
	{
		while(a[i] != ' ' && i >= 0)
		{
			b[vt++] = a[i];
			i--;
		}
		b[vt] = '\0';
		vt = 0;
		strrev(b);
		printf("\n%s",b);
	}
}
int main ()
{
	printf("Nhap chuoi: ");
	fflush(stdin);
	gets(a);
	trich(3);
	dem(a);
	xoa(a);
	printf("\nChuoi dao nguoc la : ");
	dao(a);
}
