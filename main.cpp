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

int dividi(int a, int b){
    if(a < 0 || b < 0) {
        throw invalid_argument("❌ Valori negativi!");
    }
    if(b == 0){
        throw overflow_error("❌ Divisione per zero!");
    }
    if(a < b){
        throw out_of_range("❌ a < b!");
    }
    return a/b;
}

void test2(){
    try{
        cout << dividi(3, 12) << endl;
    } catch(const invalid_argument& e){
        cout << "❌ Valori negativi!" << endl;
    } catch(const overflow_error& e){
        cout << "❌ Divisione per zero!" << endl;
    } catch(const out_of_range& e){
        cout << "❌ a < b!" << endl;
    } catch(...){
        cout << "❌ ERRORE GENERICO" << endl;
    }

    /*
        catch(...) gestisce tutte le eccezioni
    */
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
    
    
    //test();

    test2();

    return 0;
} 