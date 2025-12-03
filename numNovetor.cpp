#include <iostream>
#include <locale>

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	int valores[10],opcao;
	
	for (int i = 0;i < 10; i++){
		std::cout <<"Digite o número da posição " << i << ":";
		std::cin >> valores[i];
	}
	
	std::cout<<"Escolha um número para verificar se existe no vetor: ";
	std::cin >> opcao;
	for(int i = 0; i < 10; i++){
	    if (opcao == valores[i]){
			std::cout<<"Número existe no vetor "<<std::endl;
			std::cout<<"Primeira posição é "<< i <<std::endl;
			break;
		}
		else if (valores[i] != opcao) {
			continue;
		}
		  
	}

return 0;
}