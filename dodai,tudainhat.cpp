#include<stdio.h>
#include<string.h>
#define maxd 100
char s[maxd];
int dodai(char a[])
{
	int i = 0;
	while(a[i] != '\0')
	{
		i++;
	}
	return i;
}
void tudainhat()
//{
//	int i=0;
//	int len=1;
//	int dem=0;
//	int D[255];
//	while(s[i]!='\0'){
//		if(s[i]!='\0' && s[i]==' '){
//			D[dem++]=len;
//			len=0;
//		}
//		len++;
//		i++;
//	}
//	//in ra danh sach do dai cua tu
//	for(int i=0; i<dem; i++){
//		printf("\n%d",D[i]);
//	}
//	//tim max, vtmax
//	int max=D[0];
//	int vtmax=0;
//	for(int i=1; i<dem; i++){
//		if(max < D[i]){
//			max=D[i];
//			vtmax=i;
//		}
//	}
//	printf("\nmax = %d, vtmax = %d",max,vtmax);
//	//tong cac ky tu cho den tu dai nhat
//	int sum=0;
//	for(int i=0; i<vtmax; i++){
//		sum+=D[i];
//	}
//	printf(", sum=%d\n",sum);
//	//copy tu dai nhat
//	printf("\nTu dai nhat la: ");
//	for(int i=sum; i<sum+max; i++){
//		printf("%c",s[i]);
//	}
//}
{
	int n = strlen(s);
    int max_length = 0, length = 0;
    char longest[100], word[100];

    for(int i = 0; i <= n; i++) {
        if(s[i] != ' ' && s[i] != '\0') {
            word[length] = s[i];
            length++;
        } else {
            word[length] = '\0';
            if(length > max_length) {
                max_length = length;
                strcpy(longest, word);
            }
            length = 0;
        }
    }

    printf("\nTu dai nhat: %s\n", longest);
}
int main ()
{
	printf("Nhap chuoi :");
	fflush(stdin);
	gets(s);
	printf("Chuoi vua nhap la:");
	printf("%s",s);
	printf("\nDo dai chuoi la: %d",dodai(s));
	tudainhat();
} 
