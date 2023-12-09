#include <stdio.h>

int main(){
    int  horas, velMax;
    double litros;
    scanf("%d %d", &horas, &velMax);
    litros = (horas*velMax)/12.0;
    printf("%.3lf\n", litros);

    return 0;
}