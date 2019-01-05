#include <stdio.h>
void reverse(int *start, int *end)
{
	int t;
	if (start < end)
	{
		t = *start;
		*start = *end;
		*end = t;
		reverse(start + 1, end - 1);
	}
}
int main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	reverse(a, a + 9);
    printf("Result :\n");
	for (int i = 0; i < 10; i++){
		printf("%d\t", a[i]);
    }
    printf("\n");
	return 0;
}