#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double R,A, B, MEDIA;
    cin >> R >> A >> B;
    MEDIA = ((R * 2) + (A * 3) + ( B * 5)) / 10.0;
    cout << "MEDIA = "<< fixed << setprecision(1) << MEDIA << endl;
    return 0;

}
