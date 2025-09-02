#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

void bubbleSort(int vet[3]);

int T, C;

int main() {
	fastio;
	
	scanf("%d", &T);
	while(T--) {
		int vet[3];
		scanf("%d %d %d", &vet[0], &vet[1], &vet[2]);
		bubbleSort(vet);
		
		printf("Case %d: %d\n", ++C, vet[1]);
	}
	

	return 0;
}

void bubbleSort(int vet[3]) {
	for(int i=0; i<3; i++) {
		for(int j=0; j<(2-i); j++) {
			if(vet[j] > vet[j+1]) {
				int temp = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = temp;
			}
		}
	}
}
