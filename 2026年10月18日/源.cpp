#include<stdio.h>
int main() {
	int a = 152;
	printf("整数152的个位数字是%d\n", a % 10);
	printf("整数152的十位数字是%d\n", (a / 10) % 10);
	printf("整数152的百位数字是%d\n	", (a / 100) % 10);
	return 0;
}