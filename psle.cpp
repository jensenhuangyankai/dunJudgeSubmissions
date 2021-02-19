#include <iostream>
using namespace std;

int x;
char a[1000],b[1000],c[1000],d[1000];

int main(){
    cin >> x;
    //a*
    if(x>=91){
        cout << "A*";
    }
    //a
    if(75 <= x && x <= 90){
        cout << "A";
    }
    //b
    if(60 <= x && x <= 74){
        cout << "B";
    }
    if(50 <= x && x <= 59){
        cout << "C";
    }
    if(35 <= x && x <= 49){
        cout << "D";
    }
    if(20 <= x && x <= 34){
        cout << "E";
    }
    if(x<20){
        cout << "U";
    }
}