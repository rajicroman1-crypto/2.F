//Roman Rajič
//Paketi u sortirnici
//int mase[],int N,int L, int D -> int
//{1200,600,500},N=3, L=700, D=1600 -> ocekivano = 1
//
using namespace std;
#include <iostream>
int brojPaketa(int mase[], int N, int L, int D) {
    int brojac=0;
    for (int i = 0;i < N;i++) {
        if (mase[i] >= L && mase[i] <= D) {
            brojac++;
        }
    }return brojac;
}
int main()
{
    int mase[] = { 1200, 750, 1800, 950, 2100, 1300 };
    int N, L, D;
    cin >> N >> L >> D;
    cout << brojPaketa(mase,N,L,D);
    return 0;
}

