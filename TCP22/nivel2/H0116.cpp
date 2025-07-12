#include <bits/stdc++.h>

using namespace std;

string riso, vogais;
char res = 'S';

int main()
{
	cin >> riso;
	for (int i = 0; i < riso.size(); i++)
	{
		if (
				riso.at(i) == 'a' ||
				riso.at(i) == 'e' ||
				riso.at(i) == 'i' ||
				riso.at(i) == 'o' ||
				riso.at(i) == 'u')
		{
			vogais.push_back(riso.at(i));
		}
	}

	for (int i = 0; i <= (vogais.size()) / 2; i++)
	{
		if (vogais.at(i) != vogais.at(vogais.size() - (i + 1)))
		{
			res = 'N';
			break;
		}
	}

	printf("%c\n", res);
	return 0;
}
