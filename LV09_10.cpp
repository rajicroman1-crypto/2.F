#include<vector>
#include <iostream>
using namespace std;
int pronadjiNajbolji(const vector<int>& bodovi) {
    if (bodovi.empty())return 0;

    int maxIndex = 0;
    int maxVrijednost = bodovi[0];

    for (int i = 1; i < bodovi.size(); i++) {
        if (bodovi[i] > maxVrijednost) {
            maxIndex = i;
        }
    }
    return maxIndex +1;
}
int prebrojiProlaz(const vector<int>& bodovi, int p) {
    int brojac = 0;
    for (int bod : bodovi) {
        if (bod >= p) {
            brojac++;
        }
    }
    return brojac;
}
int brojProlaznihRek(const vector<int>& bodovi, int p, int indeks) {
    if (indeks >= bodovi.size()) {
        return 0;
    }
    int doprinos = (bodovi[indeks] >= p) ? 1 : 0;
    return doprinos + brojProlaznihRek(bodovi, p, indeks + 1);
}
int maksimum(const vector<int>& bodovi) {
    if (bodovi.empty()) {
        return 0;
    }
    int m = bodovi[0];
    for (int i = 1; i < bodovi.size(); i++) {
        if (bodovi[i] > m) {
            m = bodovi[i];
        }
    }
    return m;
}
int main()
{
    int n, p;
    if (!(cin >> n >> p)) return 0;

    vector<int> bodovi(n);
    for (int i = 0; i < n; i++) {
        cin >> bodovi[i];
    }

    int najbolji = maksimum(bodovi);
    int pozicija = pronadjiNajbolji(bodovi);
    int prolazIterativno = prebrojiProlaz(bodovi, p);
    int prolazRekurzivno = brojProlaznihRek(bodovi, p, 0);

    cout << "najbolji: " << najbolji << endl;
    cout << "pozicija: " << pozicija << endl;
    cout << "prolaz: " << prolazIterativno << endl;
    return 0;
}