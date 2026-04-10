#include<stdio.h>
 
int main(){
        // AULA DIA 10/04: Tomada de Decisão
    // int idade = 18;
    // if (idade >= 18) {
    //    printf("Maior de idade\n");
    // } 

    float nota_1;
    float nota_2;
    printf("CALCULADORA DE MEDIA\n");
    printf("Digite a primeira nota do aluno:\n");
    scanf("%f",%nota_1);
    printf("Digite a segunda nota do aluno:"\n);
    scanf("%f",%nota_2);

    float media = (nota_1 + nota_2)/2;
    
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