#include <stdio.h>
 
int main() {
	
    int A, B, C;
    int X, Y, Z;  //variavis que vão receber os valores das primeiras variaveis e ordena-las //
    int temp;     //aqui o temp vai trocar o valor de X pelo valor de Y//
    
    printf("sort simples\n");
    
    scanf("%d %d %d", &A, &B, &C);
    
    //pego esses três valores e atribuo á essas outras variaveis//
   // tipo a variavel X recebe a variavel A, para odena-las//
   
    X=A;
    Y=B;
    Z=C;
    
    // vai comparar e colocar o X como menor valor//
    //segue a mesma logica para as outras//
    
    if(X>Y) {
        temp=X;
        X=Y;
        Y=temp;  //aqui o temp vai trocar o valor de X pelo valor de Y//
    }
    
    if(X>Z) {
        temp=X;
        X=Z;
        Z=temp;
    }
    
    if(Y>Z) {
        temp=Y;
        Y=Z;
        Z=temp;
    }
    
    //imprimo tanto as primeiras variaveis quanto as segundas//
    
    printf("%d\n%d\n%d\n\n", X, Y, Z);
    
     printf("%d\n%d\n%d\n", A, B, C);
 
    
 
    return 0;
}
