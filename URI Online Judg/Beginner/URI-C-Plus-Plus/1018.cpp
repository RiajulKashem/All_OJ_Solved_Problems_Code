#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[]) {
	int TK;
	std::cin >> TK;

	printf("%d\n",TK);
	printf("%d nota(s) de R$ 100,00\n",TK / 100);

	TK %= 100;
	printf("%d nota(s) de R$ 50,00\n", TK / 50);

	TK %= 50;
	printf("%d nota(s) de R$ 20,00\n",TK / 20);

	TK %= 20;
	printf("%d nota(s) de R$ 10,00\n",TK / 10);

	TK %= 10;

	printf("%d nota(s) de R$ 5,00\n", TK / 5);

	TK %= 5;
	printf("%d nota(s) de R$ 2,00\n",TK / 2);

	TK %= 2;
	printf("%d nota(s) de R$ 1,00\n",TK / 1);
	return 0;
}
