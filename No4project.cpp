#include <iostream> 
using namespace std;

void konversi(int bilangan);

int main() {
	int bilangan;
	
	cout << "bilangan (dalam mm) = ";
	cin >> bilangan;
	
	konversi(bilangan);
	
	return 0;
}

void konversi(int mm) {
	int km, m, cm;
	
	km = mm / 1000000; // 1000000 / 1000000 = 1
	mm = mm % 1000000; // hasil = 0
	
	m = mm / 1000; // 0 bagi 1000 = 0
	mm = mm % 1000;
	
	cm = mm / 10; // 0 bagi 10 = 0
	mm = mm % 10;
	
	cout << "hasil konversi =";
	cout << km << " km, ";
	cout << m << " m, ";
	cout << cm << " cm, ";
	cout << mm << " mm." << endl;
}
	
