#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int N, resp;
string str;

int main() {
	fastio;
	
	cin>>N;
	
	while(N--) {
		cin>>str;
		
		if(str.size() == 5) resp = 3;
		else if (str.size() == 3){
			if(
				(str.at(0) == 'o' && str.at(1) == 'n')
				|| (str.at(0) == 'o' && str.at(2) == 'e')
				|| (str.at(1) == 'n' && str.at(2) == 'e')
			) resp = 1;
			else resp = 2;
		}
		
		cout<<resp<<"\n";
	}

	return 0;
}

