#include <iostream>
using namespace std;

// nama : muhammad irfan ramadhan
// nim : 124140159

// sub program
// parameter *x,y,*z
void matematika(int *x, int y, int *z){
    // dekalarasikan nilai awal *x,*z
    *x = 0;
    *z = 1;
    // perulangan untuk penjumlahan nilai kuadrat dan perkalian nilai ganjil
    for(int i = 1; i <= y; i++){
        // nilai kuadrat
        *x = *x + (i * i);
        // perkalian bilangan ganjil 
        *z = *z * (2 * i - 1);
    }
}

// main program
int main()
{
    int x = 0,z = 1, y;
    
    // pengguna memasukkan batas
    cout << "Masukkan jumlah y (batas atas): ";
    cin >> y;
    
    // memanggil subprogram
    matematika(&x, y, &z);
    
    cout << "Hasil *x (penjumlahan kuadrat dari 1 - " << y << ") = " << x << endl;
    cout << "Hasil *z (perkalian antar bilangan ganjil dari 1 - " << y << ") = "<< z << endl;
    
    return 0;
}