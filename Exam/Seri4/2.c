#include<stdio.h>
#include<string.h>
void reverse(char *s);
int main(){
	char str[50];
	printf("enter your string => ");
	scanf("%s", str);
	reverse(str);
	printf("\n Result : %s\n", str);
	return 0;
}
void reverse(char *s){
	char temp;
	for (int i = 0, j=3; i<j; i++, j--){
		temp = *(s + i);
		*(s + i) = *(s +j);
		*(s + j) = temp;
	}
	
	
}
