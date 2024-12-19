#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector <string> words;
vector <vector<string>> hasil;
int banyak;
string kata;
string hasil_kata;
int a = 0;


int main(){
    cout << "Masukan berapa banyak ?";
    cin >> banyak;

    while (a < banyak){
        cout << "Masukan kata ke - " << a+1 << " = ";
        cin >> kata;
        words.push_back(kata);
        a++;
    }

    for(string i : words){
        sort(i.begin(), i.end());
        if (i == i){
            
            hasil.push_back({{i}});
        }else{
            hasil.push_back({i});
        }
    }

    for (int i = 0; i < hasil.size(); i++){
        for (int j = 0; j < hasil[i].size(); j++){
            cout << hasil[i][j] << ",";
        }
        cout << endl;
    }
}


{{"aku","kau"},{"rusak"},{"tomat"}};