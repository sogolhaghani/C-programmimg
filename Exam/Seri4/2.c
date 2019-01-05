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
	int  i;
	char temp;
	
	for (i = 0; i<3; i++){
		temp = *(s + i);
		*(s + i) = *(s + i + 1);
		*(s + i + 1) = temp;
	}
	
	
}
