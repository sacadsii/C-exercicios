#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    if (argc != 2) {printf("escreva o numero a ser testado como parametro, só um por vez\n");return 1;}
    unsigned int n_const = atoi(argv[1]);

    int contaBaseDez(unsigned int n_teste)
    {
        int i;
        for (i=1; n_teste != 0; i++){
            n_teste = n_teste/10;
            if (n_teste == 0){return i;}
        }
    }

    int separaOsNumeros(unsigned int n_teste, int quantidade, int n_separados[quantidade])
    {
        int *vetor=n_separados;

        int local=quantidade;
        for (int i=0; i<quantidade; i++){
            int qtd;

            for (qtd=0; contaBaseDez(n_teste)==local; qtd++){
                int potencia = pow(10, local-1);
                n_teste = n_teste-potencia;
            }

            local--;
            vetor[i] = qtd;
        }
    }

    int quantidade=contaBaseDez(n_const);
    int n_separados[quantidade];
    separaOsNumeros(n_const, quantidade, n_separados);

    double soma, soma_total;
    for (int i=0; i<quantidade; i++){
        soma=(int)pow(n_separados[i], quantidade);
        soma_total=soma_total+soma;

    }
    printf("%d\n",(int)(soma_total));

    if (soma_total == n_const){
        printf("o numero é amstron\n");
    }
    else {
        printf("o numero não é amstron\n");
    }
}
