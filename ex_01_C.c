#include<stdio.h>
#include<math.h>

int main(){
    int n=0, soma=0, i=0;
    scanf("%d", &n);

    for (i=1; i<=n; i++){
            printf("%d\n", i);
            soma+=i;
    }
    printf("\n%d", soma);
    return 0;
}