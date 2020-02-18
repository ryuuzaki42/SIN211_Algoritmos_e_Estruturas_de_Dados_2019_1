#include <stdio.h>

#define TAM 10

typedef struct sDados{
    char nome[100];
    char email[100];
    int curso;
}Dados;

typedef struct sLista{
    Dados dados[TAM];
    int n;
}Lista;

int main (){
    int num = 9;
    int vet[TAM];
    int* p = vet;

    for(int i=0; i<TAM; i++){
        vet[i]=i*2;
    }

    *(p + 0) = 4321;
    *(vet + 5) = 1234;

    printf("\nValor de num: %d", num);

    for(int i=0; i<TAM; i++){
        printf("\nvet[%d]: %d", i, vet[i]);
    }
    printf("\nTAM valor: %d", TAM);

    return 0;
}
