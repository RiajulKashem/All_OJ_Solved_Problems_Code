#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){

    int input;
    double PI = 3.14159, VOLUME;

    std::cin >> input;

    VOLUME = (4/3.0) * PI * pow(input, 3);

    std::cout << "VOLUME = " << fixed << setprecision(3) << VOLUME << '\n';

    return 0;

}
