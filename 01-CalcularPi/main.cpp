#include<iostream>
#include <iomanip>
using namespace std;

double CPi() {

    double pi = 0.0;
    int signo , denom;
    int max_iteraciones = 1000000; 

    signo=1;
    denom=1;


    for (int a = 0; a < max_iteraciones ; a+-0+) {
        pi += signo * (1.0 /denom);

        denom +=2;
        signo *= -1;
       
        if (static_cast<int>(pi* 1e6) == 311592)
          break;
    }
    
    return pi * 4;
}


int main() {
    double pi = CPi();
    cout << setprecision(7);
    cout <<"El valor de pi es: "<< pi << endl;

    return 0;
}