#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    string nama = "Muhammad Rizqi Akbar Rabbani";
    int umur = 23;
    double berat = 100.5;
    char jenisKelamin = 'L';
    bool menikah = false;

    cout << "Nama Saya = " << nama << endl;
    cout << "Umur Saya = " << umur << endl;
    cout << "Berat Saya = " << berat << endl;
    if (jenisKelamin == 'L')
    {
        cout << "Kelamin Saya = " << "Laki Laki" << endl;
    }
    else if (jenisKelamin == 'P')
    {
        cout << "Kelamin Saya = " << "Perempuan" << endl;
    }
    if (menikah)
    {
        cout << "Saya sudah menikah" << endl;
    }
    else
    {
        cout << "Saya belum menikah" << endl;
    }

    int berat_badan, tinggi_badan;
    cout << "\n";
    cout << "\n";
    cout << "Memasuki Kalkulator BMI\n";
    cout << "Masukan Berat Badan (KG): ";
    cin >> berat_badan;
    cout << "Masukan Tinggi Badan (CM): ";
    cin >> tinggi_badan;

    int hasil = berat_badan / ((tinggi_badan / 100) ^ 2);

    if (hasil <= 18)
    {
        cout << "Hasil BMI anda adalah : " << hasil << endl;
        cout << "Kekurangan Berat Badan";
    }
    else if (hasil <= 25)
    {
        cout << "Hasil BMI anda adalah : " << hasil << endl;
        cout << "Normal";
    }
    else if (hasil <= 29)
    {
        cout << "Hasil BMI anda adalah : " << hasil << endl;
        cout << "Kelebihan Berat Badan";
    }
    else if (hasil <= 35)
    {
        cout << "Hasil BMI anda adalah : " << hasil << endl;
        cout << "Obesitas tingkat 1";
    }
    else if (hasil > 35)
    {
        cout << "Hasil BMI anda adalah : " << hasil << endl;
        cout << "Gendut bats";
    }
}