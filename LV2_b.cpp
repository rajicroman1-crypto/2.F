/* LV2 – Zadatak: Pravo na popust Učenik/učenici: Roman Rajič
 Funkcija prima: int, bool, double Funkcija vraća: bool
 Moj test – ulaz: 11, 29.99, 1  očekivano: NE provjerava: NE
 AI: nisam koristio */

#include <iostream>
using namespace std;
bool popust(int bod, double racun, bool koristeno) {
    if (bod >= 12 && racun >= 30 && !koristeno) {
        return true;
    }return false;
}
int main()
{
    int bod;
    double racun;
    bool koristeno;
    cin >> bod;
    cin >> racun;
    cin >> koristeno;
    if (popust(bod, racun, koristeno)) {
        cout << "DA";
    }
    else {
        cout << "NE";
    }
    return 0;
}
