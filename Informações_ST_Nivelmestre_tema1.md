# Informações importantes sobre o código:
# 1 - Entrada de dados para informar PIB :
Optei por usar o tipo long long int, justamente para que o valor do PIB seja digitado integralmente pelo usuário no intuito de que os resultados de todos os cálculos necessários sejam bem precisos, evitando erros no momento
de comparar corretamente a carta vencedora em determinado atributo.

Outro motivo é porque o PIB pode ser representado por um inteiro, pois dificilmente esse atributo é dado em valores float.Ex: PIB da cidade de Ribeirão preto = 90.900 bilhões ou 90900000000 em long long int.

# 2 - variavel superpoder:
Usei tambem long long int, na fase de testes do código, somei todos os atributos manualmente para validar
se de fato a variavel superpoder está calculando e exbindo corretamente a soma de todos os atributos de cada carta, e o resultado foi preciso!

# 3 - Acréscimo de um atributo 'Densidade demográfica Inversa';
Esse atributo calcula a quantidade de área disponível por habitante, isso significa que vence a carta que contém o MAIOR valor, pois esse atributo revela maior espaço para cada pessoa dentro das dimensões territoriais e total populacional da cidade.
