#include <iostream>
using namespace std;

void BanyakPecahan(long uang, long pecahan[]);

int main() {
    //70000
    long uang;
    long pecahan[9] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100};

    cout << "jumlah uang kembali: ";
    cin >> uang;
    cout << "pecahan uang kembali:\n";

    BanyakPecahan(uang, pecahan);

    return 0;
}

void BanyakPecahan(long uang, long pecahan[]) {
    for (int i = 0; i < 9; i++) { //cehk 0-8
        long jumlah = uang / pecahan[i]; //pecahan mulai dari 50k dan mencetak jumlah
        if (jumlah > 0) { 
            cout << jumlah << " lembar " << pecahan[i] << endl;
            uang -= jumlah * pecahan[i];
        }
    }
}