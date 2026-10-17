#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a;
	printf("请输入一个十进制的数字：");
	scanf("%d",&a);
	printf("该数字的十六进制表示为：%#x", a);
	return 0;
}