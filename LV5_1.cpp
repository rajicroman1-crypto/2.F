/* LV1 – Zadatak: PUNIONICE ZA E-BICIKLE
Ucenik/ucenici: Roman Rajic
Funkcija prima: const vector<int> slobodno, int K
Funkcija vraca: int 
Moj test: ulaz: 4,4,4
ocekivani rezultat: 3
sto test provjerava: provjerava rad funkcije
AI: nisam koristio*/
#include <iostream>
using namespace std;
#include <vector>
int prvaPunionica(const vector<int>& slobodno, int K) {
    for (int i = 0; i < slobodno.size(); i++) {
        if (slobodno[i] >= K) {
            return i;
        }
    }return -1;
}
int main()
{
    int K;
    vector<int> slobodno;
    int slobodnePunionice;
    cout << "punionice: ";
    cin >> slobodnePunionice;
    int n;
    for (int i = 0; i < slobodnePunionice;i++) {
        cout << "unesi punionicu: ";
        cin >> n;
        slobodno.push_back(n);
    }
    cout << "unesi broj bicikala: ";
    cin >> K;
    int rezultat = prvaPunionica(slobodno, K);
    if (rezultat != -1) {
        cout << "prva slobodna punionica: " << rezultat << endl;
    }
    else {
        cout << "-1";
    }
    return 0;
}

