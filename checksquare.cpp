#include <iostream>
#include <math.h>
using namespace std;
int x;

int main(){
    cin >> x;
    float y;
    y = sqrt(x);
    if (floor(y) == sqrt(x)){
        cout << "yes";
    }
    else {
        cout << "no";
    }

}