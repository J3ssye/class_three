#include <stdio.h>
#include<math.h>

int main(){
    int Q_inicial=0, DeltaQ=0, Q_M=0;
    double P_inicial=0, D=0, DeltaP=0, P_min=0, L=00, Maior=0, P_M=0;

    scanf("%lf %d %lf %lf %d %lf", &P_inicial, &Q_inicial, &D, &DeltaP, &DeltaQ, &P_min);
    
    printf("Preco   Ingressos Vendidos  Lucro\n");

    do{
        L = (Q_inicial * P_inicial) - D;
        printf("%.2lf         %d         %.2lf\n", P_inicial, Q_inicial, L);
       
        if (L>Maior)
        {
            Maior = L;   
            P_M = P_inicial;
            Q_M = Q_inicial;
        }
        
        P_inicial-=DeltaP;
        Q_inicial+=DeltaQ;    
    
    }while (P_inicial>=P_min);
    
    printf("Lucro maximo: %.2lf\n", Maior);
    printf("Na faixa de preco: %.2lf com %d ingressos.\n", P_M, Q_M);

    
    return 0;
}