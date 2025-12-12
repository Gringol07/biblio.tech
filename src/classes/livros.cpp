#include <iostream>
#include <string>
#include "../cabecalho/livros.hpp"


Livros::Livros(){
    autor = "";
    nomeLivro = "";
}

Livros::Livros(std::string a,std::string n){
    this->autor = a;
    this->nomeLivro = n;
}

void Livros::setnomeLivro(std::string n){
    nomeLivro = n;
}

void Livros::setAutor(std::string a){
    autor = a;
}





