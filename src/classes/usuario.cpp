#include <iostream>
#include <string>
#include "../cabecalho/usuario.hpp"


Usuario::Usuario(){
    nome_usuario = "";
    matricula = "";
    cpf = "";
}

Usuario::Usuario(std::string name, std::string n_matricula, std::string n_cpf){
    this->nome_usuario = name;
    this->matricula = n_matricula;
    this->cpf = n_cpf;
    bool alunoMatriculado = true;
}
