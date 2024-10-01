#include <iostream>
using namespace std;

int main(){
    // Deklarasi Variabel Integer
    int num1, num2;

    // Tampilkan Pesan Input
    cout << "Inputkan Num 1 : ";
    cin >> num1;

    cout << "Inputkan Num 2 : ";
    cin >> num2;

    // Proses Penjumlahan
    int penjumlahan = num1 + num2;
    // Tampilkan Hasil Penjumlahan
    cout << "Hasil Penjumlahan : " << penjumlahan << endl;
    // Proses Pengurangan
    int pengurangan = num1 - num2;
    // Tampilkan Hasil Pengurangan
    cout << "Hasil Pengurangan : " << pengurangan << endl;
    // Proses Perkalian
    int perkalian = num1 * num2;
    // Tampilkan Hasil Perkalian
    cout << "Hasil Perkalian : " << perkalian << endl;
    // Proses Pembagian
    int pembagian = num1 / num2;
    // Tampilkan Hasil Pembagian
    cout << "Hasil Pembagian : " << pembagian << endl;

    // STOP
    return 0;
}