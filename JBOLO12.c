#include<stdio.h>
#include<stdlib.h>

int a, b, c, max;

int main () {
	scanf("%d %d %d", &a, &b, &c);

	max = (a / 2);
	max = ((b / 3) < max ? (b / 3) : max);
	max = ((c / 5) < max ? (c / 5) : max);

	printf("%d\n", max);
	return 0;
}