/*
9. Construa um algoritmo que calcule o IMC - Índice de Massa Corporal = peso em
quilos / (altura2) - do usuário, a partir da leitura do seu peso em quilos e de sua altura
em metros. Conforme o resultado do cálculo, a aplicação deve exibir o IMC e o estado
da pessoa conforme a tabela a seguir.
Valores de IMC
Menor que 18,5 Abaixo do peso.
Entre 18,5 e 24,9 Normal.
Entre 25 e 29,9 Acima do Peso.
30 ou mais. Obeso.
algoritmo "IMC"
*/

#include <stdio.h>
#include <stdlib.h>





main (){

float peso,altura,imc;



    printf("Digite peso:\n");
    scanf("%f",&peso);
	printf("Digite altura:\n");
	scanf("%f",&altura);

	imc = peso/(altura*altura);

	if (imc < 18.5) {
		printf ("%f",imc);
        printf("Abaixo do peso");
    }else {
        if (imc >= 18.5 && imc <24.9) {
            printf ("%f",imc);
			printf("Normal");

		}else {
			if (imc >= 25 && imc < 29.9) {
				printf("%f",imc);
				printf("Acima do peso");

			}else {
					printf("%f",imc);
					printf("Obeso");
			}
        }
    }
}

