#ifndef SISTEMA_HPP
#define SISTEMA_HPP
#include <string>

class Sistema{
    public:
        //std::string n_usuario,CPF,num_matricula;
        bool escolha;
        bool livroDisponivel;
        
        Sistema();
        Sistema(std::string autor, std::string nomeLivro);

        bool CriarConta ();
        bool SolicitarEmprestimo();
        bool RenovarEmprestimo();
        bool Devolucao();
        void getnomeLivro();
        bool Renovacao();
        bool DevolverLivro();
        bool DadosEmprestimo();
        bool verificarLivroDisponivel();
        bool PegarLivro();
        bool dadosLivro();
        bool alunoCadastrado();
        bool VerificarUsuario();
        void pegarDadosUsuario();
    private:
        Livros livrosCadastrados[100][2];

};
#endif