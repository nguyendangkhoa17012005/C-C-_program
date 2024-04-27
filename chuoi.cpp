#include <stdio.h>
#include <string.h>
#define Max 100
char str[100];
void Chuan_Hoa(char s[]){
// xoa khoang trang thua dau chuoi
	while( s[0] == ' ' ) strcpy(&s[0], &s[1]);
// xoa khoang trang thua cuoi chuoi
	while( s[strlen(s)-1 ] == ' ') s[strlen(s)-1 ] = '\0';
// xoa khoang trang thua giua hai tu
	int i;
	for(i = 0; i < strlen(s); i++)
		if(s[i] == ' ' && s[i+1] == ' ')
		{
			strcpy(&s[i], &s[i+1]);
			i--;
		}
}
int is_nguyenam(char c)
{
  //khai bao bien
  
  switch(c)
  {
 	  case 'a':
 	  case 'e':	
 	  case 'i':
	  	case 'o':
	  	case 'u':	
	  	case 'A':
	  	case 'E':	
	  	case 'I':
  		case 'O':
  		case 'U':
				  return 1;
				default:
				  return 0;	
		}
}

int demnguyenam()
{
  //khai bao bien
  int i=0;
  int tongnguyenam=0;
  while(str[i]!='\0') //chua phai la ky hieu ket thuc chuoi
  {
  	 //dem tong so nguyen am
				if(is_nguyenam(str[i])==1)
				{
				  tongnguyenam++;
				} 
	i++;
	}
	return tongnguyenam;
}

void intudau(char s[]){
//in chu cai dau cua chuoi
	int i=0;
	while (s[i]!='\0')
		if (s[i]!=32)
		{
		printf("%c",s[i]);
		i++;
		}
	else
	break;
}
void intucuoi(char s[]){
// in chu cai cuoi chuoi
	int i=strlen(s)-1,j=0;
	char s1[Max];
	while (s[i]!=32)
	{
		s1[j]=s[i];
		i--;
		j++;
	}
	strrev(s1);
	printf("%s",s1);
}
void viethoa(char s[]){
	int i;
	strlwr(s);//viet thuong tat ca
	s[0]=s[0]-32;//viet hoa chu cai dau cua tu dau tien chuoi
	for (i = 0; i < strlen(s); i++)//trong chuoi
	{
		if(s[i] ==' ')
		s[i+1]=s[i+1]-32;
	}
	
	puts(s);
}
int slchuso(char s[])
{
	int c = 0;
	//so luong chu so
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			c++;
		}
	}
	return c;
}
void doichuso(char s[])
{
	int c = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			s[i] = '*';
		}
	}
	puts(s);
}
int main() {
    
    printf("Nhap chuoi:");
    fgets(str, sizeof(str), stdin);
    Chuan_Hoa(str);
    printf("Chuoi sau chuan hoa:");
    puts(str);
    printf("So luong nguyen am trong chuoi: %d",demnguyenam());
    printf("\nTu dau tien la:");
    intudau(str);
    printf("\nTu cuoi cung la:");
    intucuoi(str);
    printf(" Chuoi ki tu duoc in hoa chu cai dau :");
    viethoa(str);
    printf("So luong chu so trong chuoi : %d",slchuso(str));
    printf("\nChuoi duoc doi ki tu:");
    doichuso(str);
    return 0;
}
