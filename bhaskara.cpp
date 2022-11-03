#include <stdio.h>
#include <math.h> 
int main() {
     double A, B, C;
    
    printf("Fórmula de Bhaskara\n");
    
    printf("Informe o primeiro digito:\n");
    scanf("%lf", &A);
    
    printf("Informe o segundo digito:\n");
    scanf("%lf", &B);
    
    printf("Informe o terceiro digito:\n");
    scanf("%lf", &C);
   
   if((B * B - 4*A*C ) < 0 || (A==0)){
       
       printf("Impossivel calcular\n");
   } else
   
   {
       printf("R1 = %.5f\n", (-B + sqrt(B * B - 4 * A * C)) / (2 * A));
        printf("R2 = %.5f\n", (-B - sqrt(B * B - 4 * A * C)) / (2 * A));
   }
  
 
    return 0;
}
