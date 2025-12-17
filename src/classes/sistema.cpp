#include <iostream>
#include <string>
#include "../cabecalho/sistema.hpp"
#include "../cabecalho/livros.hpp"
#include "../cabecalho/autor.hpp"
#include "../cabecalho/usuario.hpp"
#include <vector>

Usuario usuario;
Sistema sistema;
Livros livro ;

 Sistema::Sistema(){
    livrosCadastrados.resize(tamanho_vetor); //Vetores dinâmicos 
    autorCadastrado.resize(tamanho_vetor);
    livroDisponivel = true;
 }


Sistema::Sistema(std::string nome_livro,std::string nome_autor) 
: nomeDoAutor(nome_autor), nomeDoLivro(nome_livro){
    for (int i = 0; i < tamanho_vetor; i++){
        livrosCadastrados[i] = nome_livro;
        autorCadastrado[i] = nome_autor;
    }
}


bool Sistema::CriarConta(){
    bool escolha = false;
    if (usuario.alunoMatriculado){
        std::cout<<"Você e um aluno cadastrado\n";
    }

    else {
        
    do {
        pegarDadosUsuario();
        std::cout<<"Conta criada com sucesso!\n";
        return isAlunoMatriculado();
        escolha = true;

        if (escolha != true)
        {
            std::cout<<"Erro! inválido!";
        }

    }

    while(escolha != true);
    }
    
}


bool Sistema::SolicitarEmprestimo(){
    
    if(VerificarUsuario()){
        buscarLivro();
    
    for (int i = 0; i < tamanho_vetor; i++){
            if (sistema.livrosCadastrados[i].getnomeLivro() == nameLivro && sistema.autorCadastrado[i].getnomeAutor() == nameAutor ){
                if(verificarLivroDisponivel()){
                    std::cout<<"Livro está disponivel\n";

                    if(isAlunoMatriculado()){
                        std::cout<<"Livro foi emprestado!\n";
                        return PegarLivro();
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
            else if(sistema.livrosCadastrados[i].getnomeLivro() == nameLivro && sistema.autorCadastrado[i].getnomeAutor() != nameAutor ){
                std::cout<<"Nome do autor não corresponde ao livro!";
                break;
            }
            else if(sistema.livrosCadastrados[i].getnomeLivro()!=  nameLivro  && sistema.autorCadastrado[i].getnomeAutor() == nameAutor ){
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

bool Sistema::RenovarEmprestimo(){

    if(VerificarUsuario()){
    
        if (livroDisponivel == false){

            std::cout<<"Renovação concluida!"<<std::endl;
            return Renovacao();
        }
        else{
            std::cout<<"Você não tem livros para renovar!"<<std::endl;
        }
}
}

bool Sistema::Devolucao(){
if(VerificarUsuario()){
   
        if (verificarLivroDisponivel()){
            std::cout <<"Você não tem livros para devolver!"<<std::endl;
        }
        else{
        std::cout<<"Livro devolvido!"<<std::endl;
        return DevolverLivro();
        }
    }
}

bool Sistema::Renovacao(){

    return livroDisponivel = false;
}

bool Sistema::DevolverLivro(){

    return livroDisponivel = true;
}

bool Sistema::verificarLivroDisponivel(){
    
    return livroDisponivel;
}

bool Sistema::PegarLivro(){

    return livroDisponivel = false;
}

void Sistema::buscarLivro(){
    
    std::cin.ignore();
    std:: cout<<"Nome do Livro:";
    std:: getline(std::cin,nameLivro);

    std:: cout<<"Autor:";
    std:: getline(std::cin,nameAutor);
    
}

bool Sistema::isAlunoMatriculado(){
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

    Usuario usuario1(userName,num_matricula,CPF);
}

