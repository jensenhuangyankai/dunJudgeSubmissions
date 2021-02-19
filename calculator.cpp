#include <bits/stdc++.h>
using namespace std;
int x;
int y;
char z;
int main() {
    //getline(cin, z);

    //x = z[0]-'0';
    //y = z[2]-'0';
    cin >> x;
    cin >> z;
    cin >> y;
    if (z == '+'){
        cout << x + y;
    }
    if (z == '-'){
        cout << x - y;
    }
    if (z == '*'){
        cout << x * y;
    }

}