#include<bits/stdc++.h>

using namespace std;

int main() {
	int h, m, s, N;
	scanf("%d", &N);

	h = N / 3600;
	N -= h * 3600;
	m = N / 60;
	N -= m * 60;
	s = N;

	printf("%d:%d:%d\n", h,m,s);
	return 0;
}