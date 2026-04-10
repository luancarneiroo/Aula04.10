#include<stdio.h>
 
int main(){
        // AULA DIA 10/04: Tomada de Decisão
    // int idade = 18;
    // if (idade >= 18) {
    //    printf("Maior de idade\n");
    // } 
    float media = 8;
    if (media >= 6){
        printf("APROVADO");
    } else if (media >= 4 && media > 6) {
        printf("RECUPERAÇÃO");
    } else{
        printf("REPROVADO");
    }


    return 0;
}