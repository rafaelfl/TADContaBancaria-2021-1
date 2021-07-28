#include "ContaBancaria.h"
#include <stdio.h>

int main() {
	ContaBancaria conta1, conta2;

	inicializar_conta(&conta1, "1234-5", "789", CORRENTE, 10.0);
	inicializar_conta(&conta2, "0000-1", "123", POUPANCA, 0.0);

	depositar(&conta1, 100.0);

	depositar(&conta2, 20.0);

	sacar(&conta1, 5.0);
	sacar(&conta2, 5.0);

	transferir(&conta1, &conta2, 50.0);

	imprimir_saldo(&conta1);

	imprimir_saldo(&conta2);

	return 0;
}