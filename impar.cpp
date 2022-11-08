#include <stdio.h>
 
int main() {
 
   int p, j1, j2, r, a, soma, G;
   
    
    printf("Jogo IMPAR, PAR OU ROUBO\n\n");
    
    printf("O que você deseja ser?: PAR - 1, Impar - 0\n"); 
    scanf("%d", &p);  //"p", significa a escolha dos jogadores//
    
    printf("Jogador 1 Informe sua escolha:\n");
    scanf("%d", &j1);
    
    printf("Jogador 2 Informe sua escolha:\n");
    scanf("%d", &j2);
    
    printf("Você jogador, roubou?: Sim - 1, Não - 0\n\n");
    scanf("%d", &r);
    
    printf("Jogador Informe se você acusou: Sim - 1, Não - 0\n");
    scanf("%d", &a);
    
    soma = j1 + j2; //soma das escolhas dos jogadores//
    
    if((soma%2==0 && p==1) || (soma%2==1 && p==0)) G = 1; //se o jogador par n acusou entao o jogador 1 ganha//   
    
    else G = 2;  //senao, o jogador 2 ganha//
    
    if((r==1 && a==0) || (r==0 && a==1)) G = 1; //se o jogador roubou e o outro n acusou ent jogador 1 ganha// 
    //ou se o jogador n roubou e o outro acusou gogador 1 ganha//

    else if(r==1 && a==1) G=2; //senao, jogador 2 ganha//
    
    printf("Jogador %d ganha!\n", G);
 
    return 0;
}
