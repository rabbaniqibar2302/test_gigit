#include <iostream>
#include <unistd.h>

using namespace std;

char klik;
string bulan;
int tanggal;

int main()
{
    cout << "------------------" << endl;
    cout << "This Is Zodiac Master" << endl;
    cout << "------------------" << endl;
    sleep(2);
    cout << "\033[2J\033[1;1H";

    cout << "Klik X buat Lanjutkan , Klik Y Untuk Exit = ";
    cin >> klik;

    if (klik == 'x')
    {
        cout << "Selamat Datang di Zodiac Sign Master";
        sleep(2);
        cout << "\033[2J\033[1;1H";

        cout << "Tulis Bulan Anda = ";
        cin >> bulan;

        cout << "Tulis Tanggal Anda = ";
        cin >> tanggal;

        // AND (true true = true, salah satu false = false)
        // OR (salah satu true = true, keduanya false = false)
        // NOT (keduanya false = true, salah satu true = false)

        
        if (klik == 'x'){
            if (bulan == "januari"){
                if (tanggal >= 20 && tanggal <= 31){
                    cout << "Aquarius";
                }else if(tanggal >= 1 && tanggal <= 19){
                    cout << "Capricorn";
                }
            }else if(bulan == "februari"){
                if (tanggal >= 1 && tanggal <= 18){
                    cout << "Aquarius";
                }
            }else if(bulan == "mei"){
                if (tanggal >= 21 && tanggal <= 31){
                    cout << "Gemini";
                }
            }else if(bulan == "juni"){
                if (tanggal >= 1 && tanggal <= 20){
                    cout << "Gemini";
                }
            }
        }
        else if (klik == 'y')
        {
            cout << "Good Bye";
        }
    }
}