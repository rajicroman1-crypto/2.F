/* LV1 – Zadatak: SIGNAL U TUNELU
Ucenik/ucenici: Roman Rajic
Funkcija prima: int signal[],int n,int D
Funkcija vraca: int
Moj test: ulaz: 40 42 41 49 50
ocekivani rezultat: 3
sto test provjerava: provjerava rad funkcije
AI: nisam koristio
*/
using namespace std;
#include <iostream>
int prviSkok(int signal[], int n, int D) {
    for (int i = 0; i < n; i++) {
        if ((signal[i] - signal[i - 1] > D) || (signal[i - 1] - signal[i] > D)) {
            return i;
        }
    }return -1;
}
int main()
{
    int d;
    cout << "unesi D";
    cin >> d;
    int n;
    cout << "unesi n";
    cin >> n;
    int signal[100];
    for (int i = 0; i < n; i++) {
        cout << "unesi polje";
        cin >> signal[i];
    }
    cout << prviSkok(signal, n, d);
    return 0;
}

