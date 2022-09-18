


#include <stdio.h>
#include <stdlib.h>

int numero(char *numero_input)
{
    int numero_inteiro=atoi(numero_input);
    int numero_dividido=numero_inteiro;

    for (int potencia=1; numero_dividido % 2 == 0; numero_dividido=numero_dividido/2){
        if (numero_dividido == 2){
            printf("%d true na %d\n", numero_inteiro, potencia);
            return 0;
        }
        potencia++;

    }
    printf("%d false\n", numero_inteiro);

}

int main(void)
{
    int ch, linhaBoleano=0, i=0;
    char guardaLinha[10];
    FILE *arquivo;
    arquivo = fopen("lista.txt", "r");

    do{
       ch = getc(arquivo);

       if (ch!='\n'){
           guardaLinha[i]=ch;
           i++;
       } else {
           guardaLinha[i++]='\0';
           numero(guardaLinha);
           i=0;
       }

} while(ch!=EOF);

    return 0;
}
