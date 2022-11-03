#include <stdio.h>
#include <math.h>

int main() {
	
    int Hi, Hf;
    
    printf("Tempo de jogo\n");
    
    printf("Informe à hora inicial:\n");
    scanf("%d", &Hi);
    
    printf("Informe à hora final:\n");
    scanf("%d", &Hf);
    
    if(Hf>Hi) {
    	
    printf("O JOGO DUROU %d HORA(S)\n", Hf-Hi);
    
} else

{

    printf("O JOGO DUROU %d HORA(S)\n", 24-Hi+Hf);
}
 
    return 0;
}
