#include<stdio.h>
int main() {
	int level;
	scanf_s("%d", &level);
	for (int row = 0; row < level; row++)
	{
		for (int star = level - row; star <= level; star++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}