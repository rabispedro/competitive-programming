#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define debug(x) cout << #x << "= '" << x << "'\n"

using namespace std;

int main() {
	fastio;
	int B,N;
	int C,D,V;
	char res = '\0';
	
	while(scanf("%d %d", &B, &N), (B && N)) {
		scanf("%d %d %d", &D, &C, &V);

		int vet[B];
		for(int i=0; i<N; i++) {
			
			vet[D-1]++;
		}
		
		res = 'S';
		for(int i=0; i<N && res == 'S'; i++)
			if(vet[i] < 0)
				res = 'N';


		printf("%c\n", res);
	}

	return 0;
}
