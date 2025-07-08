#include<stdio.h>

int main(){
    int Qalunos=0, i=1, contA=0,  contR=0, contE=0;
    double n1 = 0, n2 = 0, media=0;

    scanf("%d", &Qalunos);
        
    for(i = 1; i <= Qalunos; i++){
        scanf("%lf", &n1);
        scanf("%lf", &n2);

        media = (n1 + n2) / 2;
        
        if (media <= 3)
        {
            printf("Aluno %d: Reprovado \n", i);
            contR++;

        } 
        if ((media>3)&&(media<7)){
            printf("Aluno %d: Exame \n", i);
            contE++;

        }
        if (media>=7){
            printf("Aluno %d: Aprovado \n", i);
            contA++;
        }
    }

    printf("Total Aprovados: %d \n"
            "Total Exame: %d \n"
            "Total Reprovados: %d \n", contA, contE, contR);
    
    return 0;

}
