#include <stdio.h>  
int main() {
	int chinese, math, english;
	int sum;
	double average;
	printf("请输入同学的语文成绩: ");
	scanf("%d", &chinese);
	printf("请输入同学的数学成绩: ");
	scanf("%d", &math);
	printf("请输入同学的英语成绩: ");
	scanf("%d", &english);
	sum = chinese + math + english;
	average = (double)sum / 3.0;
	printf("该同学的三科总分为: %d\n", sum);
	printf("该同学的平均分为: %.2f\n", average);
	return 0;
}