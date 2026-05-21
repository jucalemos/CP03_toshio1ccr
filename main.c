#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// menu
int main () {
int opcao;
do {
    system("cls"); 
    exibirMenu();
    scanf("%d", &opcao);
} while(opcao != 0);
printf("Obrigado por usar nosso ATM!");

switch(opcao) {
case 1:
consultarSaldo(saldo);
break;
case 2:
saldo = realizarSaque(saldo);
break;
case 0:
printf("Saindo...\n");
break;
default:
printf("Opcao Invalida!\n");
}

}
void exibirMenu() {
    printf("\n========================\n");
    printf(" CAIXA ELETRÔNICO  \n");
    printf("\n========================\n");
    printf("1 - Consultar Sadlo\n");
    printf("2 - Realizar Saque\n");
    printf("3 - Realizar Depósito\n");
    printf("0 - Sair\n");
    printf("\n========================\n");
    printf("Escolha uma opção: \n");
}