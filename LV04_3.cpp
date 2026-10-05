//Roman Rajič
//Pametni staklenik
//int temp[][6]->int
//cout << "S3 i P=23: " << brojiIznadPraga(tablica, 3, 23) <<"\n";
//
#include <iostream>

using namespace std;


int brojiIznadPraga(int temp[][6], int redak, int P) {
    int brojac = 0;
 
    for (int j = 0; j < 6; j++) {
        if (temp[redak][j] > P) {
            brojac++;
        }
    }
    return brojac;
}

int main() {
    
    int tablica[4][6] = {
        {22, 24, 23, 25, 24, 26}, 
        {19, 20, 21, 20, 22, 21}, 
        {27, 29, 28, 31, 30, 29}, 
        {23, 23, 24, 22, 24, 25}  
    };

    cout << "S0 i P=24: " << brojiIznadPraga(tablica, 0, 24) <<"\n";
    cout << "S2 i P=28: " << brojiIznadPraga(tablica, 2, 28) <<"\n";
    cout << "S1 i P=25: " << brojiIznadPraga(tablica, 1, 25) <<"\n";

    cout << "S3 i P=23: " << brojiIznadPraga(tablica, 3, 23) <<"\n";

    return 0;
}

