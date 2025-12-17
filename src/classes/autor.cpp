#include <iostream>
#include <string>
#include "../cabecalho/autor.hpp"

Autor::Autor(){
    autor = "";
}

Autor::Autor(std::string autor){
    this->autor = autor;
}

void Autor::setAutor(std::string a){
    autor = a;
}

std::string Autor::getnomeAutor(){
    return autor;
}