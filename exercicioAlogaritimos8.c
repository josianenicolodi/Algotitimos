/*
8. Proponha um algoritmo para a situa��o a seguir.
Ler o c�digo do produto e a
quantidade vendida.

O programa dever� calcular e exibir o pre�o final da compra,
considerando as tabelas abaixo.

A primeira tabela mostra o pre�o do produto
conforme o c�digo e a segunda mostra o desconto que dever� ser dado, conforme o
valor total.


C�digo Produto Pre�o
10 R$ 100.00
20 R$ 150.00
30 R$ 200.00


Pre�o Total Desconto
R$ 200 a R$ 1000 5%
MAIS DE R$ 1000 10%

No final dever� ser exibido o valor do desconto dado e o pre�o final da compra. */

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
		valor =(100*quantidade); // atribui�a� de valor

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
