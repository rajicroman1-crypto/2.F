/*
LV1 – Zadatak: Sigurna Zona
Učenik/učenici: Roman Rajič
Funkcija prima: 2 varijable
Funkcija vraća: dvije varijable
Moj test:
ulaz: 6,7
očekivani rezultat: siguran
što test provjerava: je li sigurna koordinata
AI: nisam koristio
*/
#include <iostream>
using namespace std;

bool Prolaz(int x,int y){
        if(x>=2&&x<=8)
        {
            if(y>=3&&y<=7)
                return true;
        }
        else
            return false;
    return false;
}

int main()
{
    int x,y;
    cin>>x;
    cin>>y;
    if(Prolaz(x,y)){
        cout<<"siguran";
    }else{
        cout<<"ne siguran";
    }
    return 0;
}