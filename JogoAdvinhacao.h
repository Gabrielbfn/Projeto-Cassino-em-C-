#pragma once
#include "HomePage.h"
#include <cstdlib>

struct JogoAdvinhacao : public HomePage {
private:
	int Dificuldade;
	int Resposta;
	int NumeroAleatorio;

public:
	void DificuldadeFacil();
	void DificuldadeMedia();
	void DificuldadeDificil();

	void SetDificuldade(int NovaDificuldade);
	int GetDificuldade();

	void SetResposta(int Resposta);
	int GetResposta();
};
