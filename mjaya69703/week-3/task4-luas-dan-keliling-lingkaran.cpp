#include <iostream>
using namespace std;

int main(){
    // Deklarasi Variabel Diameter Integer
    int diameter;
    // Tampilkan Pesan Input
    cout << "Inputkan Diameter : ";
    cin >> diameter;

    // Perumpamaan Diameter < 0
    if (diameter <= 0 ){
        cout << "Bilangan bulat harus lebih dari 0";
        return 0;
    }

    // Deklarasikan Konstanta Pi Dengan Jenis Data Double
    const double pi = 3.14159;
    // Hitung Radius
    double radius = diameter / 2.0;
    // Hitung Luas Lingkaran
    double luas = pi * radius * radius;
    // Hitung Luas Keliling
    double keliling = pi * diameter;

    // Tampilkan Hasil Luas Lingkaran
    cout << "Luas lingkaran: " << luas << endl;
    // Tampilkan Hasil Keliling Lingkaran
    cout << "Keliling lingkaran: " << keliling << endl;

    return 0;
}