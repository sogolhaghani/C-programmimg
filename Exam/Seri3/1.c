#include<stdio.h>
int fact(int x);
float calculate(int n);
int main()
{
	int n=0;
    printf("Enter N :");
	scanf("%d", &n);
	printf("\n Result : %f\n", calculate(n));
	return 0;
}


int fact(int x)
{
    if (x < 2)
    {
        return 1;
    }
    return x * fact(x - 1);
}

float calculate(int n)
{
	int sign = 1;
	float sum = 0.0;
	for (int i = 0; i < n; i++) {
		int numerator = (i + 1) * sign;
        int denominator = fact(2 * i);
		sum+= (float) numerator / denominator;
        sign*=(-1);
	}
	return sum;

}
