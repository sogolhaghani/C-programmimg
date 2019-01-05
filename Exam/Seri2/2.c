#include <stdio.h>
#include <string.h>
int  tokensize(char s[]){
	int i=0;
	int count=0;
	for (i = 0; s[i]!='\0'; i++){
		count++;
	}
	return (count-1);
}
int main(){
	char s[20];
	int j=0,i;
	gets(s);
	j=tokensize(s);
	for (i = j; i >= 0; i--){
		printf("%c", s[i]);
	}
	return 0;
}
