#include <stdio.h>

int main() {
    
    int P1, Cod1, P2, Cod2; 
 
    double vP1, vP2, total;
    
    printf("Calculo Simples\n");
    
    printf("Digite o primeiro valor:\n");
    scanf("%d", &P1);
    
    printf("Digite o segundo valor:\n");
    scanf("%d", &Cod1);
     
    printf("Digite o terceiro valor:\n");
    scanf("%lf", &vP1);
    
    printf("Digite o primeiro valor:\n");
    scanf("%d", &P2);
    
    printf("Digite o segundo valor:\n");
    scanf("%d", &P2);
    
    printf("Digite o terceiro valor:\n");
    scanf("%d", &P2);
      
    total = (P1*vP1 + P2*vP2);

    
    printf("VALOR A PAGAR: R$ %2.lf\n", total); 
    
    
    return 0;
    
}
//Eu confundi, não era esse cod, e não sei apagar daqui.//
