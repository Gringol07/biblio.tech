#include <iostream>
#include <string>
#include "../cabecalho/sistema.hpp"
#include "../cabecalho/livros.hpp"
#include "../cabecalho/usuario.hpp"

Usuario usuario;

livrosCadastrados[100][2];

Livros livro;


Sistema::Sistema(){
    Livros livro1("João","Gabriel");
    livrosCadastrados[0][0] = livro1;
    livroDisponivel = true;
}


bool Sistema::CriarConta(){
    int e;
    bool escolha = false;
    if (usuario.alunoMatriculado){
        std::cout<<"Você e um aluno cadastrado\n";
    }

    else {
        pegarDadosUsuario();
    do {
        std::cout <<"Digite 1 para Criar conta!\n";
        std::cin >> e;
        std::cout<<"Conta criada com sucesso!\n";

    if (e != 1){
        std::cout<<"Erro! Valor inválido!";
    }

    else if (e == 1){
        escolha = true;
        return isASlunoMatriculado();
        
    }

    }

    while(e != 1);
    }
    
}


bool Sistema::SolicitarEmprestimo(){
    
    if(VerificarUsuario()){
        dadosLivro();
    
    for (int i = 0; i < 100; i++){
        for(int j = 0; j < 2; j++){
            if (livrosCadastrados[i][0].nameLivro == getNamelivro() && livrosCadastrados[i][1].nameAutor == livro.autor){
                if(verificarLivroDisponivel()){
                    std::cout<<"Livro está disponivel\n";

                    if(usuario.isASlunoMatriculado()){
                        std::cout<<"Livro foi emprestado!\n";
                        return livro.PegarLivro();
                        break;
                    }
                    else{
                        std::cout<<"Você não e um aluno cadastrado!";
                        break;
                    }
                    }

                else{
                    std::cout<<"Livro não está disponivel";
                    return livroDisponivel;
                    break;
                }
                
            }
            else if(livrosCadastrados[i][0].nameLivro == getNamelivro() && livrosCadastrados[i][1].getnomeAutor() != nameAutor){
                std::cout<<"Nome do autor não corresponde ao livro!";
                break;
            }
            else if(livrosCadastrados[i][0].nameLivro != getNamelivro() && livrosCadastrados[i][1].getnomeAutor() == nameAutor){
                std::cout<<"Nome do livro não corresponde ao autor!";
                break;
            }
            else {
                std::cout<<"Livro/Autor não cadastrado"<<std::endl;
                break;
            }
            break;
    }
    }
    
    }
}

bool Sistema::RenovarEmprestimo(){
    int opcao_renovar;

    if(usuario.VerificarUsuario()){
    
        if (livro.livroDisponivel == false){

            livro.DadosEmprestimo();
        }
        
}
}

bool Sistema::Devolucao(){
if(usuario.VerificarUsuario()){
   
        if (livro.verificarLivroDisponivel()){
            std::cout <<"Você não tem livros para devolver!"<<std::endl;
        }
        else{
        std::cout<<"Livro devolvido!"<<std::endl;
        return livro.DevolverLivro();
        }
    }
}

bool Sistema::Renovacao(){

    return livroDisponivel = false;
}

bool Sistema::DevolverLivro(){

    return livroDisponivel = true;
}

bool Sistema::DadosEmprestimo(){
    int opcao_renovar;

     do{ std::cout<<"Deseja renovar emprestimo:\n1-Sim\n2-Não"<<std::endl;
                std::cin>>opcao_renovar;

                if(opcao_renovar > 2 || opcao_renovar < 1){
                std::cout<<"Opção inválida!"<< std::endl;
                }

                else if(opcao_renovar == 2){
                    break;
                }

                else if(opcao_renovar == 1 && livro.livroDisponivel == false){
                    std::cout<<"Renovação concluida!"<<std::endl;
                     Renovacao();
                }

                else {
                    std::cout<<"Você não tem livros para renovar!"<<std::endl;
                }
        }while(opcao_renovar > 2 || opcao_renovar < 1);


}

bool Sistema::verificarLivroDisponivel(){
    
    return livroDisponivel;
}

bool Sistema::PegarLivro(){

    return livroDisponivel = false;
}

std::string Sistema::dadosLivro(){
    
    std::cin.ignore();
    std:: cout<<"\nAutor: ";
    std:: getline(std::cin,nameAutor);
    
    std:: cout<<"Nome do Livro: ";
    std:: getline(std::cin,livro.nameLivro);

}

bool Sistema::isASlunoMatriculado(){
    return usuario.alunoMatriculado = true;
}

bool Sistema::VerificarUsuario(){
    if (usuario.alunoMatriculado){
        return true;
    }
    else{
        std::cout<<"Aluno não é matrculado!\n";
        std::cout<<"Faça um cadastro para continuar\n";
        return false;
    }

}

void Sistema::pegarDadosUsuario(){
    std::string userName,CPF,num_matricula;
    std::cin.ignore();
    std::cout<<"Digite seu nome: ";
    std::getline(std::cin,userName);

    std::cout<<"\n";
    std::cout<<"Digite seu cpf: ";
    std::getline(std::cin,CPF);

    std::cout<<"\n";
    std::cout<<"Matricula: ";
    std::getline(std::cin,num_matricula);

    Usuario usuario1(userName,num_matricula,CPF)
}

