#include <iostream>
using namespace std;

int x;

int main(){
    cin >> x;
    int number = x;
    cout << number;
    cout << " ";
    while (number != 1){
        if (number % 2 == 0){
            number = number/2;
            cout << number;
            cout << " ";
        }
        else {
            number = 3*number + 1;
            cout << number;
            cout << " ";
        }
    }
}