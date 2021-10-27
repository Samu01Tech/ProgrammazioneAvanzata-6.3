#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

int compare(int a, int b){
    if(a < 0 || b < 0) {
        throw invalid_argument("❌ Valori negativi");
    }
    return a == b;
}

void test(){
    try{ 
        cout << compare(2, -4) << endl;
    } catch(const invalid_argument& err){
        cout << "Argomenti non validi" << endl;
    }
}

int main() {
    //double x, y;
    //la prima eccezione valida interrompe il codice nel try
    // try{
    //     cout << "Dividendo: "; cin >> x;
    //     cout << "Divisore: ", cin >> y;
    //     if(x > 10){
    //         throw "Dividendo troppo grande!";
    //     }
    //     if(y == 0) {
    //         throw "Divisione per zero!";
    //     }
    //     cout << x/y << endl;
    // } catch(const char* err) {
    //     cout << err << endl;  
    // }
    // cout << "continua..." << endl;
    
    
    test();

    return 0;
} 