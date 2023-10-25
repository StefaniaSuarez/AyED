#include<iostream>
#include <iomanip>

using namespace std;

double CalcularPi() {
    double pi = 0.0;
    int signo = 1;
    int denom = 1;
    
    while (static_cast<int>(pi*4*1000000) != 3141592)
    {
        pi += signo * (1.0/denom);
        denom +=2;
        signo *= -1;
    }
    
    return pi*4;
}

int main() {
    double pi = CalcularPi();
    cout <<setprecision(7) <<"El valor es: "<< pi << endl;
    return 0;
}
