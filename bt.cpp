#include<stdio.h>
#include<string.h>
#define maxd 100
char s[maxd];
int len;
int nguyenam(char a[], char n)
{
	int len = strlen(a);
	int dem = 0;
	for (int i = 0; i < len; i++)
	{
		if (a[i] == n || a[i] == char(int(n) - 32))
		{
			dem++;
		}
	}
	return dem;
}
int tongchuso(char a[])
{
	int tong = 0,len = strlen(a);
	for (int i = 0; i < len; i++)
	{
		if (a[i] >= '0' && a[i] <= '9')
		{	
			tong += int (a[i]-48);
		}
	}
	return tong;
}
int main()
{
	printf("Nhap chuoi :");
	fgets(s, sizeof(s),stdin);
	printf("\nSl Nguyen am a/A trong chuoi la %d", nguyenam(s,'a'));
	printf("\nSL Nguyen am u/U trong chuoi la %d", nguyenam(s,'u'));
	printf("\nSL Nguyen am o/O trong chuoi la %d", nguyenam(s,'o'));
	printf("\nSLNguyen am i/I trong chuoi la %d", nguyenam(s,'i'));
	printf("\nSL Nguyen am e/E trong chuoi la %d", nguyenam(s,'e'));
	printf("\nTong chu so trong chuoi %d",tongchuso(s));
	
}
