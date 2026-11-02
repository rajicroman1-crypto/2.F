#include <iostream>
using namespace std;
void preslikavanje(unsigned int n) {
    if (n < 10) {
        cout << n;
        return;
    }
    cout << n % 10;
    preslikavanje(n / 10);
}
int main()
{
    unsigned int n;
    if (cin >> n) {
        preslikavanje(n);
        cout << endl;
    }

    return 0;
}

