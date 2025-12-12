#ifndef USUARIO_HPP
#define USUARIO_HPP
#include <string>

class Usuario{
    public: 
        std::string nome_usuario;
        std::string matricula;
        std::string cpf;
        bool alunoMatriculado;
        Usuario();
        Usuario(std::string name, std::string n_matricula, std::string n_cpf);
        
};
#endif