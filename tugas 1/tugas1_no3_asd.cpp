#include <iostream>
using namespace std;

// nama : muhammad irfan ramadhan
// nim : 124140159


// subprogram untuk menukar bilangan yang ada didalam array 
void tukar(int *ptr, int n) {
    for(int i = 0; i < n/2; i++) {
        // menukar elemen pertama dengan terakhir, kedua dengan kedua terakhir...
        int temp = *(ptr + i);
        *(ptr + i) = *(ptr + (n - 1 - i));
        *(ptr + (n - 1 - i)) = temp;
    }
}

// main program 
int main() {
    // deklarasikan variable yang digunakan 
    int n;
    
    // pengguna memasukkan ukuran array
    cout << "Input n = ";
    cin >> n;
    
    // Deklarasi array dinamis menggunakan pointer
    int *ptr = new int[n];
    
    // pengguna mengisi array pointer
    cout << "Masukkan elemen: ";
    for(int i = 0; i < n; i++) {
        cin >> *(ptr + i); 
    }
    
    // Menampilkan array sebelum dibalik
    cout << "Array sebelum dibalik: ";
    for(int i = 0; i < n; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    
    // Memanggil subprogram untuk membalik array
    tukar(ptr, n);
    
    // Menampilkan array sesudah dibalik
    cout << "Array sesudah dibalik: ";
    for(int i = 0; i < n; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    
    
    return 0;
}