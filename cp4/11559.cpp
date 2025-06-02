#include<bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define DEBUG(x) cout << #x << ": '" << x << "'\n"
#define REP(i, a, b) for(int i=a; i<=b; i++)

#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const int POS_INF = 1e9;
const int NEG_INF = 1e-9;
const int MOD = 1e9+7;

int main () {
	FASTIO;
	/*
	O que eu preciso fazer?
	- Escolher o hotel que caiba no orçamento e durante todo o final de semana escolhido
	- O hotel deve acolher todo o grupo e ter o menor custo
	- Escolher ficar em casa, caso não de para ficar em nenhum hotel

	O que pode dar errado?
	- O orçamento não caber no hotel
	- O orçamento caber no hotel, mas não ter vaga para todo o grupo
	
	O que fazer se der errado?
	- Colocar um valor fixo, negativo ou infinito, para sinalizar que deu errado aquele hotel

	O que pode dar certo?
	- O orçamento caber no hotel e ter cama para o grupo inteiro

	O que fazer se der certo?
	- Colocar o valor de custo daquele hotel para a estadia do grupo inteiro

	Quais minhas entradas?
	- Varios casos de testes que consistem em:
		- Quatro números inteiros:
			- Número de participantes
			- Valor do orçamento
			- Número de hotéis
			- Número de semanas para escolher
		- Duas linhas para cada hotel:
			- Preco da estadia para uma pessoa durante um final de semana
			- I números, baseado nos finais de semana:
				- Número de camas para o i-ésimo final de semana no hotel

	Quais minhas saidas?
	- O custo mínimo de estadia do grupo se der certo
	- A mensagem "stay home" se der errado

	O que fazer com essas informações?
	- Colocar o custo de estadia do grupo em uma lista:
		- Se for possível, colocar o valor da estadia
		- Se não for possível, colocar o valor infinito como custo do hotel
	- Verificar na lista de orçamentos o menor orçamento:
		- Se o menor custo for infinito, decidir ficar em casa
		- Se o menor custo não for infinito, decidir gastar o dinheiro naquele hotel 

	Exemplos:
	- 2 participantes, 100 reais de orcamento, 2 hoteis, 2 semanas
	- Custo de [200, 99] para o hotel 1
	- Custo de [50, 100] para o hotel 2
	- Custo minimo de 50

	- 2 participantes, 100 reais de orcamento, 2 hoteis, 2 semanas
	- Custo de [200, 101] para o hotel 1
	- Custo de [350, 150] para o hotel 2
	- Custo minimo de infinito, melhor ficar em casa
	*/
	int participantes, orcamento, hoteis, semanas;

	while(cin >> participantes >> orcamento >> hoteis >> semanas) { // Lê N casos de teste
		int preco[hoteis], minimo = POS_INF;
		REP(i, 0, hoteis-1)
			preco[i] = POS_INF;

		REP(i, 0, hoteis-1) {
			int estadia, quartos[semanas];
			cin >> estadia;

			bool podeAlugar = (estadia * participantes <= orcamento);
			REP(j, 0, semanas-1) {
				cin >> quartos[j];

				if (podeAlugar && quartos[j] >= participantes) {
					preco[i] = participantes * estadia;
					podeAlugar = false;
				} 
			}
		}

		REP(i, 0, hoteis-1)
			if(preco[i] < minimo)
				minimo = preco[i];

		if (minimo <= orcamento)
			cout << minimo << "\n";
		else
			cout << "stay home\n";
	}

	return 0;
}
