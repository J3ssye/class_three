#include<stdio.h>
#include<math.h>

int main(){
    double d=1, X=0, S=0;
    int i=2, j=2;

    scanf("%lf", &X);
        
    do{
        d = d * j;
        
        if((i%2==0)&&(i!=0)){
            S = S + (pow(X, i)/d);
        }else{
            S = S - (pow(X, i)/d);
        }
        j++;
        i++;
        
    }while (i<=19);

    S = (S*1000000);
    if(S==0){
        printf("%.0lf", S);
    }else{
        if(((int)S%10) <= 5) {
            S *= 10;
            
            if(((int)S%10) <= 5){
                printf(" %.5lf\n", S/10000000 ); 
            }else printf(" %.6lf\n", S/10000000 ); 

        }else if(((int)S%10) > 5){
            printf(" %.6lf\n", S/1000000);
        }
    }

    return 0;
}