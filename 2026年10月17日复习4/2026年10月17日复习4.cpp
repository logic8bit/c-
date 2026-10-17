#include <stdio.h>  

int main() {
	printf("%-5s  %-15s  %3s\n", "ID", "Name", "Score");
	printf("%-5s  %-15s  %3s\n", "==", "", "=====");
	printf("%-5s  %-15s  %+3d\n", "01", "Alice", 92);
	printf("%-5s  %-15s  %+3d\n", "02", "Bob", 85);
	printf("%-5s  %-15s  %+3d\n", "03", "Charlie", 98);
	printf("%-5s  %-15s  %+3d\n", "04", "David", 76);
	return 0;
}