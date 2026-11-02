#include <iostream>
#include <vector>
using namespace std;
int brojPozitivnih(const vector<int>& a, int i) {
    if (i == a.size()) {
        return 0;
    }
    int trenutni = (a[i] > 0) ? 1 : 0;
    return trenutni + brojPozitivnih(a, i + 1);
}
int main()
{
    int n;
    if (cin >> n) {
        vector<int> a(n);
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        cout << brojPozitivnih(a, 0) << endl;
    }
    return 0;
}
