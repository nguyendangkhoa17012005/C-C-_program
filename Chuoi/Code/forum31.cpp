#include<stdio.h> 
#include<string.h>
#define max 100

char s[max];

void nhap()
{
	printf("Nhap chuoi :");
	fflush(stdin);
	gets(s);
	printf("Chuoi vua nhap la :");
	printf("%s",s);
}

void kitu()
{
	int cnt = 0;
	for(int i = 0; i < strlen(s); i++)
	{
		if((s[i] < '0' || s[i] > '9') && (s[i] < 'A' || s[i] > 'Z') && (s[i] < 'a' || s[i] > 'z'))
		{
			if(s[i] != ' ')
			cnt++;
		}	
	}
	printf("\nCo %d ki tu dac biet trong chuoi",cnt);
}

//void xoa()
//{
//	int i = 0;
//	while(s[i] != ' ')
//	{
//		strcpy(&s[i],&s[i+1]); 
//	}
//	printf("\nChuoi sau khi xoa :");
//	printf("%s",s);
//	// toi la sinh vien
//	//  la sinh vien
//}

void tumax()
{
	//nguyen dang khoa 
    int l, r;
    int maxd = 0, l_t = 0, r_t = 0;
    for (int i = 0; i < strlen(s); i++)
    {
    	l = i;
    	while(s[i] != ' ' && s[i] != '\0')
    		i++;
    	r = i;
    	if(r - l > maxd)
    	{
    		maxd = r -l;
    		l_t = l;
    		r_t = r;
		}
		
	}
	printf("\n");
	for(int i = l_t; i < r_t; i++)
		printf("%c", s[i]);
}
int main ()
{
	nhap();
	kitu();
	tumax();
}
