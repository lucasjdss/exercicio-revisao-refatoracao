#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  protected:
    std :: string nome;
    double salarioporHora;  
    double quantidadetrabalhada;

  public:
    double pagamentomensal(){
      double horaseHorasextra = quantidadetrabalhada;
      double cargahoraria = 8
      int metade = 2;


      //Cálculo de hora extra (+50% se quantidadetrabalhada > 8)

      if (quantidadetrabalhada > cargahoraria){
        double horaextra = (quantidadetrabalhada - cargahoraria)/metade;
        horaseHorasextra += horaextra;
      }

      return horaseHorasextra = salarioporHora;
    } 


    Empregado( std :: string nome, double quantidadetrabalhada, double salarioporHora){
      Empregado :: nome = nome;
      Empregado :: quantidadetrabalhada = quantidadetrabalhada;
      Empregado :: salarioporHora = salarioporHora;
    }


} #endif