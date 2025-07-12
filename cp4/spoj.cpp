#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define DEBUG(x) cout << #x << ": '" << x << "'\n"
#define REP(i, a, b) for (int i = int(a); i <= int(b); i++)

#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pii;

const int POS_INF = 1e9;
const int NEG_INF = 1e-9;
const int MOD = 1e9 + 7;

vector<int> query(int a, int b, vvi graph);
void deep_search(int src, int dst, vi consulta, vi visitados, vvi graph);
void debug(vvi graph);
void debug(vi vector, string nome);

int main()
{
	FASTIO;

	int LINHAS, CONSULTAS;
	cin >> LINHAS >> CONSULTAS;

	vector<vector<int>> graph;

	REP(i, 0, LINHAS)
	graph.push_back(vector<int>());
	// debug(graph);

	REP(i, 1, LINHAS)
	{
		int origem, destino;
		cin >> origem >> destino;
		origem--;
		destino--;

		graph[origem].push_back(destino);
		graph[destino].push_back(origem);
	}

	debug(graph);

	REP(i, 0, CONSULTAS)
	{
		int a, b, c, d;

		cin >> a >> b >> c >> d;

		vi consultaAB = query(a, b, graph);
		vi consultaCD = query(c, d, graph);

		debug(consultaAB, "Consulta AB");
		debug(consultaCD, "Consulta CD");
	}

	return 0;
}

vi query(int a, int b, vvi graph)
{
	vi consulta;
	vi visitados(graph.size(), -1);

	REP(i, 0, graph[a].size()-1) {
		visitados[graph[a][i]] = 1;
		deep_search(a, b, consulta, visitados, graph);
		visitados[graph[a][i]] = -1;
	}

	return consulta;
}

void deep_search(int src, int dst, vi consulta, vi visitados, vvi graph)
{
	if (src == dst)
	{
		return;
	}

	if (visitados[src] == -1)
	{
		visitados[src] = 1;
	}
}

void debug(vi vector, string nome)
{
	cout << nome << ": ";
	REP(i, 0, vector.size() - 1)
	{
		cout << vector[i] << ", ";
	}
	cout << "\n";
}

void debug(vvi graph)
{
	REP(i, 0, graph.size() - 1)
	{
		cout << i << ") ";

		REP(j, 0, graph[i].size() - 1)
		{
			cout << graph[i][j] << " -> ";
		}
		cout << "NULL (" << graph[i].size() << ")\n";
	}
}