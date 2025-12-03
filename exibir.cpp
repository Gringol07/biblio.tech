#include <iostream>
#include <locale>
int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	int valores[5];
	
	for (int i = 0;i < 5; i++){
		
		std::cout <<"Digite o número da posição " << i+1 << ":";
		std::cin >> valores[i];
	}
	
	for(int i = 0; i < 5; i++){
		std::cout<<valores[i];
		std::cout<<"\n";
	}
	return 0;
}