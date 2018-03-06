#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	double num;
	std::cin >> num;

	if (num >= 0 and num <= 25.0000){
		std::cout << "Intervalo [0,25]" << '\n';
	}

	else if (num > 25.0000 and num <= 50.0000){
		std::cout << "Intervalo (25,50]" << '\n';
	}

	else if (num > 50.0000 and num <= 75.0000){
		std::cout << "Intervalo (50,75]" << '\n';
	}

	else if (num > 75.0000 and num <= 100.0000){
		std::cout << "Intervalo (75,100]" << '\n';
	}

	else{
		std::cout << "Fora de intervalo" << '\n';
	}

	return 0;
}
