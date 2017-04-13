#include <iostream>
#include "Mensagem.h"
using namespace std;

Mensagem::Mensagem(string msg): texto(msg) {
	cout << "Classe criada, texto = '" << msg << "'." << endl;
}

void Mensagem::imprime() {
	cout << "Exibindo mensagem: " << this->texto << endl;
}
