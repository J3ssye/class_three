#include<stdio.h>
#include<math.h>

int main(){
    int b=0, soma=0, i=0, e=0, cont=0;
    scanf("%d %d", &b, &e);
    int pot = b;
    if (0==e) {printf("\n1");}else{
        for (i=1; i < e; i++){
            pot *=b;
        }
        printf("\n%d", pot );

    }

    return 0;
}