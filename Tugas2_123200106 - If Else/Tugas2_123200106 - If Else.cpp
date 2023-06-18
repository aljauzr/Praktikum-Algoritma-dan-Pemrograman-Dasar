#include <iostream>
using namespace std;
int main(){
int ay, ib, a1, a2, tagihan;
int anak = 15000;
int remaja = 20000;
int dewasa = 30000;

cout << "Umur Ayah          = ";
cin >> ay;
cout << "Umur Ibu           = ";
cin >> ib;
cout << "Umur Anak Pertama  = ";
cin >> a1;
cout << "Umur Anak Kedua    = ";
cin >> a2;

if(ay > 20){
ay = dewasa;}
else if(ay >= 12 && ay <=20){
ay = remaja;
}else{
ay = anak;
}

if(ib > 20){
ib = dewasa;}
else if(ib >= 12 && ib <=20){
ay = remaja;
}else{
ib = anak;
}

if(a1 > 20){
a1 = dewasa;}
else if(a1 >= 12 && a1 <=20){
a1 = remaja;
}else{
a1 = anak;
}

if(a2 > 20){
a2 = dewasa;}
else if(a2 >= 12 && a2 <=20){
a2 = remaja;
}else{
a2 = anak;
}

tagihan = (ay*30)+(ib*30)+(a1*30)+(a2*30);
cout << "Tagihan untuk satu bulan adalah Rp" << tagihan << endl;
}
