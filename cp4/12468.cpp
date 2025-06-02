#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main() {
	fastio;

	int a,b;

	while(scanf("%d %d", &a, &b), (a != -1 && b != -1))
		printf("%d\n", min((abs(b-a)), min(abs(100+a-b) , abs(100-a+b))));
	return 0;
}

