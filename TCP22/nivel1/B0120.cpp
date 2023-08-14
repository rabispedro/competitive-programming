#include<bits/stdc++.h>

using namespace std;

int grid[10][10], N, D, L, R, C;
char resp = 'Y';

int main() {
	scanf("%d", &N);

	for(int i=0; i<N; i++) {
		scanf("%d %d %d %d", &D, &L, &R, &C);
		if(D) {
			if((R+L-2) >= 10) resp = 'N';
			else for(int j=(R-1); j<(R+L-1); j++) grid[j][C-1]++;
		} else {
			if((C+L-2) >= 10) resp = 'N';
			else for(int j=(C-1); j<(C+L-1); j++) grid[R-1][j]++;
		}
	}

	if(resp == 'Y') {
		for(int i=0; i<10; i++) {
			for(int j=0; j<10; j++) {
				if(grid[i][j] > 1) {
					resp = 'N';
					break;
				}
			}
		}
	}

	printf("%c\n", resp);
	return 0;
}
