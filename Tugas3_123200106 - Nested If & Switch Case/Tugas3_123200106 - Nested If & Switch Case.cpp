#include <iostream>
#include <iomanip>
using namespace std;

int main(){
string user, pass;
int harian, uts, uas, matkul;
float nilaiakhir;

cout << "Login Akun" << endl;
cout << "-----------------" << endl;
cout << "Masukkan Username: "; cin >> user;

if (user == "admin"){
    cout << "Masukkan Password: "; cin >> pass;
    if (pass == "123"){
    cout << "--------------------" << endl;
    cout << "Anda berhasil login." << endl;
    cout << " " << endl;
    cout << "Input Nilai Mata Kuliah" << endl;
    cout << "1. Algoritma dan Pemrograman" << endl;
    cout << "2. Kalkulus" << endl;
    cout << "Pilih: "; cin >> matkul;

    switch(matkul){
      case 1:
        cout << " " << endl;
          cout << "Nilai Harian   : "; cin >> harian;
          cout << "Nilai UTS      : "; cin >> uts;
          cout << "Nilai UAS      : "; cin >> uas;
          nilaiakhir = (harian+uas+uts) / 3;
          if (nilaiakhir >= 80){
              cout << "-----------------------------------------------------" << endl;
              cout << "Anda lulus Algoritma dan Pemrograman dengan nilai " << fixed << setprecision(2) << nilaiakhir;
          }

          else{
              cout << "-----------------------------------------------------------------------" << endl;
              cout << "Anda tidak lulus mata kuliah Algoritma dan Pemrograman dengan nilai " << fixed << setprecision(2) << nilaiakhir;
              }
          break;

      case 2:
          cout << " " << endl;
          cout << "Nilai Harian   : "; cin >> harian;
          cout << "Nilai UTS      : "; cin >> uts;
          cout << "Nilai UAS      : "; cin >> uas;
          nilaiakhir = (harian+uas+uts) / 3;
          if (nilaiakhir >= 80){
              cout << "-----------------------------------------------------" << endl;
              cout << "Anda lulus Kalkulus dengan nilai " << setprecision(2) << fixed << nilaiakhir;
          }

          else{
              cout << "-----------------------------------------------------------------------" << endl;
              cout << "Anda tidak lulus mata kuliah Kalkulus dengan nilai " << fixed << setprecision(2) << nilaiakhir;
          break;

        default:
          cout << "Input anda salah!" << endl;
        }
    }
    }else{
        cout << "-----------------------------" << endl;
        cout << "Password anda salah!" << endl;
    }
}else if (user != "admin"){
    cout << "Masukkan Password: "; cin >> pass;
    if (pass == "123"){
cout << "-------------------------" << endl;
cout << "Username anda salah!" << endl;

    }else {
        cout << "---------------------------------------" << endl;
        cout << "Username dan password anda salah!" << endl;
    }
}
}

