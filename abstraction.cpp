// U must have to understand
// 1. Pointer & Reference
// 2. Pure Virtual Function
// 3. Virtual Function
// 4. Abstract Concept

#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;

class Smartphone
{
public:
    string merk;
    string harga;
    virtual string processor()
    {
        string processor = "ARM X86";
        return processor;
    };

    void loading()
    {
        int load = 0;
        while (load < 3)
        {
            cout << "Loading." << endl;
            Sleep(0777);
            cout << "\033[2J\033[1;1H";
            cout << "Loading.." << endl;
            Sleep(0777);
            cout << "\033[2J\033[1;1H";
            cout << "Loading..." << endl;
            Sleep(0777);
            cout << "\033[2J\033[1;1H";
            cout << "Loading...." << endl;
            Sleep(0777);
            cout << "\033[2J\033[1;1H";
            load ++;
        }
    }
    string display(string a, string b)
    {
        merk = a;
        harga = b;
        loading();
        cout << "Merk Hape Kamu Adalah = " << merk << endl;
        cout << "Dan Harganya Adalah = " << harga << endl;
        cout << "Serta Menggunakan Prosesor = " << processor() <<  endl;
    };
};

class Android : public Smartphone {};

int main()
{
    cout << "Welcome To Manufacture TMC" << endl;
    cout << "Fill Your Company and Price!" << endl;
    cout << "" << endl;
    cout << "" << endl;
    Sleep(1577);
    cout << "\033[2J\033[1;1H";
    Smartphone *s1 = new Android();
    cout << "Company = ";
    cin >> s1->merk;
    cout << "Price = ";
    cin >> s1->harga;
    s1->display(s1->merk,s1->harga);
}