#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[]) {
	int R, K;
	std::cin >> R >> K;
	double RK = (double) R * ( (double) K / 12);
	printf("%.3f\n",RK);
	return 0;
}
