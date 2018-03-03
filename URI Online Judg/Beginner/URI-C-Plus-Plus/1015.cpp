#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[]) {
	double x1, y1, x2, y2, result;

	std::cin >> x1 >> y1;
	std::cin >> x2 >> y2;

	result = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	printf("%.4f\n", result );
	return 0;
}
