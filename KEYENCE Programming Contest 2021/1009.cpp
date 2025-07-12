#include<bits/stdc++.h>

using namespace std;

int main() {
	string nome;
	double fixo, montante;

	cin>>nome>>fixo>>montante;
	cout << fixed << showpoint;
	cout << setprecision(2);
	cout<<"TOTAL = R$ "<<(fixo + montante * 0.15)<<"\n";

	return 0;
}