#include <iostream>
#include <cmath>
#include <stdio.h>
#include <random>
#include <windows.h>
using namespace std;

int main() {
    while (true){
        random_device dev;

        char play;
        cout << "" << endl;
        cout << "-----------------" << endl;
        cout << "Dice Game!🎲" << endl;
        cout << "Silahkan Klik Y untuk melempar Dadu Atau X untuk exit" << endl;
        cout << "-----------------" << endl;
        cout << "" << endl;

        cin >> play;
        play = tolower(play);
        if(play == 'y'){
            cout << "Dadu Akan Dilempar" << endl;
            Sleep(0777);
            cout << "....." << endl;
            Sleep(0777);
            int count = 0;
            while (count < 4){
                int ib = 1, ub = 5;
                int dice = (rand() % (ub - ib + 1)) + ib;
                if (dice == 1){
                    cout << "_____" << endl;
                    cout << "|   |" << endl;
                    cout << "| * |" << endl;
                    cout << "|___|" << endl;
                } else if (dice == 2){
                    cout << "_____" << endl;
                    cout << "|   |" << endl;
                    cout << "|** |" << endl;
                    cout << "|___|" << endl;
                } else if (dice == 3){
                    cout << "_____" << endl;
                    cout << "|   |" << endl;
                    cout << "|***|" << endl;
                    cout << "|___|" << endl;
                } else if (dice == 4){
                    cout << "_____" << endl;
                    cout << "|  *|" << endl;
                    cout << "|***|" << endl;
                    cout << "|___|" << endl;
                }
                else if (dice == 5){
                    cout << "_____" << endl;
                    cout << "|* *|" << endl;
                    cout << "|***|" << endl;
                    cout << "|___|" << endl;
                }else if (dice == 6){
                    cout << "_____" << endl;
                    cout << "|* *|" << endl;
                    cout << "|***|" << endl;
                    cout << "|___|" << endl;
                }
                Sleep(0500);
                count++;
            }

        }else if(play == 'x'){
            cout << "Selamat Tinggal" << endl;
            Sleep(0500);
            return 0;
        }else{
            cout << "Yang diinput salah!, Silahkan ulang kembali" << endl;
        }
    }
}