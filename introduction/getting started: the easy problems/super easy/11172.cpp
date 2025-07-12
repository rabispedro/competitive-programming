#include<bits/stdc++.h>

using namespace std;

int N, A, B;

int main() {
	scanf("%d", &N);

	while(N--) {
		scanf("%d %d", &A, &B);
		if(A > B) printf(">\n");
		else if(B > A) printf("<\n");
		else printf("=\n");
	}

	return 0;
}
