#include <stdio.h>

//função mover torre
void moverTorre(int casas){ // mover 5 casas para direita
    if(casas > 0){
        printf("Movimento para a direita\n");
        moverTorre(casas - 1);
    }
}

//função mover bispo
void moverBispo(int casas){ // mover 5 casas diagonal direita pra cima
    if(casas > 0){
        printf("movimento na diagonal direita e cima\n");
        moverBispo(casas - 1);
    }
}

//função mover rainha
void moverRainha(int casas){ // mover 8 casas para esquerda
    if(casas > 0){
        printf("Movimento para a esquerda\n");
        moverRainha(casas - 1);
    }
}

//função mover cavalo
void moverCavalo(int valor){ // mover uma vez pra cima e direita
    if(valor == 1){
    for(int i =0;i<2;i++){
        printf("Movimento para cima\n");
    }
    printf("Movimento para direita");
    }if(valor == 2){
        for(int i = 0;i<2;i++){
            printf("Cima\n");
        }
        printf("Esquerda\n");
        }if(valor == 3){
        for(int i = 0;i<2;i++){
            printf("Baixo\n");
        }
        printf("Direita\n");
        }if(valor == 4){
        for(int i = 0;i<2;i++){
            printf("Baixo\n");
        }
        printf("Esquerda\n");
        }
}

int main() {
    int num;
    
    // movimento da Torre chamada por função
    printf("Digite a quantidade de casas para a Torre se mover.\n");
    scanf("%d", &num);
    moverTorre(num);
    
    printf("\n\n");
    // movimento do Bispo chamada por função
    printf("Digite a quantidade de casas para o Bispo se mover.\n");
    scanf("%d", &num);
    moverBispo(num);
    
    printf("\n\n");
    // movimento da Rainha chamada por função
    printf("Digite a quantidade de casas para o Bispo se mover.\n");
    scanf("%d", &num);
    moverRainha(num);
    
    // CAVALO
    printf("\n\n");
    printf("Movimento do Cavalo\n");
    //opções para escolha
    printf("Digite 1 para movimento para cima e direita \n"); 
    printf("Digite 2 para movimento para cima e esquerda \n");
    printf("Digite 3 para movimento para baixo e direita \n");
    printf("Digite 4 para movimento para baixo e esquerda \n");
    int escolha;
    scanf("%d", &escolha);
    moverCavalo(escolha);
    
    return 0;
}
