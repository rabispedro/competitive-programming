#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main()
{
	fastio;

	double p1, p2, p3, p4;
	cin >> p1 >> p2 >> p3 >> p4;

	double nota = (p1 + 2 * p2 + 3 * p3 + 5 * p4) / 11.0f;
	string resultado = ((nota >= 6.0f) ? "classificado" : "desclassificado");

	cout.precision(3);
	cout << nota << "\n" << resultado << "\n";

	return 0;
}