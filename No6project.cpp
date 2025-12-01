#include <iostream>
using namespace std;

void konversi(int *bilangan, int *jam, int *menit, int *detik);

int main() {
	int bilangan, jam, menit, detik;
	cout << "bilangan = ";
	cin >> bilangan;
	konversi(&bilangan, &jam, &menit, &detik);
	cout << jam << " jam ";
	cout << menit << " menit ";
	cout << detik << " detik " << endl;
}

void konversi(int *bilangan, int *jam, int *menit, int *detik){
	*jam = *bilangan / 3600;
	*menit = *bilangan / 60 % 60;
	*detik = *bilangan % 60;
	}
