#include <iostream>
using namespace std;

int main() {
    double x, y;
    //la prima eccezione valida interrompe il codice nel try
    try{
        cout << "Dividendo: "; cin >> x;
        cout << "Divisore: ", cin >> y;
        if(x > 10){
            throw "Dividendo troppo grande!";
        }
        if(y == 0) {
            throw "Divisione per zero!";
        }
        cout << x/y << endl;
    } catch(const char* err) {
        cout << err << endl;  
    }
    cout << "continua..." << endl;
    return 0;
} 