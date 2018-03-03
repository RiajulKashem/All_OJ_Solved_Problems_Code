#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double R,A, MEDIA;
    cin >> R >> A;
    MEDIA = ((R * 3.5) + (A * 7.5)) / 11;
    cout << "MEDIA = "<< fixed << setprecision(5) << MEDIA << endl;
    return 0;

}
