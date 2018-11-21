#include <stdio.h>
#include <conio.h>

int main() {
	int x = 0, y = 0;
	char operator;
	printf("Please Enter 2 Integer Number\n");
	scanf_s("%d%d", &x, &y);

	printf("Please Enter operator to calculate\n");
	operator = _getche();
	printf("\n");
		switch (operator) {
		case '+':
			printf("Sum = %d\n", x + y);
			break;
		case '-':
			printf("Minus = %d\n", x - y);
			break;
		case '*':
			printf("Multiply = %d\n", x * y);
			break;
		case '/':
			printf("Division = %d\n", x / y);
			break;
		default:
			printf("Invalid operator");
			break;
		}
	return 0;
}