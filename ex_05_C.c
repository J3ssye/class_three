#include<stdio.h>
#include<math.h>

int main(){
    int num=0, i=0, cont=0;

        scanf("%d", &num);

        for (i=1; i < 100000; i++){
            
            if(num == (i*(i+1)*(i+2))){
                printf("%d eh triangular\n", num );
                cont++;
            }
        }
        if(cont == 0){
            printf("%d nao eh triangular\n", num );
        }

    return 0;
}