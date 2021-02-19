#include <iostream>
using namespace std;

int n,m;

int main(){
    cin >> n;
    cin >> m;
    for (int i=1; i<=m;i++){
        cout << n * i;
        cout << '\n';
    }
}