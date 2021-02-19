#include <iostream>
#include <string>
using namespace std;

int x = 0;



int main(){
    cin >> x;
    for (int i=0; i<x; i++){
        string output(i+1,'*');
        cout << output + '\n';
    }
}
