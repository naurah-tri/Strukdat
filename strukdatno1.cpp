#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

struct Mahasiswa {
    char nama[50];
    int nim;
    float ipk;
};

int main (){
    int n;
    cin >> n;
    getchar();
    struct Mahasiswa mhs[n];
    for(int i=1; i<=n ; i++ ){
        fgets(mhs[i].nama, 50, stdin);
        cin >> mhs[i].nim >> mhs[i].ipk;
        getchar();
    }
    cout << "Data Mahasiswa:\n";
    for(int i=1 ; i<=n ; i++){
        cout << "Nama: " << mhs[i].nama;
        cout << "NIM: " << mhs[i].nim << "\n";
        cout << "IPK: " << fixed << setprecision(2) << mhs[i].ipk << "\n";
    }

    return 0;
}