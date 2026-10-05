//Roman Rajič
//int a[],int n -> void
//{13,4,-5}, n = 3 -> ocekivano = {12,4,0}

#include <iostream>
using namespace std;
void ispraviMjerenja(int a[], int n) {
    for (int i = 0; i < n;i++) {
        if (a[i] < 0) {
            a[i] = 0;
        }
    }
}

int main() {
    int polje[] = { 12, -3, -8, 1, 15 };
    int n = 5;

    ispraviMjerenja(polje, n);

    for (int i = 0; i < n; i++) {
        std::cout << polje[i] << " ";
    }

    return 0;
}
