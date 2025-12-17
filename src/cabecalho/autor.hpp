#ifndef AUTOR_HPP
#define AUTOR_HPP

#include <string>

class Autor {
public:
    Autor();                    // construtor padrão
    Autor(std::string autor);   // construtor com parâmetro
    void setAutor(std::string a);
    std::string getnomeAutor();

private:
    std::string autor;
};

#endif
