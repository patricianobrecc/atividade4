#include <stdio.h>
 
int main() {
    float horas, velocidade, litros;
    
    scanf("%f" , &horas);
    scanf("%f" , &velocidade);
    litros = (horas*velocidade)/12;
    printf("%.3f\n", litros);
    
    return 0;
}
