#include <iostream>
using namespace std;

int main() {
    char nama[50], nim[20];
    int warna;
    char pilih;

    cout << "--------------------------------------------------------------\n";
    cout << " Nama : ";
    cin >> nama;
    cout << " NIM  : ";
    cin >> nim;
    cout << "--------------------------------------------------------------\n";

    cout << "Program Menentukan Notasi, Sifat Warna, dan Perpaduan Warna Harmonis\n";
    cout << "Warna-warna:\n";
    cout << " 1. Orange        2. Red-Orange    3. Red\n";
    cout << " 4. Red-Violet    5. Violet        6. Blue-Violet\n";
    cout << " 7. Blue          8. Blue-Green    9. Green\n";
    cout << "10. Yellow-Green 11. Yellow       12. Yellow-Orange\n\n";

    cout << "Pilihan warna nomor : ";
    cin >> warna;
    cout << endl;

    
    cout << "Notasi warna : ";
    if (warna % 3 == 0)                
        cout << "Sekunder\n";
    else
        cout << "Primer\n";

    cout << "Sifat warna : ";
    if (warna >= 1 && warna <= 6)
        cout << "Hangat\n";
    else
        cout << "Dingin\n";

    cout << "\nPerpaduan Warna Harmonis\n";
    cout << "a. Perpaduan Warna Analogous\n";
    cout << "b. Perpaduan Warna Complementary\n";
    cout << "c. Perpaduan Warna Split Complementary\n";
    cout << "d. Perpaduan Warna Triadic Complementary\n";
    cout << "e. Perpaduan Warna Tetrad Complementary\n";
    cout << "Pilihan : ";
    cin >> pilih;
    cout << endl;

    cout << "Perpaduan warna ";

    
    switch (pilih) {
        case 'a':
        case 'A':
            cout << "Analogous dengan warna nomor :\n";
            cout << warna - 1 << ", " << warna + 1;
            break;

        case 'b':
        case 'B':
            cout << "Complementary dengan warna nomor :\n";
            cout << warna + 6;
            break;

        case 'c':
        case 'C':
            cout << "Split Complementary dengan warna nomor :\n";
            cout << warna + 5 << " dan " << warna + 7;
            break;

        case 'd':
        case 'D':
            cout << "Triadic Complementary dengan warna nomor :\n";
            cout << warna + 4 << " dan " << warna + 8;
            break;

        case 'e':
        case 'E':
            cout << "Tetrad Complementary dengan warna nomor :\n";
            cout << warna + 3 << ", " << warna + 6 << ", " << warna + 9;
            break;

        default:
            cout << "Tidak valid!";
    }

    cout << endl;

    return 0;
}

	
