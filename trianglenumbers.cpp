#include<iostream>
using namespace std;

int x,counter = 0;

int main(){
    cin >> x;
    for (int i = 1;i<x+1;i++){
        counter = counter + i;
    }
    cout << counter;
}