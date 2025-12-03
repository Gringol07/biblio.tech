#include <iostream>
#include <locale>
int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	int valores[5];
	int soma = 0;
	int media;
	for (int i = 0;i < 5; i++){
		std::cout <<"Digite o número da posição " << i+1 << ":";
		std::cin >> valores[i];
	}
	
	for(int j = 0; j < 5; j++){
	    soma += valores[j];
	}
	
	media = soma / 5;
	
	std::cout<<"Media: " << media;
	
	return 0;
}