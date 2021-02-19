#include <iostream>
using namespace std;

int x;

int main(){
    cin >> x;
    int total = 0;
    for (int i = 0;i<x;i++){
        int number;
        cin >> number;
        total = total + number;
    }
    cout << total;
}