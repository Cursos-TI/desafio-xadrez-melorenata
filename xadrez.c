#include <stdio.h>

int main() {
    int mov_torre, mov_bispo, mov_rainha; // def de qtd de movimento das peças
    int i=0, a=0; // contador
    
    // TORRE
    printf("Digite a quantidade de movimento(s) da Torre: \n");
    scanf("%d", &mov_torre);
    
    // condição while que apresenta o movimento
    while(i < mov_torre){
        printf("Direita\n");
        i++;
    }
    
    // BISPO
    printf("Digite a quantidade de movimento(s) do Bispo: \n");
    scanf("%d", &mov_bispo);
    // condição for que apresenta o movimento do bispo 
    for(i=0;i<mov_bispo;i++){
        printf("Cima e direita\n");
    }
    
    // RAINHA
    printf("Digite a quantidade de movimento(s) da Rainha: \n");
    scanf("%d", &mov_rainha);
    // condição do while para movimentar a rainha
    do{
        printf("Esquerda\n");
        a++;
    }while(a<mov_rainha);

    return 0;
}
