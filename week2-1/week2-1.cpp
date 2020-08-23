#include<stdio.h>
int main() {
	int x;
	scanf_s("%d", &x);
	for (int i=0; i <= x; i++) {
		for (int l = x - i; l <= x; l++) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}