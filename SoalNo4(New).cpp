#include <iostream>
using namespace std;

int main() {
    char tambahPesanan;
    int pilihan, jumlah;
    double totalBayar = 0.0;
    const int JUMLAH_MENU = 6;

    string menu[JUMLAH_MENU] = {
         "1. Nasi Goreng  - Rp15.000",
         "2. Mie Ayam     - Rp12.000",
         "3. Ayam Goreng  - Rp18.000",
         "4. Es Teh Manis - Rp5.000",
         "5. Jus Jeruk    - Rp8.000",
         "6. Air Mineral  - Rp3.000"
    };

    double harga[JUMLAH_MENU] = {15000, 12000, 18000, 5000, 8000, 3000};

    cout << "======================================" << endl;
    cout << "   SELAMAT DATANG DI RESTORAN KITA!"    << endl;
    cout << "======================================" << endl;

    cout << "\n--- MENU MAKANAN & MINUMAN ---\n";
    for (int i = 0; i < JUMLAH_MENU; i++) {
        cout << menu[i] << endl;
    }

    do {
        cout << "\nPilih menu (1-6): ";
        cin >> pilihan;

        if (pilihan < 1 || pilihan > JUMLAH_MENU) {
            cout << "Pilihan tidak valid! Silakan pilih angka 1-6.\n";
            continue;
        }

        cout << "Jumlah: ";
        cin >> jumlah;

        if (jumlah <= 0) {
            cout << "Jumlah harus lebih dari 0!\n";
            continue;
        }

        double subtotal = harga[pilihan - 1] * jumlah;
        totalBayar += subtotal;

        
        cout << "Anda memesan: " << menu[pilihan - 1] 
             << " x" << jumlah << " = Rp" << subtotal << endl;

        cout << "\nTambah pesanan? (y/n): ";
        cin >> tambahPesanan;

        while (tambahPesanan != 'y' && tambahPesanan != 'Y' && 
               tambahPesanan != 'n' && tambahPesanan != 'N') {
            cout << "Masukkan 'y' untuk ya atau 'n' untuk tidak: ";
            cin >> tambahPesanan;
        }

    } while (tambahPesanan == 'y' || tambahPesanan == 'Y');

    cout << "\n======================================" << endl;
    cout << "TOTAL YANG HARUS DIBAYAR: Rp" << totalBayar << endl;
    cout << "Terima kasih telah makan di restoran kami! " << endl;
    cout << "======================================" << endl;

    return 0;
}
