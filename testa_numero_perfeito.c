#include <stdio.h>


void perfeito(int numero)
{
    int divisores[100], soma=0, marcador=0;

    for (int i=1; i<numero; i++){
        if (numero%i == 0){
            soma+=i;
            marcador++;
            divisores[marcador]=i;
        }
    }

    if (soma == numero){
        printf("%d é um numero perfeito pois a soma de seus divisores é ele proprio, os divisores de %d são: ", numero, numero);
        for (int qtd=1; qtd<=marcador;qtd++){
            printf("%d ", divisores[qtd]);
        }

        printf("\n");
    }

  // descomente a linha abaixo para printar os numeros que não são perfeitos, aviso que a lista vai ficar imensa
  // else { printf("%d não é um numero perfeito", numero); }
}

int main(void)
{
    int numeros=10000;
    for (int numero=1;numero<=numeros;numero++){
        perfeito(numero);
    }

}
