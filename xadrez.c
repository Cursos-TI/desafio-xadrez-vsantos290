#include <stdio.h>

int main() {
    int peca; 
    int i = 0;
    int num; // número para usar no laço de repetição for. 

    printf("Desafio do Xadrez");
    
    printf("Escolha qual peça vocês quer movimentar: \n Bispo (1)\n Torre (2) \n Rainha (3)\n"); 
    //levando o usuário a escolher alguma peça.

    scanf("%d", &peca); //Coletando a informação do usuário.  
    if(peca == 1){
        printf("Humm... Você escolheu o Bispo, vamos as movimentações: \n"); 
        while (i < 5)
        {
            printf("Diagonal superior direita\n");
            i++;
        }    
    }else if(peca == 2){
        printf("Humm... Você escolheu a torre, vamos as movimentações: \n");
        for(num = 1; num <= 5; num++) {

            printf("Direita\n");
        }
            
    }else{
        printf("Humm... Você escolheu a rainha, vamos as movimentações: \n");
        do{
            printf("Esquerda\n");
            i++
        }
        while(i<8); 
    }

    return 0;
}
