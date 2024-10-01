#include <iostream>
using namespace std;

int main(){
    // Deklarasi Variabel Integer
    int celcius, fahrenheit;
    // Tampilkan Pesan Input
    cout << "Inputkan Suhu Dalam Celcius : ";
    cin >> celcius;

    // Proses Perhitungan Convert Suhu
    fahrenheit = (celcius * 9/5) + 32;

    // Tampilan Hasil Konversi
    cout << celcius << " Celcius = " << fahrenheit << " Fahrenheit" << endl;


    return 0;
}