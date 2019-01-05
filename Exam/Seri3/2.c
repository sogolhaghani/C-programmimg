#include<stdio.h>

void move(int *a, int len);
void swap(int *a, int *b);
int main() {
	int s[100], n,i;
    printf("Enter number of array elemets:");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
        printf("\n (%d) -> ", i+1);
		scanf("%d", &s[i]);
	}
	move(s, n);
    printf("Result : ");
    for (i = 0; i < n; i++) {
        printf("\n\t(%d) -> ", i+1);
		printf("%d", s[i]);
	}
	return 0;
}


void move(int *a, int len){

    int startPoint =0;
    if (len % 2 == 0) {
        startPoint = len / 2;
    }else{
        startPoint = len / 2 +1;
    }

    int temp=0;
	while((startPoint + temp) <len){
        swap(a, a+startPoint);
        a++;
        temp++;
    }
}

void swap(int *element1Ptr, int *element2Ptr)
{
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}