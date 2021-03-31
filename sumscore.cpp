#include<iostream>
using namespace std;

int counter = 0;

int main(){
    int x;
    cin >> x;
    bool temp = false;
    if (x == -1){ 
        temp = true;
    }
    else counter = counter+x;
    while ((x != -1) && temp == false) {
        cin >> x;
        counter= counter +x;
    }
    counter++;
    cout << counter;
}