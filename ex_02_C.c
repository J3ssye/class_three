#include<stdio.h>
#include<math.h>

int main(){
    int r=0, soma=0, i=0, l=0, cont=0;
    scanf("%d %d", &l, &r);
    if (l==r) 
        printf("\n0\n0");
    else{
        for (i=l; i <= r; i++){
            if(i%2==0){
                soma+=i;
                cont++;
            }
        }
        printf("\n %d \n %d", soma,soma/cont );
    }
    

    return 0;
}
