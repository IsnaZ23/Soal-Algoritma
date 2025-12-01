#include <iostream>
using namespace std;

int main() {
    string buah;
    int jumlah;
    int total = 0;
    char lagi;
    int harga = 0;

do {
        cout <<"==============Toko Segar Jaya================= \n";
        cout <<"1. Apel \n";
        cout <<"2. Jeruk \n";
        cout <<"3. Anggur \n";
        cout <<"============================================== \n";
bool namaValid = false;
harga = 0;
while(!namaValid){
        cout << "Masukkan nama buah yang ingin dibeli (apel/jeruk/anggur) : ";
        cin >> buah;
        if (buah == "apel" || buah == "Apel") {
            harga = 10000;
            namaValid = true;
        } else if (buah == "jeruk" || buah == "Jeruk") {
            harga = 8000;
            namaValid = true;
        } else if (buah == "anggur" || buah == "Anggur") {
            harga = 15000;
            namaValid = true;
        } else {
            cout << "Buah tidak tersedia!\n";       
        }
}

        cout << "Jumlah beli : ";
        cin >> jumlah;

        int subtotal = harga * jumlah;
        total += subtotal;
        cout << "Subtotal: " << subtotal << endl;

cout << "Tambah buah lain? (y/n): ";
cin >> lagi;
} while (lagi == 'y' || lagi == 'Y');

    cout << "\nTotal Belanja Anda: " << total << endl;

    return 0;
}
