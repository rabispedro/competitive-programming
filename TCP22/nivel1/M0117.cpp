#include<bits/stdc++.h>

using namespace std;

int A,B,C;

int main() {
	scanf("%d %d %d", &A, &B, &C);

	printf("%d\n", min(min((2*B + 4*C), (2*A + 2*C)), (4*A + 2*B)));
	return 0;
}
