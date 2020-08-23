#include<stdio.h>
int main() {
	int x;
	scanf_s("%d", &x);
	for (int r = 0; r < x; r++)
	{
		for (int s = x - r; s <= x; s++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}