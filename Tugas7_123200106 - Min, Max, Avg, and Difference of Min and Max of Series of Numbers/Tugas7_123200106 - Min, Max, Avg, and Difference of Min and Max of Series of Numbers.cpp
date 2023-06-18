#include <iostream>
using namespace std;

int main()
{
	int i, input;
	cout << "Masukkan banyak angka : ";
	cin >> input;

	double banyak_angka[input];
	double selisih[input];

	for (i = 0; i < input; i++)
	{
		cout << "Angka ke-" << i+1 << "\t: ";
		cin >> banyak_angka[i];
	}

	cout << "\n\n______Hasil______";
	cout << "\nDeret\t\t: ";

	for (i=0; i < input; i++)
    {
        cout << banyak_angka[i] << " ";
    }

    double max = banyak_angka[0];
    double min = banyak_angka[0];

    for (i=0; i < input; i++)
    {
        if(banyak_angka[i] > max)
        {
            max = banyak_angka[i];
        }
        if(banyak_angka[i] < min)
        {
            min = banyak_angka[i];
        }
    }

    cout << "\nMaksimum\t: " << max;

    cout << "\nMinimum\t\t: " << min;

    double jumlah = 0;

    for (i=0; i < input; i++)
    {
        jumlah = jumlah + banyak_angka[i];
    }

    double ratarata = jumlah/input;
    cout << "\nRata-rata\t: " << ratarata;

    double selisihmaks = 0;
    for (i=0; i < input; i++)
    {
    	selisih[i] = banyak_angka[i] - banyak_angka[i+1];

    	if(i == input - 1)
    	{
			selisih [i] = banyak_angka[i-1] - banyak_angka[i];
    	}
    	if (selisih[i] < 0)
    	{
    		selisih[i] = selisih[i] * -1;
    	}
    	if (selisih[i] >= selisihmaks)
    	{
    		selisihmaks = selisih[i];
    	}

    }

    cout << "\nSelisih Maks\t: " << selisihmaks << "\n\n";

	system("pause");
	return 0;
	cin.get();
}
