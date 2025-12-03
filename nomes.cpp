#include <iostream>
#include <locale>
#include <string>
int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
 	int tamanho = 6;
    std::string nomes[tamanho],nome;
 	
 	
 	for (int i = 0; i < 6; i++){
		std::cout <<"Digite o nome da posição " << i << ":";
		std::cin >> nomes[i];
	}
	std::cout<<"Digite o nome para pesquisar: ";
	std::cin>>nome;
	for(int i = 0; i< 6; i++){
		if (nome == nomes[i]){
			std::cout<<"Nome existe no vetor!"<<std::endl;
			break;
		}
		
 		else if (nome != nomes[i] && i == tamanho - 1){
			std::cout<<"Nome não existe!"<<std::endl;
			break;
		}
		
		else if(nome != nomes[i]){
			continue;
		}
	}
	
	
return 0;
}