#pragma once
#include <iostream>
#include <chrono>
#include <thread>

struct HomePage {
private:
	double Saldo;
	int Opcao;

public:
	void ExibirMenu();

	void MostrarSaldo();
	void MostrarRegrasAdvinhacao();

	void Depositar(int Deposito);
	int GetSaldo();

	void SetOpcao(int Opcao);
	int GetOpcao();

	HomePage() {
		Saldo = 500;
		Opcao = 0;
	}
};
