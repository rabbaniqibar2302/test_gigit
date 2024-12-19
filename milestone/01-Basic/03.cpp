#include <iostream>
using namespace std;
// Penggunaan operator pada c++ sama dengan pemograman yang lain, bedanya hanya dalam komparasi

int angka1;
int angka2;

int main()
{
    // Penggunaan aritmatika ada + - * / %
    cout << "Selamat Datang di Kalkulator KU" << endl;
    cout << endl;
    cout << "Masukan angka pertama ";
    cin >> angka1;

    cout << "Masukan angka kedua ";
    cin >> angka2;

    cout << "Jumlah dari " << angka1 << " and " << angka2;
    cout << "=" << angka1 + angka2;
}
