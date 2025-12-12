#ifndef LIVROS_HPP
#define LIVROS_HPP
#include <string>


class Livros{
    public:
        Livros();
        Livros(std::string a,std::string n);
        void setnomeLivro(std::string n);
        void setAutor(std::string a);
        std::string getnomeLivro();
        std::string getnomeAutor();
    private:
        std::string nomeLivro;
        std::string autor;
        
        
};
#endif