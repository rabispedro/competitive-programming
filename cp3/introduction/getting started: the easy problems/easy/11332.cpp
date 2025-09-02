#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define debug(x) cout << #x << "= '" << x << "'\n"

#define li long int

using namespace std;

li solve(li n);

int main() {
	fastio;
	li N;

	while(1) {
		cin >> N;
		if(N == 0) break;

		cout << solve(N) << "\n";
	}

	return 0;
}

li solve(li n) {
	if (n < 10) return n;

	li sum=0;

	while (n > 0) {
		sum += (n % 10);
		n /= 10;
	}

	return solve(sum);
}
