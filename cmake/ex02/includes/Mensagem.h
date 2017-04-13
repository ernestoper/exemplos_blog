#include <string>

class Mensagem {
	private:
		std::string texto;
	public:
		Mensagem(std::string);
		virtual void imprime();
};
