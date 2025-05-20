#include<stdio.h>
#include<math.h>

int main(){
    int num=0, i=0, cont=0;

    scanf("%d", &num);

    while (num > 0){
        
        for (i=1; i < 100000; i++){
            if(num == i*i){
                printf("%d eh quadrado perfeito\n", num );
                cont=1;
            }
        }

        if(cont == 0){
            printf("%d nao eh quadrado perfeito\n", num );
        }
        
        scanf("%d", &num);
        cont=0;
    } 

    return 0;
}