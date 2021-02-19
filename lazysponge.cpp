#include <bits/stdc++.h>
using namespace std;
int n,x;
char numbers[50001];
int main() {
    cin >> n;
    cin >> x;
    for (int i = 0; i < n; i++){
        cin >> numbers[i];
    }
    cout << numbers[x-1];
}