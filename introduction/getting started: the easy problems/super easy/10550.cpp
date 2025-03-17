#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int N0, N1, N2, N3;

int main() {
	fastio;

	while(scanf("%d %d %d %d", &N0, &N1, &N2, &N3), (N0 || N1 || N2 || N3)) {
		int combination = 120;

		combination += (N0 - N1 + 40) % 40;
		combination += (N2 - N1 + 40) % 40;
		combination += (N2 - N3 + 40) % 40;

		printf("%d\n", (combination * 9));
	}

	return 0;
}
