#include <stdio.h>
#include<math.h>
float  calculateDistance(float a, float b, float c, float d) {
	float e = sqrt((c - a) * (c - a) + (d - b) * (d - b));
	return e;
}
int main() {
	float a, b, c, d,e;
	a = 0.00;
	b = 1.00;
	c = 3.10;
	d = 4.20;
		e = calculateDistance(a, b, c, d);
	printf("坐标1（%.2f,%.2f) 与 坐标2（%.2f,%.2f) 两点之间的距离为: %.2f\n", a, b, c, d, e);
	return 0;
}