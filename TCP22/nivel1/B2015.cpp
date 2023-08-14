#include<bits/stdc++.h>

using namespace std;

int vet[4];
char res = 'N';

int main() {

	for(int i=0; i<4; i++) {
		scanf("%d", &vet[i]);
	}

	for(int i=0; i<4; i++) {
		for(int j=i+1; j<4; j++) {
			for(int k=j+1; k<4; k++) {
				if(
					(vet[i] < vet[j]+vet[k]) &&
					(vet[j] < vet[i]+vet[k]) &&
					(vet[k] < vet[i]+vet[j])
				) {
					res = 'S';
					break;
				}
			}
		}
	}

	printf("%c\n", res);
	return 0;
}
