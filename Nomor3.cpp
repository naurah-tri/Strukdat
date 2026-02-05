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
  
  return 0;
}
