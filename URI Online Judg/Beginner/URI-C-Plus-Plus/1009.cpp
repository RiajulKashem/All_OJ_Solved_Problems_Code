#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    string name;
    double SALARY, amount;
    std::cin >> name >> SALARY >> amount;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << SALARY + (amount * 15 ) / 100 << endl;
    return 0;

}
