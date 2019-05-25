#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int i;
    char nome[15], nome1[15], nome2[15], nome3[15];
    char  resposta1[43], resposta2[43], resposta3[43];
    float altura, altura1, altura2, altura3;

    for( i= 0; i< 3; i++){

        printf("QUAL O SEU NOME?\n");
        gets(nome);
        fflush(stdin);

        printf("QUAL A SUA ALTURA?\n");
        scanf("%f", &altura);

        fflush(stdin);


		if(i == 0 ){

			strcpy(nome1, nome);
			altura1 = altura;

            if (altura1 < 1.80) {
                strcpy(resposta1, "sinto muito, Entrada Nao Permitida.");
            } else {
                strcpy(resposta1, "a sua ENTRADA ESTA PERMITIDA, pode passar.");
            }

			}

		if(i == 1 ){

            strcpy(nome2, nome);
			altura2 = altura;

            if (altura2 < 1.80) {
                strcpy(resposta2, "sinto muito, Entrada Nao Permitida.");
            } else {
                strcpy(resposta2, "a sua ENTRADA ESTA PERMITIDA, pode passar.");
            }


			}
		if(i == 2 ){

            strcpy(nome3, nome);
			altura3 = altura;

            if (altura3 < 1.80) {
                strcpy(resposta3, "sinto muito, Entrada Nao Permitida.");
            } else {
                strcpy(resposta3, "a sua ENTRADA ESTA PERMITIDA, pode passar.");
            }

			}



    }

    printf("\n\nOla %s %s\n", nome1, resposta1);
    printf("Ola %s %s\n", nome2, resposta2);
    printf("Ola %s %s\n", nome3, resposta3);


    return 0;
}