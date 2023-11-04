#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int T, C, L, W, H;

int main() {
	fastio;
	scanf("%d", &T);
	
	while(T--) {
		scanf("%d %d %d", &L, &W, &H);
		
		printf("Case %d: %s\n", ++C, ((L > 20 || W > 20 || H > 20) ? "bad" : "good"));
	}

	return 0;
}

