#include "JogoAvinhacao.h"

void JogoAdvinhacao::DificuldadeFacil()
{
	std::cout << " Bem vindo ao Jogo de Advinhação, você escolheu a dificuldade fácil e caso acerte receberá 100 moedas!!\n";
	std::cout << " Eu vou escolher um número de 1 a 10 e tudo o que você tem que fazer é acertar ele para ganhar, fácil, não?\n";
	std::cout << " Mas vou logo avisando que caso você perca, eu tomarei 10 moedas de você como punição!!\n";
	std::cout << " Está preparado? Só me de um instate para pensar";

	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	std::cout << ".";

	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	std::cout << ".";

	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	std::cout << ".\n";

	srand(time(0)); //Isso provavelmente reseta o numero aleatorio criado, para ele gerar um número diferente toda vez
	NumeroAleatorio = (rand() % 10) + 1; //Isso gera um numero aleatorio usando rand() e define um limite com % 10, como no meu jogo, 0 não é um numero aceitável essa regrinha faz com que ele seja entre 0-9, porém com o +1 ele se torna entre 1-10.

	std::cout << NumeroAleatorio; //Comando para ver se está tudo funcionando direitinho

	std::cout << " Arrá, já sei!! E aí? Pronto para advinhar??\n\n";
	std::cout << " Sua advinhação baseada em todos os fatos que o seu pequeno cérebro possui: ";
	std::cin >> Resposta;

	if (Resposta == NumeroAleatorio) {
		std::cout << " O QUÊ?!?! COMO VOCÊ SABIA????\n";
		std::cout << " Meh, enfim, é só um jogo mesmo, leva esse seu corpo mole e suas magias das trevas\n";
		std::cout << " De volta pro Menu, aqui estão as suas 100 moeadas, se não acredita em mim é só conferir\n";
		Depositar(100);
	}

	else if (Resposta > NumeroAleatorio) {
		std::cout << " HAH QUE BURRO!!\n";
		std::cout << " PORQUE DIABOS VOCÊ COLOCARIA UM NÚMERO MAIOR QUE O LIMITE? AHAHAHAHAHAHA\n";
		std::cout << " Enfim, me dá minhas 10 moedas e volta pro menu, vou estar aqui caso queira perder mais dinheiro!\n";
		Depositar(-10);
	}

	else if (Resposta < NumeroAleatorio) {
		std::cout << " Um número menor? Quanto esforço para perder, hein\n";
		std::cout << " Eu acertei em cheio em chamar o seu cérebro de pequeno, viu, cruz credo\n";
		std::cout << " Enfim, me dá minhas 10 moedas e volta pro menu, vou estar aqui caso queira perder mais dinheiro!\n";
		Depositar(-10);
	}

	else {
		std::cout << " Meu Deus! Era só digitar um número de 1 a 10!\n";
		std::cout << " Quanta incompetência pra uma alma só, meu pai\n";
		std::cout << " Essa incapacidade já deve ser o suficiente pra você, passa essas 10 moedas pra cá e some daqui!\n";
		std::cout << " Mas volte sempre tá? Eu amo ganhar dinheiro de trouxas S2\n";
		Depositar(-10);
	}

	system("Pause");
	system("CLS");
	ExibirMenu();

}

void JogoAdvinhacao::DificuldadeMedia()
{
}

void JogoAdvinhacao::DificuldadeDificil()
{
}

void JogoAdvinhacao::SetDificuldade(int NovaDificuldade)
{
	Dificuldade = NovaDificuldade;
}

int JogoAdvinhacao::GetDificuldade()
{
	return Dificuldade;
}

void JogoAdvinhacao::SetResposta(int Resposta)
{
	this->Resposta = Resposta;
}

int JogoAdvinhacao::GetResposta()
{
	return Resposta;
}
