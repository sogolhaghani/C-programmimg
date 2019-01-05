#include <stdio.h>

int calculate(int n);

int main()
{
	int n =0 , result = 0;
	printf("Enter N:");
	scanf("%d", &n);
	result = calculate(n);
	printf("\nResult  : %d\n", result);
	return 0;
}

int calculate(int n)
{
	if (n == 0)
	{
		return 9;
	}
	return (8 * calculate(n - 1) - 8);
}