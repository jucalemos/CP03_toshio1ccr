#include <stdio.h>
#include <stdlib.h>

void exibirMenu();
void consultarSaldo(float saldo);
float realizarDeposito(float saldo);
float realizarSaque(float saldo);

int main() {
    int opcao;
    float saldo = 1000.00;
    do {

        system("cls");
        exibirMenu();
        scanf("%d", &opcao);
        switch(opcao) {

            case 1:
                consultarSaldo(saldo);
                break;

            case 2:
                saldo = realizarSaque(saldo);
                break;

            case 3:
                saldo = realizarDeposito(saldo);
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while(opcao != 0);
    printf("Obrigado por usar nosso ATM!\n");
    return 0;
}

void exibirMenu() {
    printf("\n========================\n");
    printf("      CAIXA ATM         \n");
    printf("========================\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Realizar Saque\n");
    printf("3 - Realizar Deposito\n");
    printf("0 - Sair\n");
    printf("========================\n");
    printf("Escolha uma opcao: ");
}

void consultarSaldo(float saldo) {
    printf("\n--- SALDO ATUAL ---\n");
    printf("Saldo: R$ %.2f\n", saldo);
    printf("-------------------\n");

    system("pause");
}

float realizarDeposito(float saldo) {
    float valor;
    printf("Digite o valor do deposito: ");
    scanf("%f", &valor);

    if(valor > 0) {
        saldo += valor;
        printf("Deposito realizado com sucesso!\n");
    } else {

        printf("Valor invalido!\n");
    }
    system("pause");

    return saldo;
}

float realizarSaque(float saldo) {

    float valorSaque;

    printf("Digite o valor do saque: ");
    scanf("%f", &valorSaque);

    if(valorSaque > 1000.00) {
        printf("Limite diario excedido!\n");

    } else if(valorSaque > saldo) {
        printf("Saldo insuficiente!\n");

    } else if(valorSaque <= 0) {
        printf("Valor invalido!\n");

    } else {

        saldo -= valorSaque;
        printf("Saque autorizado!\n");
    }
    system("pause");
    return saldo;
}