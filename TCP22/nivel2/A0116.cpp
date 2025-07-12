#include <bits/stdc++.h>

using namespace std;

int A, B, C, maior;
char resp = 'N';

int main()
{
	scanf("%d %d %d", &A, &B, &C);

	if (A == B || A == C || B == C)
		resp = 'S';

	maior = max(max(A, B), C);
	resp = (maior == (A + B + C - maior) ? 'S' : resp);

	printf("%c\n", resp);
	return 0;
}
