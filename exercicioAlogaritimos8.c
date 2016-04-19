/*
8. Proponha um algoritmo para a situação a seguir.
Ler o código do produto e a
quantidade vendida.

O programa deverá calcular e exibir o preço final da compra,
considerando as tabelas abaixo.

A primeira tabela mostra o preço do produto
conforme o código e a segunda mostra o desconto que deverá ser dado, conforme o
valor total.


Código Produto Preço
10 R$ 100.00
20 R$ 150.00
30 R$ 200.00


Preço Total Desconto
R$ 200 a R$ 1000 5%
MAIS DE R$ 1000 10%

No final deverá ser exibido o valor do desconto dado e o preço final da compra. */

#include <stdio.h>
#include <stdlib.h>

main ()	{

	int codigo, quantidade;
	float valor, desconto, total;


//ler codigo e quantidade
	printf ("Digite o codigo:\n");
	scanf("%d",&codigo);
	printf ("Digite a quantidade:\n");
	scanf("%d",&quantidade);

//buscar valor total quantidade*valor
    if (codigo==10) {
		valor =(100*quantidade); // atribuiçaõ de valor

    }

	if (codigo==20) {
		valor = (150*quantidade);

	}

	if (codigo==30) {
		valor = (200*quantidade);
	}

// calcular desconto  Y*X/100 valor do desconto (produto*porcentagem/100)-produto
	if (valor >200 && valor <1000) {
		desconto = (valor*5/100);

	} else if  (valor >1000) {
		desconto = (valor*10/100);

	}

	printf ("Desconto de: %f\n",desconto);
	printf ("Valor com desconto:%f\n",valor-desconto);


}
