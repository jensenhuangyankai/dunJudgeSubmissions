#include <iostream>
using namespace std;

int x;
int counter = 0;

int main(){
    cin >> x;
    for (int i = 0;i<x;i++){
        int temp;
        cin >> temp;
        counter = counter + x;
    }
    cout << counter; 
}