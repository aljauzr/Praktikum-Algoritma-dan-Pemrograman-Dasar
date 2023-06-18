#include <iostream>
using namespace std;

int main(){
int pilih, p, l, t;
int i,j, k = 1;

cout << endl;
cout << "Gambar Bangun Datar ===========\n";
cout << "1. Kotak bolong\n";
cout << "2. Segitiga\n";
cout << "Pilih\t : "; cin >> pilih;
cout << endl;

    switch (pilih)
    {
        case 1:
        {
            cout << "Panjang\t : "; cin >> p;
            cout << "Lebar\t : "; cin >> l;

            for (int i = 0; i < p; i++)
            {
                for (int j = 0; j < l; j++)
                {
                    if (i == 0 || i == p-1 || j == 0 || j == l-1)
                    {
                    cout << "* ";
                    }
                    else
                    {
                    cout << "  ";
                    }
                }
                cout << endl;
            }
                break;
        }

        case 2:
        {
            cout << "Tinggi\t : "; cin >> t;

            for(i = 1; i <= t; i++)
            {
                for(j = 1; j <= i; ++j)
                {
                cout << k << " ";
                k++;
                }
                cout << endl;
            }
                break;
        }
    }

}
