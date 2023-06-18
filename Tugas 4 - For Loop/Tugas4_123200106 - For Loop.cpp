#include <iostream>
using namespace std;

int main(){
int kalpang, a, b, c;
int i = 0;
int hasil_kali = 0;
int hasil_pangkat = 1;

cout << "1. Perkalian" <<endl;
cout << "2. Perpangkatan" << endl;
cout << "--------------------------" <<endl;
cout << "Pilih: "; cin >> kalpang;
    switch(kalpang){
        case 1:
            cout << "Masukkan nilai A: "; cin >> a;
            cout << "Masukkan nilai B: "; cin >> b; cout << endl;
            cout << "Hasil kali " << a << " x " << b << endl;
            for (int i = 0;i < a; i++){
              cout << b << " + ";
              hasil_kali += b;
            }
            cout << "\b\b";
            cout << "= " << hasil_kali << endl;
            cout << endl;
            cout << "      Arigathanks :D      " << endl;
            cout << "--------------------------" <<endl;
            break;

        case 2:
            cout << "Masukkan nilai A: "; cin >> a;
            cout << "Masukkan nilai B: "; cin >> b; cout << endl;
            cout << "Hasil perpangkatan " << a << "^" << b << endl;
            for (int i = 0;i < b; i++){
                cout << a << " * ";
                hasil_pangkat *= a;
            }
            cout << "\b\b";
            cout << " = " << hasil_pangkat << endl;
            cout << endl;
            cout << "      Arigathanks :D      " << endl;
            cout << "--------------------------" <<endl;
            break;
          }
}
