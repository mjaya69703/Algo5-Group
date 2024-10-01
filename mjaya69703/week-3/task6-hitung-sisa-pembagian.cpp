#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    int input1, input2, x, y;
    
    // Tampilkan Input
    cout << "Masukkan Num 1: ";
    cin >> input1;
    cout << "Masukkan Num 2: ";
    cin >> input2;
    
    // Perhitungan hasil pembagian dan sisa
    x = input1 / input2;
    y = input1 % input2;
    
    // Menampilkan hasil
    cout << input1 << " dibagi " << input2 << " adalah " << x << " dengan sisa " << y << endl;
    
    return 0;
}
