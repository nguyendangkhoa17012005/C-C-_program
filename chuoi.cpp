#include<stdio.h>
#include<string.h>
char s[100] = "dA1 h0C nH4 trang";
void sapxep(char a[])
{
	int i = 0,j = 0;char b[100];
	
	while(a[i] != '\0')
	{
		if(a[i] >= 'A' && a[i] <= 'Z' || a[i] >= 'a' && a[i] <='z')
		{
			b[j++] =  a[i];		
		}
		i++;
	}
	b[j] = '\0';
	printf("\nDay toan chu cai: %s",b);
	int n = strlen(b);
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (b[i] > b[j]) {
                char temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
	printf("\nChuoi sap xep: %s",b);
}

int main()
{
	printf("Chuoi vua nhap la: %s",s);
	sapxep(s);
}
