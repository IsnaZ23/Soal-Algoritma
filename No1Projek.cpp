#include<iostream>
using namespace std;

int main() {
cout<<"====Nilai tertinggi siswa==== "<<endl;
int nilai[10] = {};
int jumlahmax = 0;
int i = 0;
int max;
while(i<10){
        cout<<"Nilai Diinputkan ke-"<<i+1<<" = ";
        cin>>nilai[i];

        if(i == 0){
        max = nilai[i];
        }else if (nilai[i] > max){
        max = nilai[i];
    }
    i++;
}
i = 0;
while(i<10){
    if(nilai[i] == max){
        jumlahmax++;
    }
    i++;
}
cout<<"Nilai tertinggi adalah : "<<max<<endl;
cout<<"Nilai Tertinggi ada : "<<jumlahmax<<endl;
return 0;
}
/*
while pertama :
memasulkan nilai ke array nilai sebanyak 10 kali
unser memasukan nilai pertama 
menjadi nilai tersebesaer sementara (max)
jika nilai selanjutnya lebih besar dari sebelumnya
dichek di if max == nilai[i]? jika tidak lanjut else if
nilai[i] > max? jika iya 
maka max diisi dengan nilai[i] yang baru,
lalu i diulangi sampai index 0 -> 9
while kedua :
i mulai dari 0
chek while awal:
nilai[i] = 95 di input awal
itu jadi max
lalu di while kedua
nilai[i] = 95 dicocokkan dengan max
cocok → dihitung 1 (jumlah max++)

*/