//. Faça um programa que receba três números, e mostre o maior e o menor. Caso tenha números iguais, informe qual e quantas vezes ele ocorre.


 #include <stdio.h>

main ()
{
    int n1,n2,n3,maior,menor;

    printf("Digite um numero:\n");
    scanf("%d",&n1);
    printf("Digite outro numero:\n");
    scanf("%d",&n2);
    printf("Digite outro numero:\n");
    scanf("%d",&n3);

    if(n1>n2) {
        maior = n1;
        menor = n2;
    } else {
        maior = n2;
        menor = n1;
            }
      if (maior < n3){
            maior = n3;
        }

      if( menor>n3 ){
        menor=n3;
      }

    printf (" Maior é %d:\n",maior);
    printf ("Menor é %d\n",menor);
}
