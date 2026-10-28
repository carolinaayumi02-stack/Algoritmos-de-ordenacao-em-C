#include <stdio.h>
int main(){
    int valor, saldo = 1000;
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0;
    int escolha;

    printf("seu saldo atual é de %d\n", saldo);
    printf("--------------------------------------\n");
    printf("digite o valor que deseja sacar: ");
    scanf("%d", &valor);

    if (valor > saldo) {
        printf("Saldo insuficiente.\n");
    } else if (valor % 5 != 0) {
        printf("valor deve ser multiplo de 5!\n");
    } else {
        saldo = saldo - valor;
        n100 = valor / 100;
        valor = valor % 100;

        n50 = valor / 50;
        valor = valor % 50;

        n20 = valor / 20;
        valor = valor % 20;

        n10 = valor / 10;
        valor = valor % 10;

        }
        printf("-----------------------------------\n");
        printf("seu novo saldo é %d\n", saldo);
        printf("Saques bem sucedido! as seguintes notas foram sacadas:\n");
        if (n100 > 0) {
            printf("%d nota(s) de 100\n", n100);
        }
        if (n50 > 0) {
            printf("%d nota(s) de 50\n", n50);
        }
        if (n20 > 0) {
            printf("%d nota(s) de 20\n", n20);
        }
        if (n10 > 0) {
            printf("%d nota(s) de 10\n", n10);
        }
        printf("--------------------------------------\n");

    return 0;
}