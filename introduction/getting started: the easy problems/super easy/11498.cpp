#include<bits/stdc++.h>

using namespace std;

int K, N, M, X, Y;

int main() {
	while(scanf("%d", &K), K) {
		scanf("%d %d", &N, &M);
		
		for(int i=0; i<K; i++) {
			scanf("%d %d", &X, &Y);
			
			if(X > N && Y > M) printf("NE\n");
			else if(X > N && Y < M) printf("SE\n");
			else if(X < N && Y > M) printf("NO\n");
			else if(X < N && Y < M) printf("SO\n");
			else printf("divisa\n");
		}
	}

	return 0;
}
