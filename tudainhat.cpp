#include<stdio.h>
#include<string.h>
#define maxd 100
char s[maxd];
void tudainhat()
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

    printf("\n%s %d", longest,length);
}
int main ()
{
	printf("Nhap chuoi :");
	fflush(stdin);
	gets(s);
	printf("Chuoi vua nhap la:");
	printf("%s",s);
	tudainhat();
} 
