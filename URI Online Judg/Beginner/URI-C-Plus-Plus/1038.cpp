#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {
	int quantity, num;
	std::cin >> num >> quantity;

	if (num == 1){
		std::cout << "Total: R$ " << fixed << setprecision(2) << 4.00 * quantity << '\n';
	}

	else if (num == 2){
		std::cout << "Total: R$ " << fixed << setprecision(2) << 4.50 * quantity << '\n';
	}

	else if (num == 3){
		std::cout << "Total: R$ " << fixed << setprecision(2) << 5.00 * quantity << '\n';
	}

	else if(num == 4){
		std::cout << "Total: R$ " << fixed << setprecision(2) << 2.00 * quantity << '\n';
	}
	else if (num == 5) {
		std::cout << "Total: R$ " << fixed << setprecision(2) << 1.50 * quantity << '\n';
	}

	return 0;
}
