#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main() {
		
		//declaracao de variaveis 
		
    int i;
    char nome[15], nome1[15], nome2[15], nome3[15];
    char  resposta1[43], resposta2[43], resposta3[43];
    float altura, altura1, altura2, altura3;
    
		//inicio do laco de repeticao FOR
		
    for( i= 0; i< 3; i++){

		
        printf("QUAL O SEU NOME?\n"); //pede o nome do usuario
		
        gets(nome);//salva o nome do usuario
		
        fflush(stdin);//limpa restos de dados pegando apenas o dado digitado
		
        printf("QUAL A SUA ALTURA?\n");//pede a altura do usuario
		
        scanf("%f", &altura);//salva a altura do usuario
		
        fflush(stdin);//limpa restos de dados pegando apenas o dado digitado

    //verifica se o laco de repedicao esta em sua PRIMEIRA repeticao
		if(i == 0 ){
		
	 	
					strcpy(nome1, nome);//copia uma string para outra
					altura1 = altura;
			      
			      //verifica as condicoes e seta nas variaveis a 
		 				//resposta referente
            if (altura1 < 1.80) {
                strcpy(resposta1, "sinto muito, Entrada Nao Permitida.");
            } else {
                strcpy(resposta1, "a sua ENTRADA ESTA PERMITIDA, pode passar.");
            }

			}
			
    //verifica se o laco de repedicao esta em sua SEGUNDA repeticao
		if(i == 1 ){

				 strcpy(nome2, nome);//copia uma string para outra
				 altura2 = altura;
				 				 
				    //verifica as condicoes e seta nas variaveis a resposta referente
            if (altura2 < 1.80) {
                strcpy(resposta2, "sinto muito, Entrada Nao Permitida.");
            } else {
                strcpy(resposta2, "a sua ENTRADA ESTA PERMITIDA, pode passar.");
            }


			}
			
    //verifica se o laco de repedicao esta em sua TERCEIRA repeticao
    
		if(i == 2 ){

            strcpy(nome3, nome);//copia uma string para outra
						altura3 = altura;
						//verifica as condicoes e seta nas variaveis a resposta referente
            if (altura3 < 1.80) {
                strcpy(resposta3, "sinto muito, Entrada Nao Permitida.");
            } else {
                strcpy(resposta3, "a sua ENTRADA ESTA PERMITIDA, pode passar.");
            }

			}



    }
		
		// apos o comando FOR terminar os lacos ele mostra quem podera e quem nao podera passar
    printf("\n\n"); // quebra de linha para melhor visualisar
    printf("Ola %s %s\n", nome1, resposta1);
    printf("Ola %s %s\n", nome2, resposta2);
    printf("Ola %s %s\n", nome3, resposta3);


    return 0;
}
