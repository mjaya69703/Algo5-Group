#include <iostream>
using namespace std;

int main(){
    // Deklarasi Variabel Integer
    int num1, num2, num3, average;

    // Tampilkan Pesan Input
    cout << "Inputkan Num 1 : ";
    cin >> num1;

    cout << "Inputkan Num 2 : ";
    cin >> num2;

    cout << "Inputkan Num 3 : ";
    cin >> num3;

    // Proses Hitung Rata Rata
    average = ( num1 + num2 + num3 ) / 3;
    // Tampilkan hasil rata rata
    cout << "Hasil Rata Rata : " << average << endl;

    return 0;
}