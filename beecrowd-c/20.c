#include <stdio.h> 
 
int main() 
{ 
 
    float ingresso, lucro, lucmaximo, valoring, xingresso; 
    int numeroing, numeroingx; 
 
    lucmaximo=0; 
 
 
    for(valoring = 0; valoring < 9; valoring ++){ 
        ingresso= 5-(valoring*0.5); 
        numeroing= 120+(valoring*26); 
        lucro= (valoring*numeroing)-200; 
 
 
     printf("Se o valor do ingresso for: %.2f",ingresso); 
     printf("\nO lucro será de: %.2f", lucro); 
 
     if (lucro>lucmaximo){ 
     lucmaximo=lucro; 
     xingresso=ingresso; 
     numeroingx=numeroing; 
 
     } 
 
    } 
 
     printf("\nCom o ingresso no valor de: %.2f", xingresso); 
     printf("\nvendendo x ingressos: %d",numeroingx ); 
     printf("\nO valor do lucro máximo vai ser de: %.2f ", lucmaximo); 
    return 0; 
} 