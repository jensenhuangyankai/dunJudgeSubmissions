#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i<n; i++){
        int y;
        cin >> y;
        x[i] = y;
    }
    sort(x,x+n);
    for (int i = 0; i<n; i++){
        cout << x[i] << ' ';
    }
    cout << '\n';
}