#include <iostream>
using namespace std;

int x;
int counter = 0;
int main(){
    cin >> x;
    for (int i = 0; i<x; i++){
        int y;
        cin >> y;
        if (y<0){
            counter = counter - y;
        }
        else{
            counter = counter + y;
        }
    }
    cout << counter;
}