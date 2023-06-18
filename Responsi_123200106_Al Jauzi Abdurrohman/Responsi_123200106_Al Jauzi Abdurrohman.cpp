/*  AL JAUZI ABDURROHMAN
    123200106
    RESPONSI PRAK ALGO  */

#include <iostream>
#include <windows.h>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int banyakmk[999], uts[999], uas[999], nilai[999], nilaiakhir[999];
int i, j, pilih, plusmhw, jumlahmhw = 0, jumlahmk = 0;
string nim[999], uname, pass, namamk[999], namamhw[999], carinama;

void tambahmhw()
{
	cout << "Masukkan banyak mahasiswa : "; cin >> plusmhw;

	if (jumlahmhw == 0)
    {
        for (i = 0; i < plusmhw; i++)
        {
		cout << "Masukkan data mahasiswa ke-" << i+1 << endl;
		cout << "Nama\t: "; cin.ignore(); getline (cin,namamhw[i]);
		cout << "NIM\t: "; cin >> nim[i];
		cout << "Banyak MK : "; cin >> banyakmk[i];
		jumlahmhw++;

            if (jumlahmk == 0)
            {
                for (j = 0; j < banyakmk[i]; j++)
                {
                    cout << "\tMatkul " << j+1 << endl;
                    cout << "\tNama\t: "; cin.ignore();getline (cin, namamk[j]);
                    cout << "\tUTS\t: "; cin >> uts[j];
                    cout << "\tUAS\t: "; cin >> uas[j];
                    cout << endl;
                    jumlahmk++;
                    nilai[j] = (uts[j]+uas[j])/2;
                }
            }

            else
            {
                for (j = jumlahmk; j < jumlahmk+banyakmk[i]; j++)
                {
                    cout << "\tMatkul " << j+1 << endl;
                    cout << "\tNama\t: "; cin.ignore();getline (cin, namamk[j]);
                    cout << "\tUTS\t: "; cin >> uts[j];
                    cout << "\tUAS\t: "; cin >> uas[j];
                    nilai[j] = (uts[j]+uas[j])/2;
                }
                jumlahmk = jumlahmk+banyakmk[10];
            }
        }
    }

    else
    {
        for (i = jumlahmhw; i < jumlahmhw + plusmhw; i++)
        {
		cout << "Masukkan data mahasiswa ke-" << i+1 << endl;
		cout << "Nama\t: "; cin.ignore(); getline (cin,namamhw[i]);
		cout << "NIM\t: "; cin >> nim[i];
		cout << "Banyak MK : "; cin >> banyakmk[i];

            if (jumlahmk == 0)
            {
                for (j = 0; j < banyakmk[i]; j++)
                {
                    cout << "\tMatkul " << j+1 << endl;
                    cout << "\tNama\t: "; cin.ignore();getline (cin, namamk[j]);
                    cout << "\tUTS\t: "; cin >> uts[j];
                    cout << "\tUAS\t: "; cin >> uas[j];
                    cout << endl;
                    jumlahmk++;
                    nilai[j] = (uts[j]+uas[j])/2;
                }
            }

            else
            {
                for (j = jumlahmk; j < jumlahmk + banyakmk[i]; j++)
                {
                    cout << "\tMatkul " << j+1 << endl;
                    cout << "\tNama\t: "; cin.ignore();getline (cin, namamk[j]);
                    cout << "\tUTS\t: "; cin >> uts[j];
                    cout << "\tUAS\t: "; cin >> uas[j];
                    cout << endl;
                    nilai[j] = (uts[j]+uas[j])/2;
                }
            }
            jumlahmk = jumlahmk+banyakmk[10];
        }
        jumlahmhw = jumlahmhw+plusmhw;
    }

	cout << "\nBerhasil memasukkan data mahasiswa" << endl;
	cout << "\n\nPress any key to continue . . .";
}

void lihatmhw()
{
	cout << "Jumlah mahasiswa : " << jumlahmhw << endl;

	if (jumlahmhw == 0)
	{
		cout << "\n\nPress any key to continue . . .";
	}

	else
	{
		for (i = 0; i < jumlahmhw; i++)
		{
			cout << "Data mahasiswa ke-" << i+1 << endl;
			cout << "Nama\t: " << namamhw[i] << endl;
			cout << "NIM\t: " << nim[i] << endl;

                for (j = 0; j < banyakmk[i]; j++)
                {
                    cout << "\tMatkul " << j+1 << endl;
                    cout << "\tNama\t: " << namamk[j] << endl;
                    cout << "\tNilai\t: " << nilai[j] << endl;
                }
            nilaiakhir[j] = (nilai[0]+nilai[1])/2;
            cout << "Nilai akhir : " << nilaiakhir[j] << endl;
        }
		}
		cout << "\n\nPress any key to continue . . .";
	}

void carimhw()
{
	cout << "Cari nama mahasiswa : "; cin >> carinama;

		for (i = 0; i < jumlahmhw; i++)
        {
            if (carinama == namamhw[i])
            {
            cout << "Data ditemukan" << endl;
            cout << "Data mahasiswa ke-" << i+1 << endl;
            cout << "Nama\t: " << namamhw[i] << endl;
            cout << "NIM\t: " << nim[i] << endl;

                for (j = 0; j < banyakmk[i]; j++)
                {
                    cout << "\tMatkul " << j+1 << endl;
                    cout << "\tNama\t: " << namamk[j] << endl;
                    cout << "\tNilai\t: " << nilai[j] << endl;
                }
                nilaiakhir[i] = (nilai[0]+nilai[1])/2;
                cout << "Nilai Akhir : " << nilaiakhir[i] << endl;
            }

            else
            {
            cout << "Data tidak ditemukan" << endl;
            }
        }

	cout << "\n\nPress any key to continue . . .";
}

int menu()
{
	START:
    system ("cls");
	cout << "Menu" << endl;
	cout << "1. Tambah Mahasiswa\n2. Lihat Mahasiswa\n3. Cari Mahasiswa\n4. Logout\n";
	cout << "Pilih: "; cin >> pilih;

	switch(pilih)
	{
		case 1:
		tambahmhw();
		break;

		case 2:
		lihatmhw();
		break;

		case 3:
		carimhw();
		break;

		case 4:
		return 0;
		cin.get();
		break;

		default:
		cout << "Salah Input" << endl;
		getch();
		goto START;
		break;
	}

	getch();
	goto START;
}

int login()
{
	START:
	cout << "Login Admin" << endl;
	cout << "Username : "; cin >> uname;
	cout << "Password : "; cin >> pass;

	if (uname == "admin" && pass == "admin123")
	{
		cout << "Login sukses" << endl;
		cout << "\n\nPress any key to continue . . .";
		getch();
		menu();
	}

	else if (uname == "admin" && pass != "admin123")
	{
		cout << "Password salah\n" << endl;
		goto START;
	}

	else if (uname != "admin" && pass == "admin123")
	{
		cout << "Username salah\n" << endl;
		goto START;
	}

	else
	{
		cout << "Username dan Password salah\n" << endl;
		goto START;
	}
    return 0;
    cin.get();
}

int main()
{

    system("cls");
    login();
    system("cls");
    login();
    system("cls");
    login();
    system("cls");
    login();
    system("cls");
    login();
    system("cls");
    login();
    system("pause");
    return 0;

}
