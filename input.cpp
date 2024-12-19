#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
    cout << "Press any key to continue.. \n";

    system("stty raw");

    char input = getchar();

    cout << "--" << input << "--\n";

    system("stty cooked");

    return 0;
}