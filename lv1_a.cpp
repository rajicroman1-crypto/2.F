/*
LV1 – Zadatak: Turnir
Učenik/učenici: Roman Rajič
Funkcija prima: 3 varijable
Funkcija vraća: jednu varijablu
Moj test:
ulaz: 40, 67, 60
očekivani rezultat: nece proci
što test provjerava: jeli ucenik prosao
AI: nisam koristio
*/
#include <iostream>
using namespace std;

bool Prolaz(int a,int b,int c){
        if(a>=40&&b>=40&&c>=40)
        {
            if(a+b+c>=200)
                return true;
        }
        else
            return false;
    return false;
}

int main()
{
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(Prolaz(a,b,c)){
        cout<<"prolazi";
    }else{
        cout<<"ne prolazi";
    }
    return 0;
}