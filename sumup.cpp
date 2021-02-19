#include <bits/stdc++.h>
using namespace std;
int x = 0;
int main() {
    int y;
    //scanf("%d" , &y);
    //getline(cin, y, '');
    for(int i = 0;i<3;i++){
        cin >> y;
        x = x+y;
    }
    
    cout << x;
    return 0;
}