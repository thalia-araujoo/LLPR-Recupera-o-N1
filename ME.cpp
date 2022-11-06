 #include <stdio.h>

 int main(){
 	
 	float n1,n2,n3,n4, exame, media;

    printf("Entre com a primeira nota:\n");
    scanf("%f",&n1);

    printf("Entre com a segunda nota:\n");
    scanf("%f",&n2);

    printf("Entre com a terceira nota:\n");
    scanf("%f",&n3);

    printf("Entre com a quarta nota:\n");
    scanf("%f",&n4);

    media = (n1*2 + n2*3 + n3*4 + n4*1)/10;

    printf("Media : %.1f\n",media);

    if(media >= 7){
        printf("Aluno aprovado.\n");
    }
    if(media <5) {
    	printf("Aluno reprovado.\n");
	}
	if("media >=5 && media <7") {
		
	printf("Aluno em exame.\n");
	printf("Nota do exame: %.1f\n", exame);
	
	}
	if((media + exame)/2 >=5) {
		printf("Aluno aprovado.\n");
	} else {
		printf("Aluno reprovado.\n");
		printf("Media final: %.1f\n",media + exame/2);
	}
	
 	return 0;
 }

    
