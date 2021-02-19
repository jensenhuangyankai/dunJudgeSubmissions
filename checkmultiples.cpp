#include <iostream>
using namespace std;
int n,m;

int main(){
    cin >> n;
    cin >> m;
    if (n % m == 0){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}