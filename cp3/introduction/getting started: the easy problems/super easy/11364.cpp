#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int t, n;

int main() {
	fastio;
	scanf("%d", &t);

	while(t--) {
		int l, r;

		scanf("%d", &n);
		for(int i=0; i<n; i++) {
			int temp;
			scanf("%d", &temp);

			if(i == 0) {
				r = l = temp;
			} else {
				r = max(r, temp);
				l = min(l, temp);
			}
		}
		
		printf("%d\n", (2*(r-l)));
	}

	return 0;
}

