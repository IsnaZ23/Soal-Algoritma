#include <iostream>
using namespace std;

int main() {
    float rata2;
    int hitung = 0;
    float total = 0;
    int i = 0;
    int data[10] = {2, 5/*x*/, 1, 2, 4, 6/*x*/, 3, 2, 7, 1};
    for(i = 0;i<10;i++){
        if(data[i]<5 || data[i]>= 7){
            total = total + data[i]; // 0 + 2 
            hitung++; // masuk ke hitung = 1
        }
        }

    rata2 = total / hitung;
    cout<<"data : 2, 5, 1, 2, 4, 6, 3, 2, 7, 1"<<endl;
    cout<<"Rata Rata nilai : "<<rata2<<endl;
    cout<<"Jumlah : "<<hitung<<endl;
}