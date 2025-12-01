#include <iostream>
using namespace std;

int main() {
    float rata2;
    int hitung = 0;
    float total = 0;
    int i = 0;
    int data[10] = {2, 5, 1, 2, 4, 6, 3, 2, 7, 1};
    for(i = 0;i<10;i++){
        if(data[i]<5 || data[i]>= 7){
            total = total + data[i];
            hitung++;
        }
        }

    rata2 = total / hitung;
    cout<<"data : 2, 5, 1, 2, 4, 6, 3, 2, 7, 1"<<endl;
    cout<<"Rata Rata nilai : "<<rata2<<endl;
    cout<<"Jumlah : "<<hitung<<endl;
}

/*
i mulali dari 0 sampai 9
mulai dari nilai 2 
dalam pengecekan if 2 benar disalah satu kondisi
maka total = total + data[i] → total = 0 + 2 = 2
hitung++ → hitung = 0 + 1 = 1
==================================================
lalu i diulangi sampai 9 yang hasil hitung ++ 
==================================================
* itu nilai hitung ada 8 karena ada 2 angka yang tidak memenuhi syarat
diulangi terus sampai i = 9
dan totalnya = 22
hitungnya = 8
lalu rata2 = total / hitung → rata2 = 22 / 8 = 2.75
*/