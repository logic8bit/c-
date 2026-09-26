#include <stdio.h>
int up(char letter) {
	letter = letter + 32;
	return letter;
}
int down(char letter) {
	letter = letter - 32;
	return letter;
}
int main() {
	printf("%c", down('o'));
	printf("%c", up('F'));
	return 0;
}