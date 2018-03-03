#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int code_1, num_1, code_2, num_2;
    double price_1, price_2, to_be_paid;

    std::cin >> code_1 >> num_1 >> price_1;
    std::cin >> code_2 >> num_2 >> price_2;

    to_be_paid = (num_1 * price_1) + (num_2 * price_2);

    std::cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << to_be_paid << '\n';

    return 0;

}
