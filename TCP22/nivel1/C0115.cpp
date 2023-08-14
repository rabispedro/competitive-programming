#include<stdio.h>
#include<math.h>

int main() {
	int A,B;

	scanf("%d %d", &A, &B);
	printf("%d\n", (A > B ? A : B));

	return 0;
}