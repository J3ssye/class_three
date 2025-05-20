#include<stdio.h>
#include<math.h>


int main(){
    double x=0, count=0;
    int i;
    scanf("%lf", &x);

    double sini;
    int steps = (int)round(10*x);
    i=0;
    for ( i = 0; i <= steps; i++)
    {
        count = i*0.1;
        sini = count - (pow(count, 3)/6);
        sini+= (pow(count, 5)/(5*4*3*2));
        sini-= (pow(count, 7)/(7*6*5*4*3*2));
        printf("%.1lf %.4lf\n", count, sini);
        //count+=0.1;
    }
    
    return 0;
}

/*
if (x==0.3){
    for(i=-1; i<=(10*x); i++){
    printf("%.1lf %.4lf\n", j, sini);
    j+=0.1;
}   
} else {
for(i=0; i<=(10*x); i++){
    if(j==0){
        printf("%.1lf %.4lf\n", j, sini);
    }
    j+=0.1;
    if(j<=x){            printf("%.1lf %.4lf\n", j, sini);
    }else break;
}   
}*/