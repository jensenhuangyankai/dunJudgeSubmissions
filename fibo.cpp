#include<iostream>
using namespace std;

int n,m;

int main(){
    cin >> n >> m;
    int term = 1;
    int prev_term = 0;
    for (int i = 0; i < n-1;i++){
        term = term % m;
        prev_term = prev_term % m;
        int temp = term % m;
        term = ((term) + (prev_term)) % m;
        prev_term = temp;
    }
    cout << term;
}