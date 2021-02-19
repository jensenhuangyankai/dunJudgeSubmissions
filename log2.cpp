#include<iostream>
using namespace std;

int main(){
    int x;
    float temp;
    cin >> x;
    temp = x/2;
    int counter;
    if (x > 1) counter = 1;
    else counter = 0;
    while (temp >= 2){
        temp = temp / 2;
        counter++;
    }
    cout << counter;
}