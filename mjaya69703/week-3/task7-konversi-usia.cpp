#include <iostream>
using namespace std;

int main(){
    // Definisikan semua variabel yang dibutuhkan
    int inhari, inbulan, intahun, year, month, outYear, outMonth, output;

    cout << "Inputkan Jumlah Tahun : ";
    // Inputkan Jumlah Tahun
    cin >> intahun;

    cout << "Inputkan Jumlah Bulan : ";
    // Inputkan Jumlah Bulan
    cin >> inbulan;

    cout << "Inputkan Jumlah Hari : ";
    // Inputkan Jumlah Hari
    cin >> inhari;

    // Asumsi 1 Bulan = 30 Hari
    month = 30;
    // Asumsi 1 Tahun = 30 Hari * 12 Bulan = 360 Hari
    year = month * 12;

    // Konversi Input Tahun ke Hari
    outYear = intahun * year;
    // Konversi Input Bulan ke hari
    outMonth = inbulan * month;

    // Hitung Output jumlah hari dari gabungan ketiga input21
    output = outYear + outMonth + inhari;

    // Tampilkan Hasil yang diharapkan
    cout << intahun << " Tahun " << inbulan << " Bulan " << inhari << " Hari = " << output << " Hari" << endl;

    // Akhiri perintah
    return 0;
}