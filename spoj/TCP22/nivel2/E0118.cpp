#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

char str[10010], crib[10010];
int qtd;

int main()
{
	fastio;
	scanf("%s", &str);
	scanf("%s", &crib);

	for (int i = 0; i <= (strlen(str) - strlen(crib)); i++)
	{
		bool flag = true;

		for (int j = 0; j < strlen(crib) && flag; j++)
		{
			if (str[j + i] == crib[j])
				flag = false;
		}

		qtd += (flag ? 1 : 0);
	}

	printf("%d\n", qtd);
	return 0;
}
