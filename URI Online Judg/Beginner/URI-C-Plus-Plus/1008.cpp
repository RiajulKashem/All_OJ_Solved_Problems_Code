#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int num, hour;
    double SALARY, amount;
    std::cin >> num >> hour >> amount;
    cout << "NUMBER = " << num <<'\n' << "SALARY = U$ "<< fixed << setprecision(2) << hour * amount << endl;
    return 0;

}
