#include <stdio.h>
#include "ContaBancaria.h"

int main() {
	ContaBancaria *conta1, *conta2;

	conta1 = criar_conta("1234-5", "789", CORRENTE, 10.0);
	conta2 = criar_conta("0000-1", "123", POUPANCA, 0.0);

	depositar(conta1, 100.0);
	depositar(conta2, 20.0);

	sacar(conta1, 5.0);
	sacar(conta2, 5.0);

	transferir(conta1, conta2, 50.0);

	imprimir_saldo(conta1);

	imprimir_saldo(conta2);

  destruir_conta(conta1);
  destruir_conta(conta2);

	return 0;
}