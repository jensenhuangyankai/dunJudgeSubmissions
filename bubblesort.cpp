#include <iostream>
#include <algorithm>
using namespace std;

int x;
int bubbles[3000];
int main(){
    cin >> x;
    for (int i=0;i<x;i++){
        cin >> bubbles[i];
    }
    sort(bubbles,bubbles+x);
    for (int j=0;j<x;j++){
        cout << bubbles[j];
        cout << " ";
    }
}