#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:
  int meses = 12;
	double quotaMensalVendas;
	double quotaTotalAnual() {
	  return quotaMensalVendas * meses;
	}

	Vendedor(std::string nome, double quantidadetrabalhada, double salarioporHora, double quotaMensalVendas) : Empregado(nome, quantidadetrabalhada, salarioporHora){
		Vendedor :: quotaMensalVendas = quotaMensalVendas;
	}

	void print(){
		std::cout << "Nome: " << Vendedor :: nome << std::endl;
		std::cout << "Salario de um Mes: " << Vendedor ::pagamentomensal() << std::endl;
		std::cout << "Quota das Vendas: " << Vendedor :: quotaTotalAnual() << std::endl;
		std::cout << std::endl;
	}
	
};

