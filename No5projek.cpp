#include <iostream>
using namespace std;
void BanyakPecahan(long uang, long pecahan[]);

int main (){
long uang;
long pecahan[9] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100};
int lembar[9];
cout<<"jumlah uang kembali :";
cin>>uang;
cout<<"pecahan uang kembali :"<<endl;
BanyakPecahan(uang,pecahan);
}

void BanyakPecahan(long uang, long pecahan[]){
int i;
long jumlah;
for(i=0;i<9;i++){
        jumlah = uang / pecahan[i];
        if(jumlah > 0){
            cout << jumlah << " lembar " << pecahan[i] << endl;
            uang -= jumlah * pecahan[i];
        }
    }
}

/*
misal uang kembali 126.7000
pecahan uang dimulai dari index 0 maka menjalankan 
jumlah = 1267000 / 50000 = 2.534
maka akan diambil 2 lembar 50000
menampilkan 2 lembar 50000
lalu uang 126.700 dikurangi dengan hasil jumlah(2) 
dan dikali index (0) yaitu 50000
sisanya yaitu 26.7000
lalu diulangi ke index berikutnya
*/