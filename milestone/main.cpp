// Auth using file handling
// Menu
// 1. Register
// 2. Login
// 3. Exit

// Selamat Datang (user), dan password anda adalah (password)
// klik 0 to back


#include <iostream>
#include <fstream>
#include <experimental/filesystem>
using namespace std;
using namespace std::experimental:filesystem;
int choice;
string name;
string pass;
string filename;
string name2;
string pass2;
string filename2;
string read;

void signup(){
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Password: " << endl;
    cin >> pass;
    string filename = name + ".txt";
    if (exists(filename)){
        cout << "Username already exists" << endl;
    }
    else{
        ofstream f(filename);
        f << pass;
        cout << "Signup successful" << endl;
    }
}

void login(){
    cout << "Enter your username: " << endl;
    cin >> name2;
    cout << "Enter your password" << endl;
    cin >> pass2;
    filename2 = name2 + ".txt";
    
    ifstream test(filename2);
    
    getline(test,read);
    if (exists(filename2)){
        if (read == pass2){
            cout << "Welcome" << endl;
        }
        else{
            cout << "Wrong password";
        }
    }
    else{
        cout << "Username does not exists";
    }
}


void menu(){
    cout << "1. Signup" << endl;
    cout << "2. Login" << endl;
    cout << "3. Exit" << endl;
    cout << "Choice: " << endl;
    cin >> choice;
    if (choice == 1){
        signup();
    }
    else if (choice == 2){
        login();
    }
    else{
        exit(0);
    }
}

int main()
{
    while (true){
        
        menu();
    }
    
}

