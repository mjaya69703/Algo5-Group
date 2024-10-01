#include <iostream>
using namespace std;

int main(){
    // Definisikan semua variabel integer
    int jam, menit, detik, indetik;

    // Tampilkan Pesan Input
    cout << "Inputkan Waktu Dalam Detik : ";
    cin >> indetik;

    // jika detik kurang dari angka 0 maka tampilkan pesan dan akhiri
    if (indetik <= 0 ){
        cout << "waktu harus lebih dari 0 detik";
        return 0;
    }

    // Konversi Jam ke detik
    jam = indetik / 3600;
    menit = ( indetik % 3600 ) / 60;
    detik = indetik % 60;


    // Tampilkan Hasil Konversi Waktu
    cout << indetik << " Detik = " << jam << " Jam " << menit << " Menit " << detik << " Detik " << endl;


    return 0;
}