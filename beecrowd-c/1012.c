    #include <stdio.h>
    
    int main() {
        double a, b, c, t,circ,tr,q,r;
        scanf("%lf %lf %lf",&a,&b,&c);
        t = c*(a/2);
        circ = 3.14159*c*c;
        tr = c *(a+b)/2;
        q = b*b;
        r = a*b;
        printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",t,circ,tr,q,r);
        return 0;
    }