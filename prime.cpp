#include <iostream>
#include <string>

using namespace std;

bool isPrime(int n){
    if (n < 2) return false;
    for (int i = 2 ;i <= n/i; ++i){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int x;
    cin >> x;
    isPrime(x) ? cout << "Prime" : cout << "Not Prime";
}

/* recursive but TLE

bool isPrime(int n){
    static int i = 2;
    if (n < 2) return false;
    if (n == i) return true;
    if (n % i == 0) return false;
    i++;
    return isPrime(n);
}

int main(){
    int x;
    cin >> x;
    isPrime(x) ? cout << "Prime" : cout << "Not Prime";
}
*/ 