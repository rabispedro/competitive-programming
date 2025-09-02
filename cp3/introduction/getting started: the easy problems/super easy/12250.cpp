#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int C;
char str[20], resp[20];

int main() {
	fastio;
	
	while(scanf("%s", &str) != EOF, str[0] != '#') {
		if(strcmp(str, "HELLO") == 0) strcpy(resp, "ENGLISH");
		else if(strcmp(str, "HOLA") == 0) strcpy(resp, "SPANISH");
		else if(strcmp(str, "HALLO") == 0) strcpy(resp, "GERMAN");
		else if(strcmp(str, "BONJOUR") == 0) strcpy(resp, "FRENCH");
		else if(strcmp(str, "CIAO") == 0) strcpy(resp, "ITALIAN");
		else if(strcmp(str, "ZDRAVSTVUJTE") == 0) strcpy(resp, "RUSSIAN");
		else strcpy(resp, "UNKNOWN");
		
		printf("Case %d: %s\n", ++C, resp);
	}

	return 0;
}

