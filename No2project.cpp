#include <iostream>
using namespace std;

void balikKalimat(char kalimat[]) {
    char kata[10][50]; //10 kata // 50 huruf
    int j = 0, k = 0;

//mengechek kalimat yang isinya panjang dari 0 sampai kalimat
    int panjang = 0;
    while (kalimat[panjang] != '\0') {
        panjang++;
    }

    for (int i = 0; i <= panjang; i++) {
        if (kalimat[i] == ' ' || kalimat[i] == '\0') { 
            // jika ada spasi dan akhir dari \0 maka meakukan
            kata[j][k] = '\0'; //tutup kata
            k = 0; //reset
            j++;               
        } else {
            kata[j][k++] = kalimat[i]; //jika tidak ada spasi
        }
    }

    cout << "hasil  = ";
   // misal j = 3 (saya makan ayam = 0,1,2)
    for (int i = j - 1; i >= 0; i--) {
        cout << kata[i];
        if (i > 0) cout << " ";
    }
    cout << endl;
}

int main() {
    char kalimat[200];

    cout << "kalimat = ";
    cin.getline(kalimat, 200); 
    balikKalimat(kalimat);

    return 0;
}

