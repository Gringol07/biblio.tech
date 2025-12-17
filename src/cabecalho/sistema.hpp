#ifndef SISTEMA_HPP
#define SISTEMA_HPP
#include <string>
#include <vector>
#include "../cabecalho/livros.hpp"
#include "../cabecalho/autor.hpp"
class Sistema{
    public:
        std::string nameAutor,nameLivro;
        bool escolha;
        bool livroDisponivel;
        const int tamanho_vetor = 100;
        
        Sistema();
        Sistema(std::string nome_autor, std::string nome_livro);

        bool CriarConta ();
        bool SolicitarEmprestimo();
        bool RenovarEmprestimo();
        bool Devolucao();
        bool Renovacao();
        bool DevolverLivro();
        bool verificarLivroDisponivel();
        bool PegarLivro();
        void buscarLivro();
        bool isAlunoMatriculado();
        bool VerificarUsuario();
        void pegarDadosUsuario();  
        std::vector <Livros> livrosCadastrados;
        std::vector <Autor> autorCadastrado;
    private:
        Livros nomeDoLivro;
        Autor nomeDoAutor;
};
#endif