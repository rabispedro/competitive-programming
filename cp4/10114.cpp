#include<bits/stdc++.h>
#include<typeinfo>

#define FASTIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define DEBUG(x) cout << #x << ": '" << x << "'\n";
#define REP(i, a, b) for(int i=a; i<=b; i++)

#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> pii;

const int POS_INF = 1e9;
const int NEG_INF = 1e-9;
const int MOD = 1e9+7;

int main () {
	FASTIO;

	/*
	O que eu preciso fazer?
	- Calcular a primeira vez de ocorrência, em meses, que um dono de carro pagará  mais dinheiro que o valor atual de seu carro
	- Acumular os pagamentos mensais do dono do carro
	- Levando em consideração a depreciação do carro como uma porcentagem do valor do mês anterior

	O que pode dar errado?

	O que fazer se der errado?

	O que pode dar certo?
	- O dinheiro do pago pelo carro ser maior que o valor do carro depreciado

	O que fazer se der certo?
	- Calcular a quantidade paga pelo dono do carro
	- Calcular a quantidade atual do valor do carro
	- Somar a quantidade de meses para que a quantia paga pelo dono seja maior que o valor do carro

	Quais minhas entradas?
	- Vários casos de empréstimos:
		- Uma duração do empréstimo, em meses (máximo de 100 meses)
		- O valor de pagamento por mês
		- O valor do empréstimo (máximo de 75_000)
		- A quantidade do histórico de depreciações:
			- O número do mês
			- Porcentagem de depreciação

	Quais minhas saidas?
	- '1 month', para o caso de 1 mês
	- 'X months', para o caso de 2 ou mais meses

	O que fazer com essas informações?
	- Calcular o valor inicial do carro (aplicando a depreciação do mês 0)
	- Calcular quando o valor do carro será menor que o valor pago pelo mesmo, considerando a depreciação mensal

	Exemplos:
	- 30 meses
	- 500.0 reais de pagamento por mês
	- 15_000.0 reais de valor do empréstimo
	- 3 histórico de depreciações:
		- mes 0, depreciação de 10%
		- mes 1, depreciação de 3%
		- mes 3, depreciação de 0.2%
	
	Mes 0:
		- Pagamento total de 0 reais: dívida total de 15_000.0 reais
		- Acréscimo do valor de pagamento no mês no valor do carro
		- Taxa de 10% no valor do carro
		- 13_950.0 reais de valor do carro

	- Mes 1:
		- Pagamento total de 500 reais: dívida total de 14_500.0 reais
		- Taxa de 3% no valor do carro
		- 13_531.50 reais de valor do carro

	- Mes 2:
		- Pagamento total de 1000 reais: dívida total de 14_000.0 reais
		- Taxa de 3% no valor do carro
		- 13_125.555 reais de valor do carro

	- Mes 3:
		- Pagamento total de 1500 reais: dívida total de 13_500.0 reais
		- Taxa de 0.2% no valor do carro
		- 13099.30389 reais de valor do carro

	- Mes 4:
		- Pagamento total de 2000 reais: dívida total de 13_000.0 reais
		- Taxa de 0% no valor do carro
		- 13_073.10528222 reais de valor do carro

	- Resposta: 4 meses para que o valor pago seja maior que o valor atual do carro 
	*/

	int meses, historico;
	ld pagamento, emprestimo;
	
	while(cin >> meses >> pagamento >> emprestimo >> historico) {
		if (meses <= 0) break;
		
		int resposta = 0;
		vector<ld> taxas (meses, -1);

		REP(i, 0, historico-1) {
			int mes;
			ld atual;
			cin >> mes >> atual;
			taxas[mes] = atual;
		}

		REP(i, 1, meses-1) {
			if (taxas[i] == -1)
				taxas[i] = taxas[i-1];
		}

		// Mes 0
		ld depreciacao = (pagamento + emprestimo) - ((pagamento + emprestimo) * taxas[0]);
		pagamento = emprestimo / meses;
	
		// DEBUG(depreciacao);
		// DEBUG(emprestimo);
		while (emprestimo > depreciacao) {
			int indice = min(resposta+1, meses);
			
			// DEBUG(depreciacao);
			// DEBUG(emprestimo);
			// DEBUG(taxas[indice]);

			depreciacao -= (depreciacao * taxas[indice]);
			emprestimo -= pagamento;
			resposta++;
		}

		cout << resposta << (resposta == 1 ? " month\n" : " months\n");
	}

	return 0;
}
