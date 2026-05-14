#include "HomePage.h"
#include "JogoAvinhacao.h"

void HomePage::ExibirMenu()
{
	SetOpcao(0);
	while (Opcao == 0) {
		std::cout << " ****** BEM VINDO AO CASSINO-NO-NO!!!! ******\n";
		std::cout << " Este é o Cassino Salamandra, aquele que torra todo o seu dinheiro!\n";
		std::cout << " MUAHAHAHAHAHAHAHAHAHAHAHAHA\n";
		std::cout << " Porque não tenta a sorte camarada e escolha uma das opções abaixo:\n";
		std::cout << " 1. Mostrar o Meu Saldo\n";
		std::cout << " 2. Jogar Advinhação\n\n";
		std::cout << " Sua escolha: ";
		std::cin >> Opcao;
		system("CLS");
	}

	if (Opcao == 1) {
		MostrarSaldo();
	}

	else if (Opcao == 2) {
		MostrarRegrasAdvinhacao();
	}

}

void HomePage::MostrarSaldo()
{
	std::cout << " Olá, o seu saldo atual é de: " << GetSaldo() << "\n";
	std::cout << " Aperte Enter para voltar ao menu.\n";
	system("Pause");
	system("CLS");
	ExibirMenu();

}

void HomePage::MostrarRegrasAdvinhacao()
{
	Opcao = 0;
	while (Opcao == 0) {

		std::cout << " ***** REGRAS DO JOGO DE ADVINHAÇÂO *****";
		std::cout << " Para jogar advinhacao é bem fácil, existem 3 Níveis: Fácil, Médio e Difícil\n";
		std::cout << " Em cada um deles você tem que advinhar um número, a chance de você conseguir\n";
		std::cout << " irá varia de acordo com a dificuldade. No Fácil você advinha de 1-10, no Médio de 1-20\n";
		std::cout << " e no Difícil de 1-50, as recompensas estão abaixo. Qual você escolherá?\n";
		std::cout << " 1. Fácil = 100 moedas\n";
		std::cout << " 2. Médio = 200 moedas\n";
		std::cout << " 3. Difícil = 500 moedas\n";
		std::cout << " 4. Voltar para o Menu\n\n";
		std::cout << " Sua Opcao: ";
		std::cin >> Opcao;
		system("CLS");
	}

	if (Opcao == 1 || Opcao == 2 || Opcao == 3) {

		JogoAdvinhacao* TelaAdvinhacao = new JogoAdvinhacao;
		TelaAdvinhacao->SetDificuldade(Opcao);
		switch (TelaAdvinhacao->GetDificuldade()) {
		case 1:
			TelaAdvinhacao->DificuldadeFacil();
			break;
		case 2:
			TelaAdvinhacao->DificuldadeMedia();
			break;
		case 3:
			TelaAdvinhacao->DificuldadeDificil();
			break;
		}

	}

	else if (Opcao == 4) {
		system("CLS");
		ExibirMenu();
	}

	else {

		std::cout << "Opção inválida, reiniciando página...";
		system("CLS");
		MostrarRegrasAdvinhacao();

	}

}

void HomePage::Depositar(int Deposito)
{
	Saldo += Deposito;
}

int HomePage::GetSaldo()
{
	return Saldo;
}

void HomePage::SetOpcao(int Opcao)
{
	this->Opcao = Opcao;
}

int HomePage::GetOpcao()
{
	return Opcao;
}
