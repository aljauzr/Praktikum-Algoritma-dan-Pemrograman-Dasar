#include <iostream>
#include <windows.h>

using namespace std;

int main (){
int pilih, x, y;
int i, j;
string nama, nim;
int kuis, respon, tugas, proj, rata;
string p1, p2, rps1, rps2;
int round, menkal1 = 0, menkal2 = 0;


cout << "KUISSS ================" <<endl;
cout << "1. Deret Unik" << endl;
cout << "2. NIlai Akhir" << endl;
cout << "3. Gunting Batu Kertas <Bonus>" << endl;
cout << "4. Keluar" << endl;
cout << "Pilih: "; cin >> pilih;
    switch (pilih)
    {
        case 1:
            {
            cout << "X : "; cin >> x;
            cout << "Y : "; cin >> y;
            cout << endl;

            for (i = 1; i <= y; i++)
            {
                if (i%x == 0)
                {
                    cout << "|";
                }
                else
                {
                    cout <<"-";
                }
            }
            break;
            }

        case 2:
            {
            cout << endl;
            cout << "Input Nilai Praktikum =========" << endl;
            cin.ignore();
            cout << "Nama\t\t : ";
            getline(cin, nama);
            cout << "NIM\t\t : "; cin >> nim;
            cout << "Kuis\t\t : "; cin >> kuis;
            cout << "Responsi\t : "; cin >> respon;
            cout << "Tugas\t\t : "; cin >> tugas;
            cout << "Project\t\t : "; cin >> proj;
            cout << "\n\n";

            cout << "Hasil Akhir ===================" << endl;
            cout << "Nama\t\t : " << nama << endl;
            cout << "NIM\t\t : " << nim << endl;

            string first_three = nim.substr(0,3);
            if (first_three == "121"){
              cout << "Jurusan\t\t : "<< "Teknik Kimia" << endl;
            }
            else if (first_three == "122"){
              cout << "Jurusan\t\t : "<< "Teknik Industri" << endl;
            }
            else if (first_three == "123"){
              cout << "Jurusan\t\t : "<< "Informatika" << endl;
            }
            else if (first_three == "124"){
              cout << "Jurusan\t\t : "<< "Sistem Informasi" << endl;
            }
            else{
              cout << "Jurusan\t\t : Salah Jurusan" << endl;
            }

            rata = (0.2*kuis) + (0.35*respon) + (0.15*tugas) + (0.3*proj);
            cout << "Rata-rata\t : " << rata << endl;
            if (rata >= 80 && rata <= 100 )
            {
                cout << "Nilai huruf\t : A" << endl;
            }
            else if (rata >= 60 && rata < 80)
            {
                cout << "Nilai huruf\t : B" << endl;
            }
            else if (rata >= 40 && rata < 60)
            {
                cout << "Nilai huruf\t : C" << endl;
            }
            else if ( rata >= 20 && rata < 40)
            {
                cout << "Nilai huruf\t : D" << endl;
            }
            else if ( rata < 20)
            {
                cout << "Nilai huruf\t : E" << endl;
            }

            if (rata >= 60)
            {
                cout << "Selamat anda lulus praktikum" << endl;
            }
            else
            {
                cout << "Mohon maaf anda belum lulus praktikum" << endl;
            }
            break;
            }

        case 3:
            cin.ignore();
            cout << "Masukkan nama player 1 : "; getline(cin, p1);
            cout << "Masukkan nama player 2 : "; getline(cin, p2);
            cout << "Masukkan banyak ronde : "; cin >> round;

            for (i = 1; i <= round; i++)
            {
                cout << endl;
                cout << "Ronde ke-" << i << endl;
                cout << "Masukkan kertas/gunting/batu " << p1 << " : "; cin >> rps1;
                cout << "Masukkan kertas/gunting/batu " << p2 << " : "; cin >> rps2;
            }

            if (rps1 == "kertas")
            {
                if (rps2 == "kertas")
                {
                    menkal1 = menkal1 + 0;
                }
                else if (rps2 == "gunting")
                {
                    menkal2 = menkal2 + 1;
                }
                else if (rps2 == "batu")
                {
                    menkal1 = menkal1 + 1;
                }
                else
                {
                    menkal1 = menkal1 + 0;
                }
            }

            if (rps1 == "gunting")
            {
                if (rps2 == "kertas")
                {
                    menkal1 = menkal1 + 1;
                }
                else if (rps2 == "gunting")
                {
                    menkal1 = menkal1 + 0;
                }
                else if (rps2 == "batu")
                {
                    menkal2 = menkal2 + 1;
                }
                else
                {
                    menkal1 = menkal1 + 0;
                }
            }

            if (rps1 == "batu")
            {
                if (rps2 == "kertas")
                {
                    menkal2 = menkal2 + 1;
                }
                else if (rps2 == "gunting")
                {
                    menkal1 = menkal1 + 1;
                }
                else if (rps2 == "batu")
                {
                    menkal1 = menkal1 + 0;
                }
                else
                {
                    menkal1 = menkal1 + 0;
                }
            }

            cout << endl;
            cout << "_____Hasil Akhir_____" << endl;

            cout << p1 << " menang " << menkal1 << " kali " << endl;
            cout << p2 << " menang " << menkal2 << " kali " << endl;

            if (menkal1 > menkal2)
            {
                cout << "Jadi pemenangnya adalah " << p1 << endl;
            }
            else if (menkal1 < menkal2)
            {
                cout << "Jadi pemenangnya adalah " << p2 << endl;
            }
            else if (menkal1 = menkal2)
            {
                cout << "Pertandingan seri" << endl;
            }
            break;

        case 4:
            return(0);

        default:
            cout << "Mohon maaf anda salah input" << endl;


        system("pause");
	return 0;

    }

}
