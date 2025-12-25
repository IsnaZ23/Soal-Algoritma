#include<iostream>
using namespace std;

int main() {
int nilai[10] = {};
int jumlahmax = 0;
int i = 0;
int max;
cout<<"====Nilai tertinggi siswa==== "<<endl;
while(i<10){
        cout<<"Nilai Diinputkan ke-"<<i+1<<" = ";
        cin>>nilai[i];

        if(i == 0){ //nilai while pertama = 0
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