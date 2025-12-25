#include <iostream>
using namespace std;

int wrap(int x){
    x = x % 12;
    if(x <= 0) x += 12;
    return x;
}

int main(){
    string nama;
    int nim;
    int warna;
    char pilihan;

    cout << "-------------------------------------------------------\n";
    cout << "Nama : ";
    getline(cin, nama);
    cout << "NIM : ";
    cin >> nim;
    cout << "-------------------------------------------------------\n\n";

    cout << "Program Menentukan Notasi, Sifat Warna, dan Perpaduan Warna Harmonis\n";
    cout << "Warna-warna :\n";
    cout << "1. Orange        2. Red-Orange      3. Red\n";
    cout << "4. Red-Violet    5. Violet          6. Blue-Violet\n";
    cout << "7. Blue          8. Blue-Green      9. Green\n";
    cout << "10. Yellow-Green 11. Yellow         12. Yellow-Orange\n\n";
    cout << "Pilihan warna nomor (1-12) : ";
    cin >> warna;
    if(warna > 12){
        cout<<"Warna tidak valid. ";
        return 0;
    }

    cout << endl;


    cout << "Notasi Warna : ";
    if(warna==3 || warna==7 || warna==11) 
    cout<<"Primer\n";
    else if(warna==1 || warna==5 || warna==9) 
    cout<<"Sekunder\n";
    else 
    cout<<"Tersier\n";

    cout << "Sifat Warna : ";
    if(warna >= 1 && warna <= 6) 
    cout<<"Warna Hangat\n";
    else 
    cout<<"Warna Sejuk\n";


    cout << "\nPerpaduan Warna Harmonis\n";
    cout << "a. Analogous\n"; //berdempetan 
    cout << "b. Complementary\n"; //lawan arah
    cout << "c. Split Complementary\n"; //sudut 180
    cout << "d. Triadic Complementary\n";
    cout << "e. Tetrad Complementary\n";
    cout << "Pilihan : ";
    cin >> pilihan; //jika inputan masih di range 1-12 maka tidak akan melakukan fungsi
    cout<<endl;


    cout << "Perpaduan Warna:\n";

    switch(pilihan){
//misal warna = 1
        case 'a': case 'A':
            cout<<"Analogous : ";
            cout<< wrap(warna-1) << ", " //dicek warp karena hasilnya 0 jadi 12
                << warna << ", "
                << wrap(warna+1)
                <<", ";

            cout<< wrap(warna+1) << ", " //dicek warp karena hasilnya 0 jadi 12
                << warna << ", "
                << wrap(warna+3)
                <<", ";

            cout<< wrap(warna-1) << ", " //dicek warp karena hasilnya 0 jadi 12
                << warna << ", "
                << wrap(warna+10);

            break;

        case 'b': case 'B':
            cout<<"Complementary : ";
            cout<< warna << " dan "<< wrap(warna+6);
            break;

        case 'c': case 'C':
            cout<<"Split Complementary : ";
            cout<< warna << ", "
                << wrap(warna+5) << ", "
                << wrap(warna+7);
            break;

        case 'd': case 'D':
            cout<<"Triadic : ";
            cout<< warna << ", "
                << wrap(warna+4) << ", "
                << wrap(warna+8);
            break;

        case 'e': case 'E':
            cout<<"Tetrad : ";
            cout<< warna << ", "
                << wrap(warna+3) << ", "
                << wrap(warna+6) << ", "
                << wrap(warna+9);
            break;

        default:
            cout <<"Pilihan Tidak Valid!";
    }

    cout<<endl;
    return 0;
}

