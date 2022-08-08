#include <stdio.h>

void operacao(long int i)
{
    int boleano=0;
    for (int qtd=2;qtd<10;qtd++){
        if (i!=qtd){
            if (i%qtd == 0) { boleano++; }
        }
    }

    if (boleano == 0){ printf("%ld é um numero primo\n", i); }

}

int main( void )
{
    long int numero = 1000;
    for (int i=1; i<=numero;i++){ operacao(i); }
}
