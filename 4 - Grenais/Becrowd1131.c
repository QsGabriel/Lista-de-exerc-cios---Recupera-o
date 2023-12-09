#include <stdio.h>

int main(){
    int Inter,Gremio,VitInter,VitGremio,Empates,NumJogos,Op;
    Inter=Gremio=VitInter=VitGremio=Empates=NumJogos=Op=0;

    while(1)
    {
        scanf ("%d %d", &Inter, &Gremio);
        if(Inter>Gremio) VitInter++;
        if(Inter<Gremio) VitGremio++;
        if(Inter==Gremio) Empates++;
        NumJogos++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &Op);

        if(Op==1){
            continue;
        }
         if(Op==2){
             break;
        }   
        
        }
        printf("%d grenais\n", NumJogos);
        printf("Inter:%d\n", VitInter);
        printf("Gremio:%d\n", VitGremio);
        printf("Empates:%d\n", Empates);
        if(VitInter>VitGremio){
            printf("Inter venceu mais\n");
        }
        if(VitInter<VitGremio){
            printf("Gremio venceu mais\n");
        }
        if(VitInter==VitGremio){
            printf("Nao houve vencedor\n");
        }
        return 0;
}