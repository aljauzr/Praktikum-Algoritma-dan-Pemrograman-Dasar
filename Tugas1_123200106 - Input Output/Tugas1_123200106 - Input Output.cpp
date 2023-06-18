#include <iostream>
using namespace std;

int main() {
  string nama;
  int nilai_UTS;
  int nilai_UAS;
  string nim;

  cout << "Nama: ";
  getline(cin, nama);
  cout << "NIM: ";
  getline(cin, nim);
  cout << "Nilai UTS: ";
  cin >> nilai_UTS;
  cout << "Nilai UAS: ";
  cin >> nilai_UAS;

  cout << "Halo " << nama << endl;
  cout << "NIM kamu " << nim << endl;
  cout << "Nilai akhirmu adalah " << (nilai_UTS+nilai_UAS)/2 << endl;
}
