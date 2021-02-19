#include <iostream>
using namespace std;

int input;
int output = 0;
int main(){
    cin >> input;
    for (int i = 0; i < input; i++){
        int x;
        cin >> x;
        output = output + x;
    }
    output = output / input;
    cout << output;
}