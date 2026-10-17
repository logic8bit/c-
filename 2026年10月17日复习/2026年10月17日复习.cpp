#include<stdio.h>
int main() {
	int a=3, b=2;
	int sum, difference, product, quotient;
	sum = a + b;
	difference = a - b;
	product = a * b;
	quotient = a / b;
	printf("%d + %d = %d\n", a, b, sum);
		printf("%d - %d = %d\n", a, b, difference);
		printf("%d * %d = %d\n", a, b, product);
		printf("%d / %d = %d\n", a, b, quotient);
		return 0;
}