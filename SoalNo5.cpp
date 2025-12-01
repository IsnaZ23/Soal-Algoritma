#include <iostream>
#include <string>
using namespace std;
//========================================
    string nama;
    string notelp;
    string Akun[100][2];
    int BanyakAK = 0;
    char nambahAK;
    char kembali , mengulang;
    int kesempatan = 3;
    bool berhasil = false;
    int saldo = 100000;
//===================================================================
void login(){
while(kesempatan > 0 && !berhasil){
        cout<<"\n================Menu Login============\n";
        cout<<"Masukkan Nama akun anda : ";cin>>nama;
        cout<<"Masukkan No telpon anda : ";cin>>notelp;
        for(int i=0;i<BanyakAK;i++){
            if(nama == Akun[i][0] && notelp == Akun[i][1]){
                cout<<"Login Berhasil \n";
                berhasil = true;
            break;
            }
        }
    if(!berhasil){
        kesempatan--;
        if(kesempatan > 0){
        cout<<"Tolong Masukkan Ulang Nama atau No telepon\n";
        cout<<"kesempatan anda tinggal : "<<(kesempatan)<<endl;
        }
    }
}
}
//====================================================================
void registrasi(){
do{
        cout<<"Masukkan Nama Anda           : ";cin>>nama;
        cout<<"Masukkan Nomor Telpon anda   : ";cin>>notelp;
        Akun[BanyakAK][0] = nama;
        Akun[BanyakAK][1] = notelp;
        BanyakAK++;
        cout<<"Akun Berhasil Dibuat ! \n";
cout<<"Apakah anda ingin menambah akun (y/n)? ";cin>>nambahAK;                                
}while(nambahAK == 'y' || nambahAK == 'Y');
}
//=====================================================================
void lihatsaldo(){
    cout<<"=================================================== \n";
    cout<<"== saldo anda :"<<saldo<<" ============================= \n";
    cout<<"=================================================== \n";
}
//=====================================================================
void paketan(){
    int pilihpkt;
    string namapaketan[4] = {"Hot promo 15Gb/bulan ",
                             "Super seru promo 10GB/bulan ", 
                             "Super seru promo 12GB/bulan ", 
                             "Hot promo 25GB/bulan "};
    int hargapaketan[4] = {50000, 35000, 42000, 70000};
    cout<<"Harga-Harga Paketan : \n";
    for(int i = 0;i<4;i++){
        cout<<(i+1)<<". "<<namapaketan[i]<<" - Rp."<<hargapaketan[i]<<endl;
    }
do {
    cout<<"Pilih paketan : ";
    cin>>pilihpkt;

if(pilihpkt >= 1 && pilihpkt <= 4 ){
        int  no = pilihpkt - 1;
        int harga = hargapaketan[no];
    if(saldo >= harga){
        saldo = saldo - harga;
        cout<<"Berhasil dibeli \n";
        cout<<"sisa saldo anda : "<<saldo<<endl;
    }else{
        cout<<"saldo tidak cukup\n";
    }
    break;
}else{
    cout<<"Inputan Tidak Valid.";
}
}while(true);

    
}
//=====================================================================
int main(){
do{
    cout<<"======== Menu Buat Akun ====== \n"
        <<"1. Login \n"
        <<"2. Registrasi\n"
        <<"Pilih No : ";
    int pilihLg;
    cin>>pilihLg;
switch(pilihLg){

case 1 :
{
    login();
    if(!berhasil){
        cout<<"Maaf percobaan login anda sudah habis. \n"
            <<"Tunggu selama 30 Menit\n";
        return 0;
    }
break;
}
case 2 :
    registrasi();
break;
default :
    cout<<"Pilihan Tidak Valid !,Tolong pilih ulang\n";
break;
}

cout<<"Kembali ke menu Login ? (y/n) ";cin>>kembali; 
}while(kembali == 'y' || kembali == 'Y');

if(berhasil == true){
do{
cout<<"====Menu My Telkomsel=====\n"
    <<"1. lihat saldo My Telkomsel saya\n"
    <<"2. Beli paketan my telkomsel \n"
    <<"3. keluar dari aplikasi \n"
    <<"Pilih No 1-3 : ";
    int pilihmy;
cin>>pilihmy;
switch(pilihmy){
case 1 :
lihatsaldo();
break;

case 2 :
paketan();
break;

case 3:
cout<<"Terimakasih Telah Memakai aplikasi My telkomsel ini! :) ";
return 0;
break;

default:
cout<<"Pilihan tidak valid !";
break;
}
cout<<"apakah anda ingin melihat menu lain (y/n) : ";
cin>>mengulang;
}while(mengulang == 'y' || mengulang == 'Y');
}
}