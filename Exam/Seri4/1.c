#include<stdio.h>
int main(){
	int n = 0;
	float result = 1;
    printf("please enter N : ");
	scanf("%d", &n);
	for (int i=1 ; i <= n; i++)
	{
        int denominator = 2 * i + 1;
		result *= 1 -( (float) 1 / denominator );
	}
    
    printf("\nThe result is %f\n",result);
	printf("%f", result);
	return 0;
}

















