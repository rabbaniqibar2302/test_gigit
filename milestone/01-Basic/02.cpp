// Penggunaan C++ dalam pemograman

// Include merupakan perintah pemanggilan scope agar bisa digunakan di dalam file project kita
#include <iostream>
// iostream merupakan scope yang bertugas untuk mengatur alur aliran program I=input O=output Stream = aliran

// pada c++ diwajibkan untuk menggunakan standard(ruang nama standar) ini berlaku ketika kita mulai menggunakan string atau in out
using namespace std;

// Dalam penggunaan variabel, anda harus menuliskan tipe datanya terlebih dahulu, penempatan variabel tergantung kebutuhan anda, ketika anda ingin variabelnya global, cukup letakan diluar int main
int angka;
string kalimat;
float angka_2;
bool truth;

// ini adalah komponen penting dari c++, int main merupakan fungsi dimana kita menjalankan semua koding tersebut, seperti fungsi run pada aplikasi
int main()
{
    // dibaca (si out bukan cout) berguna untuk display dari karakter (semacam print)
    cout << "Halo Dunia";

    // dan cout juga berguna untuk mengalirkan pertanyaan ke dalam suatu variabel, cout berubah menjadi pertanyaan ketika setelahnya ada cin
    cout << "Masukan Angka ";

    // cin berguna untuk memasukan karakter ke dalam variabel
    cin >> angka;
    cout << "Your Number Is = " << angka;
}