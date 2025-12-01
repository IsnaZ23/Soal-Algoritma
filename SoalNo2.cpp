#include <iostream>
using namespace std;
//===========================================================
void lihat(){
    cout << "\n=== DAFTAR BUKU ===\n";
    cout << "1. Algoritma Dasar      - Rp50000\n";
    cout << "2. Struktur Data        - Rp65000\n";
    cout << "3. Pemrograman C++      - Rp70000\n";
    cout << "4. Basis Data           - Rp60000\n";
    cout << "5. Jaringan Komputer    - Rp55000\n";
}
//===========================================================
void toko(){
    cout << "\n===== TOKO BUKU SEDERHANA =====\n";
    cout << "1. Lihat Daftar Buku\n";
    cout << "2. Tambah Buku ke Keranjang\n";
    cout << "3. Pembayaran\n";
    cout << "4. Keluar\n";
    cout << "Pilih menu : ";
}
int main() {
    int pilihan;
    int totalBayar = 0;
    char ulang;

do {
    toko();
    cin >> pilihan;

    switch(pilihan) {
    case 1:
    lihat();
    break;
    
    case 2:
do {
        int pilih, jumlah, harga = 0;
        cout << "\n=== PILIH BUKU ===\n";
        cout << "1. Algoritma Dasar\n";
        cout << "2. Struktur Data\n";
        cout << "3. Pemrograman C++\n";
        cout << "4. Basis Data\n";
        cout << "5. Jaringan Komputer\n";
        cout << "Pilih nomor buku : ";
        cin >> pilih;

        if(pilih == 1) harga = 50000;
        else if(pilih == 2) harga = 65000;
        else if(pilih == 3) harga = 70000;
        else if(pilih == 4) harga = 60000;
        else if(pilih == 5) harga = 55000;
        else {
                cout << "Pilihan tidak valid!\n";
                continue;
        }
        cout << "Masukkan jumlah : ";
        cin >> jumlah;

        if(jumlah <= 0){
                cout << "Jumlah tidak valid!\n";
                continue;
        }

        int subtotal = harga * jumlah;
        totalBayar += subtotal;
        cout << "Ditambahkan ke keranjang.\n";
        cout << "Subtotal : Rp" << subtotal << endl;
    cout << "Tambah buku lagi? (y/n): ";
    cin >> ulang;
} while(ulang == 'y' || ulang == 'Y');
    break;

    case 3:
    cout << "\n=== PEMBAYARAN ===\n";
    if(totalBayar == 0){
    cout << "Keranjang masih kosong.\n";
    } else {
        cout << "TOTAL BAYAR : Rp" << totalBayar << endl;
    }
    break;

    case 4:
    cout << "\nTerima kasih sudah berbelanja!\n";
    break;
    default:
        cout << "\nPilihan tidak valid!\n";
        break;
    }

    } while(pilihan != 4);

    return 0;
}