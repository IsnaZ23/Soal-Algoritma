#include <iostream>
using namespace std;
int main(){
int angka;
cout<<"Masukkan angka (1-99): ";
cin>>angka;
cout<<"Tebilang : ";
if(angka<1 || angka>99){
    cout<<"Tidak ada pilihan"<<endl;
}
if(angka <= 11){
    if(angka == 1){
        cout<<"Satu"<<endl;
    }else if(angka == 2){
        cout<<"Dua"<<endl;
    }else if(angka == 3){
        cout<<"Tiga"<<endl;
    }else if(angka == 4){
        cout<<"Empat"<<endl;
    }else if(angka == 5){
        cout<<"Lima"<<endl;
    }else if(angka == 6){
        cout<<"Enam"<<endl;
    }else if(angka == 7){
        cout<<"Tujuh"<<endl;
    }else if(angka == 8){
        cout<<"Delapan"<<endl;
    }else if(angka == 9){
        cout<<"Sembilan"<<endl;
    }else if(angka == 10){
        cout<<"Sepuluh"<<endl;
    }else if(angka == 11){
        cout<<"Sebelas"<<endl;
    }
}else if (angka < 20) {
int satuan = angka % 10;
    if (satuan == 2) cout << "dua belas";
    else if (satuan == 3) cout << "tiga belas";
    else if (satuan == 4) cout << "empat belas";
    else if (satuan == 5) cout << "lima belas";
    else if (satuan == 6) cout << "enam belas";
    else if (satuan == 7) cout << "tujuh belas";
    else if (satuan == 8) cout << "delapan belas";
    else if (satuan == 9) cout << "sembilan belas";
} else {
int puluhan = angka / 10;
int satuan = angka % 10;
    if (puluhan == 2) cout << "dua puluh";
    else if (puluhan == 3) cout << "tiga puluh";
    else if (puluhan == 4) cout << "empat puluh";
    else if (puluhan == 5) cout << "lima puluh";
    else if (puluhan == 6) cout << "enam puluh";
    else if (puluhan == 7) cout << "tujuh puluh";
    else if (puluhan == 8) cout << "delapan puluh";
    else if (puluhan == 9) cout << "sembilan puluh";

    if (satuan != 0) {
        cout << " ";
        if (satuan == 1) cout << "satu";
        else if (satuan == 2) cout << "dua";
        else if (satuan == 3) cout << "tiga";
        else if (satuan == 4) cout << "empat";
        else if (satuan == 5) cout << "lima";
        else if (satuan == 6) cout << "enam";
        else if (satuan == 7) cout << "tujuh";
        else if (satuan == 8) cout << "delapan";
        else if (satuan == 9) cout << "sembilan";
    }
}
return 0;
}