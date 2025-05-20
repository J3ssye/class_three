#include<stdio.h>
#include<math.h>

int main(){
    double X=0, cosx=0;
    long long int j=0, i=0, F=1;

    scanf("%lf", &X);
        
    do{
        for (j=0; j<=i; j++){
            F = j * F;
        if (F==0)
        F=1;
        }
        

        if(i==0){
            cosx = 1;
        }else if(i%4==0){
            cosx= cosx + (pow(X, i)/F);
        }else{
            cosx = cosx - (pow(X, i)/F);
        }
        
        i+=2;
        
    }while (i<=20);

    double sub = (cosx - cos(X));
    
    printf("%.4lf %.4lf %.4lf", cosx, cos(X), sub);  
    
    return 0;
}