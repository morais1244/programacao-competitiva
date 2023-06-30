#include <stdio.h>

main(){
    double N, d[] = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0, 1.0, 0.5, 0.25, 0.10, 0.05, 0.01};
    int t = 0, c;
    scanf("%lf",&N);
    printf("NOTAS:\n");
    N+=1e-9;
    while(N>=0.01){
        c = 0;
        while(N>=d[t]){
            N-=d[t];
            c++;
        }
        if (d[t]==1.0){
            printf("MOEDAS:\n");
        if (d[t]>=2.0)
            printf("%d notas(s) de %.2lf\n",c, d[t]);
        else
            printf("%d moedas(s) de %.2lf\n",c, d[t]);
        t++;
        
        }
    }
    return 0;
}