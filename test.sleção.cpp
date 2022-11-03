#include <stdio.h>
 
int main() {
    
   int A, B, C, D;
    printf("Teste de seleção\n");
    
    printf("digite o primeiro valor:\n");
    scanf("%d", &A);
    
    printf("digite o segundo valor:\n");
    scanf("%d", &B);
    
    printf("digite o terceiro valor:\n");
    scanf("%d", &C);
    
    printf("digite o quarrto valor:\n");
    scanf("%d", &D);
    
   
   if((B > C) && (D > A) && ((C + D) > (A + B)) && (C > 0) && (D >0) && (A % 2 ==0)) {
   	
       printf("Valores aceitos\n");
       
   }  else {
   	
       printf("Valores nao aceitos\n");
       
   }
 
    
    return 0;
}
