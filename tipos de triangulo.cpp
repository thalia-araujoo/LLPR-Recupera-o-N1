#include <stdio.h>
 
int main() {
    int temp; //variavel temporaria//
    int A, B, C;
    
    scanf("%d %d %d", &A, &B, &C);
    
    //vou garantir que será o maior lado, comparando cm B//
    //segue a mesma logica para com as outras//
    
    if(A<B){
        
       temp=A;
       A=B;
       B=temp;
    }
     if(A<C){
        
       temp=A;
       A=C;
       C=temp;
    }
     if(B<C){
        
       temp=B;
       B=C;
       C=temp;
    }
    
    if(A>=B+C) {
        
        printf("NAO FORMA TRIANGULO\n");
        
    } else {
    	if(A*A == B*B+C*C) {
        
        printf("TRIANGULO RETANGULO\n");
        
    }  //usei o else para caso não da um trianglo ele continue testando//
    
      if(A*A>B*B+C*C) {
        
        printf("TRIANGULO OBTUSANGULO\n");
        
    }
    
    if(A*A<B*B+C*C) {
        
        printf("TRIANGULO ACUTANGULO\n");
        
    }
    
    if(A==B && A==C && C==B) {
    	
        printf("TRIANGULO EQUILATERO\n");
        
    } else {
        
    if(A==B || A==C || B==C) {
    	printf("TRIANGULO ISOSCELES\n");
    	
	}
    	
        
        }
	}
    
      
    return 0;
}
