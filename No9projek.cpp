#include <iostream>
using namespace std;
int main(){
    int pilihan,pil1,pil2;
    const float phi = 3.14;
    char ulang;
do{
    cout<<"====Program menghitung luas bangun datar atau volum bangun ruang===="<<endl;
    cout<<"Bangun Datar [1] / Bangun Ruang [2] : ";
    cin>>pilihan;
    if(pilihan ==  1){
    cout<<"Menghitung Luas Bangun Datar : ";
    cout<<"1. Persegi"<<endl;
    cout<<"2. Persegi Panjang"<<endl;
    cout<<"3. Segitiga"<<endl;
    cout<<"4. lingkaran"<<endl;
    cout<<"5. Jajar genjang"<<endl;
    cout<<"6. Belah Ketupat"<<endl;
    cout<<"7. Layang-Layang"<<endl;
    cout<<"8. Trapesium"<<endl;
    cout<<"Pilihan : "; cin>>pil1;
    switch (pil1){
    case 1 :
    int sisiP;
    float luasP;
    cout<<"Menghitung luas Persegi"<<endl;
    cout<<"Masukkan nilai sisi : ";
    cin>> sisiP;
    luasP = sisiP * sisiP;
    cout<<"Luas Persegi : "<<luasP<<endl;
    break;
    case 2:
    int lebarP, panjangP;
    float luasPP;
    cout<<"Menghitung luas persegi panjang"<<endl;
    cout<<"Masukkan nilai panjang : "; cin>>panjangP;
    cout<<"Masukkan nilai lebar : "; cin>>lebarP;
    luasPP = panjangP * lebarP;
    cout<<"Luas persegi panjang : "<<luasPP;
    break;
    case 3:
    int alasS,tinggiS;
    float luasS;
    cout<<"Menghitung luas segitiga"<<endl;
    cout<<"Masukkan nilai panjang : "; cin>>alasS;
    cout<<"Masukkan nilai lebar : "; cin>>tinggiS;
    luasS = alasS * tinggiS;
    cout<<"Luas segitiga : "<<luasS;
    break;

    case 4:
    float r;
    cout<<"Menghitung luas lingkaran"<<endl;
    cout<<"Masukkan Nilai jari-jari : "; cin>>r;
    cout<<"Luas Lingkaran = "<<phi * r * r<<endl;
    break;

    case 5:
    float a,t;
    cout<<"Menghitung luas jajar genjang"<<endl;
    cout<<"Masukkan nilai alas   : "; cin>>a;
    cout<<"Masukkan nilai tinggi : "; cin>>t;
    cout<<"Luas Jajar Genjang = "<<a * t<<endl;
    break;

    case 6:
    cout<<"Menghitung luas belah ketupat"<<endl;
    float d1, d2;
    cout<<"Masukkan nilai diagonal 1 : "; cin>>d1;
    cout<<"Masukkan nilai diagonal 2 : "; cin>>d2;
    cout<<"Luas Belah Ketupat = "<<(d1 * d2)/2<<endl;
    break;

    case 7:
    cout<<"Menghitung luas layang-layang"<<endl;
    float d3, d4;
    cout<<"Masukkan nilai diagonal 1 : "; cin>>d3;
    cout<<"Masukkan nilai diagonal 2 : "; cin>>d4;
    cout<<"Luas Layang-Layang = "<<(d3 * d4)/2<<endl;
    break;

    case 8:
    float c, b, tinggI;
    cout<<"Menghitung luas trapesium"<<endl;
    cout<<"Masukkan nilai sisi sejajar 1 : "; cin>>c;
    cout<<"Masukkan nilai sisi sejajar 2 : "; cin>>b;
    cout<<"Masukkan nilai tinggi         : "; cin>>tinggI;
    cout<<"Luas Trapesium = "<<((a + b)/2)* t<<endl;
    break;

    default:
    cout<<"Tidak ada pilihan"<<endl;
    break;
    }
//================================================================
    }else if(pilihan == 2 ){
    cout<<"Menghitung Volume Bangun Ruang : ";
    cout<<"1. Kubus"<<endl;
    cout<<"2. balok"<<endl;
    cout<<"3. Tabung"<<endl;
    cout<<"4. Bola"<<endl;
    cout<<"5. Kerucut"<<endl;
    cout<<"6. Limas Segitiga"<<endl;
    cout<<"7. Limas Segiempat"<<endl;
    cout<<"8. Prisma Segitiga"<<endl;
    cout<<"Pilihan : "; cin>>pil2;
    switch(pil2){

    case 1: {
    float s;
    cout<<"Menghitung volume Kubus"<<endl;
    cout<<"Masukkan nilai sisi : "; cin>>s;
    cout<<"Volume Kubus = "<<s*s*s<<endl;
        break;
    }

    case 2: {
    float p,l,t;
    cout<<"Menghitung volume Balok"<<endl;
    cout<<"Masukkan nilai panjang : "; cin>>p;
    cout<<"Masukkan nilai lebar   : "; cin>>l;
    cout<<"Masukkan nilai tinggi  : "; cin>>t;
    cout<<"Volume Balok = "<<p*l*t<<endl;
        break;
    }

    case 3: {
    float r,t;
    cout<<"Menghitung volume Tabung"<<endl;
    cout<<"Masukkan nilai jari-jari : "; cin>>r;
    cout<<"Masukkan nilai tinggi    : "; cin>>t;
    cout<<"Volume Tabung = "<<phi * r * r * t<<endl;
        break;
    }

    case 4: {
    float r;
    cout<<"menghitung volume Bola"<<endl;
    cout<<"Masukkan nilai jari-jari : "; cin>>r;
    cout<<"Volume Bola = "<<(4*phi*r*r*r)/3<<endl;
        break;
    }

    case 5: {
    float r,t;
    cout<<"Menghitung volume kerucut"<<endl;
    cout<<"Masukkan nilai jari-jari : "; cin>>r;
    cout<<"Masukkan nilai tinggi    : "; cin>>t;
    cout<<"Volume Kerucut = "<<(phi*r*r*t)/3<<endl;
        break;
    }

    case 6: {
    float a,t,tinggi;
    cout<<"Menghitung volume limas segitiga"<<endl;
    cout<<"Masukkan nilai alas segitiga : "; cin>>a;
    cout<<"Masukkan nilai tinggi segitiga : "; cin>>t;
    cout<<"Masukkan nilai tinggi limas : "; cin>>tinggi;
    cout<<"Volume Limas Segitiga = "<<(((a*t)/2)/3)*t<<endl;
        break;
    }

    case 7: {
    float p, l, tinggi;
    cout<<"Menghitung volume limas segiempat"<<endl;
    cout<<"Masukkan nilai sisi panjang    : "; cin>>p;
    cout<<"Masukkan nilai tinggi          : "; cin>>tinggi;
    cout<<"Masukkan nilai lebar           : "; cin>>l;
    cout<<"Volume Limas Segiempat = "<<(p*l*tinggi)/3<<endl;
        break;
    }

    case 8: {
    float a, t_alas, tinggi;
    cout<<"Menghitung volume prisma segitiga"<<endl;
    cout<<"Masukkan nilai alas segitiga : "; cin>>a;
    cout<<"Masukkan nilai tinggi segitiga : "; cin>>t_alas;
    cout<<"Masukkan nilai tinggi prisma : "; cin>>tinggi;
    float luas_alas = (a * t_alas)/2;
    cout<<"Volume Prisma Segitiga = "<<luas_alas * tinggi<<endl;
        break;
    }

    default:
    cout<<"Pilihan tidak ada.\n";
    }

    }else{
        cout<<"Tidak Ada pilihan ";
    }

cout<<"apakah ingin mengulang (y/n) : ";cin>>ulang;
}while(ulang == 'y' || ulang == 'Y');
}