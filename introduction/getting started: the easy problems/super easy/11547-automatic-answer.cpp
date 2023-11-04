#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int t, n;

int main() {
	fastio;
	
	scanf("%d", &t);
	
	while(t--) {
		scanf("%d", &n);
		
		n = (315 * n) + 36962;
		n = (n / 10) % 10;
		printf("%d\n", abs(n));
	}

	return 0;
}

