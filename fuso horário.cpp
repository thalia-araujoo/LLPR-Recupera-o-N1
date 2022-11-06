#include <stdio.h>
 
int main() {
 
   int S, T, F, res;
   
   printf("Fuso Horário\n");
   
   printf("Informe a sua hora de saida:\n");
   scanf("%d", &S);
   
   printf("Informe a hora de duração da viagem:\n");
   scanf("%d", &T);
   
   printf("Informe a diferença do fuso horário:\n");
   scanf("%d", &F);
   
   res=S+T+F;
   
   if(res>=24){
       res-=24;
   }
   if(res<0){
       res+=24;
   }
   
   printf("%d\n", res);
   
    printf("Boa Viajem!!");
   
   
 
    return 0;
}
