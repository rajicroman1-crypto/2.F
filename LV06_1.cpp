using namespace std;
#include <iostream>
int ukupno(int a, int b, int c) {
    return a + b + c;
}
bool prolazi(int a, int b, int c) {
    int sum = ukupno(a, b, c);
    return(sum >= 180) && (a >= 40 && b >= 40 && c >= 40);
}
void ispisRezultata(int bodovi, bool status) {
    cout << bodovi << "" << (status ? "FINALE" : "NE") << endl;
}
int main()
{
    int a, b, c;
    if (!(cin >> a >> b >> c))return 0;
    int ukupniBodovi = ukupno(a, b, c);
    bool statusFinale = prolazi(a, b, c);
    ispisRezultata(ukupniBodovi, statusFinale);
    return 0;
}

