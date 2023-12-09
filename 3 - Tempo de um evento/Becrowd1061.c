#include <stdio.h>

int main(){
int dia, diafim, hora, horafim, minuto, minutofim, segundo, segundofim;

scanf("Dia %d", &dia);
scanf("%d : %d : %d\n", &hora, &minuto, &segundo);
scanf("Dia %d", &diafim);
scanf("%d : %d : %d\n", &horafim, &minutofim, &segundofim);

segundo = segundofim - segundo;
minuto = minutofim - minuto;
hora = horafim - hora;
dia = diafim - dia;

if (segundo < 0){
segundo+= 60;
minuto--;
}

if (minuto< 0){
minuto += 60;
hora--;
}

if (hora < 0){
hora += 24;
dia--;
}

printf("%d dia(s)\n", dia);
printf("%d hora(s)\n", hora);
printf("%d minuto(s)\n", minuto);
printf("%d segundo(s)\n", segundo);
} 