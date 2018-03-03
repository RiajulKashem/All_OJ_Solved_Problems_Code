#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[]) {
	int input_second;
	std::cin >> input_second;
	printf("%d:%d:%d\n",((input_second / 60) /  60) % 60, (input_second / 60) % 60, input_second % 60);
	return 0;
}
