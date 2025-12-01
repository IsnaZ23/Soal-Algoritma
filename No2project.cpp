#include <iostream>
using namespace std;

void balikKalimat(char kalimat[]) {
    char kata[10][50]; 
    int j = 0, k = 0;

    int panjang = 0;
    while (kalimat[panjang] != '\0') {
        panjang++;
    }

    for (int i = 0; i <= panjang; i++) {
        if (kalimat[i] == ' ' || kalimat[i] == '\0') {
            kata[j][k] = '\0'; 
            j++;               
            k = 0;
        } else {
            kata[j][k++] = kalimat[i];
        }
    }

    cout << "hasil  = ";
   
    for (int i = j - 1; i >= 0; i--) {
        cout << kata[i];
        if (i > 0) cout << " ";
    }
    cout << endl;
}

int main() {
    char kalimat[200];

    cout << "kalimat = ";
    cin.getline(kalimat, 200); 
    balikKalimat(kalimat);

    return 0;
}

