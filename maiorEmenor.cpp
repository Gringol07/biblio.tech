#include <iostream>
#include <locale>

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	int numeros[8],posicao,posicao_j;
	int maior_num = 0;
	int menor_num = 10;
	for (int i = 0; i < 8; i++){
		std::cout <<"Digite o número da posição " << i << ":";
		std::cin >> numeros[i];
	}
	
	for (int i =0 ; i < 8; i++){
		if (numeros[i] < menor_num){
			menor_num = numeros[i];
			posicao = i;
		}
	}
	
	for (int j =0 ; j < 8; j++){
		if (numeros[j] > maior_num){
			maior_num = numeros[j];
			posicao_j = j;
		}
	}
	std::cout<<"O menor numero do array é:"<< menor_num<<std::endl;
	std::cout<<"Na posição:"<<posicao <<std::endl;
	
	std::cout<<"\n";
	
	std::cout<<"O maior numero do array é:"<< maior_num<<std::endl;
	std::cout<<"Na posição:"<<posicao_j <<std::endl;
	return 0;
}