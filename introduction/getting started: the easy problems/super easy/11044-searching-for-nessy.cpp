#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int T, M, N;

int main() {
	scanf("%d", &T);
	while(T--) {
		scanf("%d %d", &N, &M);
		N -= 2;
		M -= 2;
		
		int line_min = N / 3;
		line_min += ((N % 3 > 0) ? 1 : 0);
		
		int col_min = M / 3;
		col_min += ((M % 3 > 0) ? 1 : 0);
		
		printf("%d\n", (line_min * col_min));
	}

	return 0;
}
