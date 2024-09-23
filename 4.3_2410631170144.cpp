#include <iostream>
using namespace std;

int main () {
    int n ;

    while (true) {
    //meminta input
    cout<< "Masukan tinggi piramida :";
    cin>> n;
    //deklarasi variabel
    int i,j,k;

    //cetak baris
    for (int i = 1; i <= n; ++i ) {
        // cetak spasi
        for (int j = i; j <= n  ; ++j ) {
        cout << " " ;
        }

        //cetak bintang
        for (int j = 1 ; j <= 2 * i - 1 ; ++j) {
        cout << "*";
        }

    cout << endl;
    }
    }
    return 0;

    }
