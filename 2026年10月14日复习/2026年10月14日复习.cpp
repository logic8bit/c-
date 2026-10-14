#include<stdio.h>
int fx(int a, int b) {
	return a - b;
}
int main() {
	int a = fx(5, 3);
		printf("5-3=%d",a);
		return 0;
}