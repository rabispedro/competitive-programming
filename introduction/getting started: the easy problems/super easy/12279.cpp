#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int N, C, supposed, given;

int main() {
	fastio;
	
	while(scanf("%d", &N) != EOF, N) {
		supposed = given = 0;
		
		for(int i=0; i<N; i++) {
			int temp;
			scanf("%d", &temp);
			if(temp > 0) supposed++;
			else if(temp == 0) given++;
		}
		
		printf("Case %d: %d\n", ++C, (supposed-given));
	}

	return 0;
}

