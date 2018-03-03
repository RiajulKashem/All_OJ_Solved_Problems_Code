#include <iostream>

int main()
{
	int a, b, c, maior, result;
	std::cin >> a >> b >> c;

	if (a < b && a < c) {
		if (b < c) {
			result = c;
		}
		else{
			result = b;
		}
	}
	else if (b < a && b < c) {
		if (a < c) {
			result = c;
		}
		else{
			result = a;
		}
	}
	else{
		result = a;
	}

	std::cout << result << " eh o maior" << '\n';

	return 0;
}
