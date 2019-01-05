#include <stdio.h>
int fact(int x);
int power(int number, int power);

int main()
{
    int n =0, x=0, sign = 1;
    float sum = 0;
    printf("please enter N : ");
    scanf("%d", &n);
    printf("\nplease enter X :");
    scanf("%d", &x);
    for (int i = 1; i <= n; i++)
    {
        int p = (i % 3);
        int numerator = power(x,p) * sign;
        int denominator = fact(2 * i);
        sum += ((float)numerator / denominator);
        sign *=(-1);
    }
    printf("\nThe result is %f\n",sum);
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

int power(int number, int power){
    for(int i=0; i<power ;i++){
        number *=number;
    }
    return number;
}