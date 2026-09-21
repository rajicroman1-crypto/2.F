/* LV2 – Zadatak: Tri senzora Učenik/učenici: Roman Rajič
 Funkcija prima: a,b,c Funkcija vraća: jednu vrijednost
 Moj test – ulaz: 1,3,4 očekivano: 3 provjerava: 3
 AI: nisam koristio
 */

#include <iostream>
using namespace std;
int sredina(int a, int b, int c) {
    if (b<c && b>a) {
        return b;
    }
    if (a > b && a < c) {
        return a;
    }
    if (c > a && c < b) {
        return c;
    }
    if (c<a && c>b) {
    return c;
}
}
int main()
{
    int a;
    int b;
    int c;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << "sredina je:" << sredina(a,b,c);
    return 0;
}
