#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> vect{
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}};

int main()
{
    cout << vect[2][0];
}