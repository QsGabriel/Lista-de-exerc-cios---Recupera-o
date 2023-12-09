#include <stdio.h>

int main(void) {
    unsigned short quantidade, casos, opcao;
    float total = 0;

    scanf("%hu", &casos);

    while (casos) {
        scanf("%hu %hu", &opcao, &quantidade);

        if (opcao == 1001)
            total += 1.50 * quantidade;
        if (opcao == 1002)
            total += 2.50 * quantidade;
        if (opcao == 1003)
            total += 3.50 * quantidade;
        if (opcao == 1004)
            total += 4.50 * quantidade;
        if (opcao == 1005)
            total += 5.50 * quantidade;

        casos--;
    }

    printf("%.2f\n", total);

    return 0;
}
