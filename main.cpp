#include <iostream>
#include <string>
using namespace std;

int compare(int a, int b){
    if(a < 0) throw "ERR a negativo";
    if(b < 0) {
        string b_neg = "ERR b negativo";
        cerr << b_neg << b << endl;
    };
    return a == b;
}

void test(){
    try{ 
        cout << compare(2, -4) << endl;
    } catch(const char* err){
        cout << err << endl;
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