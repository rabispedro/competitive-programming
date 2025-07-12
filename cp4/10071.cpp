#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define debug(x) cout << #x << "= '" << x << "'\n"

using namespace std;

typedef long long int lli;

int main () {
	fastio;

	lli v,t;
	while(scanf("%lld %lld", &v, &t) != EOF )
		printf("%lli\n", (v * t * 2));

	return 0;
}
