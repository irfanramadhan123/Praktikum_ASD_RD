#include <iostream>
using namespace std;

// nama : muhammad irfan ramadhan
// nim : 124140159

// sub program untuk menghitung jumlah bilangan ganjil dengan batas inputan pengguna
void ganjil(int *x, int y) {

	*x = 0;
	// perulangan saat i tidak habis dibagi 2(ganjil) maka nilai *x ditambah dengan i
	for(int i = 1; i <= y; i++) {
		if(i % 2 == 1) {
			*x = *x + i;
		}
	}
}

// main program
int main()
{
	// deklarasikan variable yang akan digunakan
	int angka1, n;
    
    // memasukkan batas atas 
	cout << "Masukkan nilai batas atas : ";
	cin >> n;

	// memanggil sub program
	ganjil(&angka1,n);

	cout << "Hasil hitung bilangan ganjil dari 1 sampai " << n << " adalah : " << angka1;

	return 0;
}