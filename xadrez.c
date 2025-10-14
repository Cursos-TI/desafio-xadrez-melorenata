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
    
    
    // CAVALO
    printf("\n\n");
    //opções para escolha
    printf("Digite 1 para movimento para cima e direita \n"); 
    printf("Digite 2 para movimento para cima e esquerda \n");
    printf("Digite 3 para movimento para baixo e direita \n");
    printf("Digite 4 para movimento para baixo e esquerda \n");
    int valor;
    scanf("%d", &valor);
    
    int mov_cavalo = 1; // controle de movimento
    //condição para movimentos
    while(mov_cavalo--){
        if(valor == 1){
        for(int i = 0;i<2;i++){
            printf("Cima\n");
        }
        printf("Direita\n");
        }
        if(valor == 2){
        for(int i = 0;i<2;i++){
            printf("Cima\n");
        }
        printf("Esquerda\n");
        }
        if(valor == 3){
        for(int i = 0;i<2;i++){
            printf("Baixo\n");
        }
        printf("Direita\n");
        if(valor == 4){
        for(int i = 0;i<2;i++){
            printf("Baixo\n");
        }
        printf("Esquerda\n");
        }
        }
    }
    
    return 0;
}
