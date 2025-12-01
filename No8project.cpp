#include <iostream>
using namespace std;

const int MAKS_TIM = 13;
const int MAKS_HURUF = 10;

char tim[MAKS_TIM][MAKS_HURUF];
int jumlahTim = 0;

void inputTim() {
    cout << "\n=== INPUT DATA TIM PESERTA ===\n";
    for (int i = 0; i < MAKS_TIM; i++) {
        cout << "Masukkan nama tim ke-" << i + 1 ;
        cin >> tim[i];          
    }
    jumlahTim = MAKS_TIM;
    cout << "\n>> Input selesai.\n";
}


void tampilTim() {
    if (jumlahTim == 0) {
        cout << "\nBelum ada data tim.\n";
        return;
    }

    cout << "\n=== DAFTAR TIM PESERTA ===\n";
    int i = 0;

    while (i < jumlahTim) {
        cout << i + 1 << ". " << tim[i] << endl;
        i++;
    }
}

 
int main() {
    int pilihan;

    do {
        cout << "\n====================================\n";
        cout << "   PROGRAM DATA TIM PIALA DUNIA\n";
        cout << "====================================\n";
        cout << "1. Input Data Tim\n";
        cout << "2. Tampilkan Data Tim\n";
        cout << "3. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
        case 1:
            inputTim();
            break;
        case 2:
            tampilTim();
            break;
        case 3:
            cout << "\nTerima kasih!\n";
            break;
        default:
            cout << "Pilihan tidak valid!\n";
        }

    } while (pilihan != 3);

    return 0;
}

