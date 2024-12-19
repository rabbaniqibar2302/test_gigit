// buat 1 array (5 angka genap)
// tampilkan

// instagram (username, password)

#include <iostream>
using namespace std;
int main(){
   int genap[5] = {2, 4, 6, 8, 10};
   
   genap[4] = 20;
   
   string hewan [3][2] = {
       {"Ayam","Bebek"},
       {"Tuna","Hiu"},
       {"Jerapah", "Gajah"}
   };
   
   for (int i = 0; i < 5; i++) {
       cout << "Elemen ke- " <<i + 1 <<": " << genap[i] << endl;
   }
   
   hewan[0][1] = "Ayam";
   hewan[2][1] = "Lumba-lumba";
   
//   cout << hewan[0][1] << endl;
//   cout << hewan[2][1] << endl;

    for(int i = 0; i < 3; i++){
        cout << hewan[i];
    }
  
}