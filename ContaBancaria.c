#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ContaBancaria.h"

ContaBancaria * criar_conta(char numconta[20], char numage[20], TipoConta tipoc, double saldo_inicial) {

  ContaBancaria *conta;
  conta = malloc(sizeof(ContaBancaria));
  
  strcpy(conta->numero_conta, numconta);
  strcpy(conta->agencia, numage);
  conta->tipo_conta = tipoc;
  conta->saldo = saldo_inicial;

  return conta;
}

void depositar(ContaBancaria *conta, double valor) {
  conta->saldo += valor;
}

void sacar(ContaBancaria *conta, double valor) {
  conta->saldo -= valor;
}

void imprimir_saldo(ContaBancaria *conta) {
  printf("      BEM VINDO AO BANCO TAD      \n");
  printf("Agência: %s\n", conta->agencia);
  printf("Conta: %s\n", conta->numero_conta);
  printf("\n");

  if ( conta->tipo_conta == CORRENTE ) {
    printf("CONTA CORRENTE\n");
  } else {
    printf("CONTA POUPANÇA\n");
  }

  printf("\n");

  printf("Saldo atual: %.2f\n", conta->saldo);
}

void transferir (ContaBancaria *conta_origem, ContaBancaria *conta_destino, double valor) {
  conta_origem->saldo  -= valor;
  conta_destino->saldo += valor;
}

void destruir_conta(ContaBancaria *conta) {
  free(conta);
}