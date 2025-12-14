n = int(input())

tabela = {}
pontos = 0

for i in range(0, n):
	linha = input().split(" ")
	tabela[linha[0]] = int(linha[1])

linha = input().split(" ")

for palavra in linha:
	if (tabela.get(palavra)): # 'uai' é uma chave?
		pontos += tabela[palavra] # 'uai' -> 20

print(pontos)
