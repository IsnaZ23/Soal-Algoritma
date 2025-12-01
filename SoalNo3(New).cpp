#include <iostream>
using namespace std;


double hitungRata(double n1, double n2, double n3) {
    return (n1 + n2 + n3) / 3.0;
}


void cekStatus(double rata) {
    if (rata >= 75) {
        cout << "Status       : Lulus" << endl;
    } else {
        cout << "Status       : Tidak Lulus" << endl;
    }
}

int main() {
    char nama[50]; 
    double harian, uts, uas;

    cout << "=== SISTEM NILAI SISWA ===" << endl;
    cout << "Nama siswa   : ";
    cin.getline(nama, 50);
    cout << "Nilai Harian : ";
    cin >> harian;
    cout << "Nilai UTS    : ";
    cin >> uts;
    cout << "Nilai UAS    : ";
    cin >> uas;

    double rata = hitungRata(harian, uts, uas);

    cout << "\n--- HASIL ---" << endl;
    cout << "Nama         : " << nama << endl;
    cout << "Rata-rata    : " << rata << endl;
    cekStatus(rata);

    return 0;
}
