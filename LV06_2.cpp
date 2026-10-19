#include <iostream>
using namespace std;
void naslov() {
    cout << "SLJEDECA SEKUNDA" << endl;
}
bool provjeraIspravnosti(int s, int m, int sec) {
    if (s < 0 || s>23)return false;
    if (m < 0 || m>59)return false;
    if (sec < 0 || sec>59)return false;
    return true;
}
void ispisiVrijeme(int s, int m, int sec) {
    if (s < 10)cout << "0";
    cout << s << ":";
    if (m < 10)cout << "0";
    cout << m << ":";
    if (sec < 10)cout << "0";
    cout << sec << ":";
}
int main()
{
    naslov();
    int s, m, sec;
    if (!(cin >> s >> m >> sec))return 0;
    if (!provjeraIspravnosti(s, m, sec)) {
        cout << "Neispravni unos" << endl;
        return 0;
    }
    sec++;
    if (sec == 60) {
        sec = 0;
        m++;
        if (m == 60) {
            m = 0;
            s++;
            if (s == 24) {
                s = 0;
            }
        }
    }
    ispisiVrijeme(s, m, sec);
    return 0;
}


