#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:
    int projetos;

    Engenheiro(std :: string nome, double quantidadetrabalhada, double salarioporHora, int projetos) : Empregado(nome, quantidadetrabalhada, salarioporHora){
      Engenheiro :: projetos = projetos;
    }
	

  void print(){
    std::cout << "Nome: " << Engenheiro::nome << std::endl;
    std::cout << "Salario Mensal: " << Engenheiro::pagamentomensal << std::endl;
    std::cout << "Projetos: " << Engenheiro::projetos << std::endl;
    std::cout << std::endl;
  }
  
};

