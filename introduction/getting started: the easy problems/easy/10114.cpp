#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define debug(x) cout << #x << "= '" << x << "'\n"

using namespace std;

int main() {
	fastio;

	double insurance = 10000;
	double bank = 15000;
	double adicionalLoss = 5000;

	int months;
	double payment, loan, depreciation;

	int depreciationMonth;
	double depreciationPercentage;

	cin >> months >> payment >> loan >> depreciation;

	while(depreciation--) {
		cin >> depreciationMonth >> depreciationPercentage;
	}

	return 0;
}
