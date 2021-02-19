#include<iostream>
using namespace std;

int a,b;

int gcd(int x,int y){
    if (y > x) swap(x,y);
    if (y==0){
        cout << x;
    }
    else {
        gcd(y, x % y);
    }
    return 0;
}

int main(){
    cin >> a >> b;
    gcd(a,b);
}