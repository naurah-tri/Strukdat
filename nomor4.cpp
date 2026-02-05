// Online C++ compiler to run C++ program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;


//Struktur data
struct Mahasiswa{
    char nama[50];
    int nim;
    float ipk;
};

int main() {
  
  int n;
  cin >> n;
  getchar();
  vector<Mahasiswa> vekmaha;
  
  for(int i=1; i<=n; i++){
    Mahasiswa mhs;
    fgets(mhs.nama, 50, stdin);
    cin >> mhs.nim >> mhs.ipk;
    getchar();
    vekmaha.push_back(mhs);
  }
  
  cout << "Data Mahasiswa: \n";
  for(auto x : vekmaha){
    cout << "Nama: "<< x.nama;
    cout << "NIM: "<< x.nim<< "\n";
    cout << "IPK: "<< fixed << setprecision(2)<< x.ipk<<
    "\n";
  }

  // NOMOR 4

  //mahasiswa 1
  Mahasiswa mhs1;
  strcpy(mhs1.nama, "Naura");
  mhs1.nim = 10234;
  mhs1.ipk = 3.97;
  vekmaha.push_back(mhs1);

  // mahasiswa 2
  Mahasiswa mhs2;
  strcpy(mhs2.nama, "Naurah");
  mhs2.nim = 34924;
  mhs2.ipk = 4.00;
  vekmaha.push_back(mhs2);

  cout << "Vektor Mahasiswa setelah penambahan 2 mahasiswa baru: " << endl;
  for(auto x : vekmaha){
    cout << "Nama: " << x.nama << endl;
    cout << "NIM : " << x.nim << endl;
    cout << "IPK : " << fixed << setprecision(2) << x.ipk << endl;

  }
  return 0;
}
