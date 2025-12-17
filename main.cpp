#include <iostream>
#include <windows.h>
#include <string>
#include "src/cabecalho/livros.hpp"
#include "src/cabecalho/usuario.hpp"
#include "src/cabecalho/sistema.hpp"
#include "src/cabecalho/autor.hpp"
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Sistema sistema;
    
    Sistema livro1("Flamengo","Gabriel");

    
    int opcao;
   
    
    std::cout<< "Bem vindo ao Sistema de  Livros da Biblioteca do IFPI\n";
    std::cout<< "Aqui você pode:|Pegar livros |Renovar empréstimo |Devolver Livro |";
    std::cout<<"\n";

    
    while (true){
        std::cout<<"=======================================================================================\n";
        std::cout <<"Escolha uma opção:\n1-Pegar Livros\n2-Renovação\n3-Devolução\n4-Criar conta\n5-Sair\n";
        std::cin >> opcao;
        if (opcao < 1 || opcao > 5){
            std:: cout<<"Erro inválido\n";
        }
        switch (opcao){
            case 1:
                sistema.SolicitarEmprestimo();
                continue;
            case 2: 
                sistema.RenovarEmprestimo();
                continue;
            case 3:
                sistema.Devolucao();
                continue;
            case 4:
                sistema.CriarConta();
                continue;
            case 5:
                std::cout<<"Encerrando o sistema"<<std:: endl;
                break;
            default:
                std::cout<<"Erro"<<std::endl;
        }

        break;
}
return 0;
}
