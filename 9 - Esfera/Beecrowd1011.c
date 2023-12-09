#include <stdio.h>
#include <math.h>

double calculaVolumeEsfera(double raio){
    return 4.0 / 3.0 * 3.14159 * raio * raio * raio;
}

void imprimeVolume(double volume){
    printf("VOLUME = %.3lf\n", volume);
}

int main(){
    double raio;
    scanf("%lf", &raio);

    double volume = calculaVolumeEsfera(raio);
    imprimeVolume(volume);

    return 0;
}
