#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    int lis[x] = {1};
    int seq[x];
    int maxLength = 1;
    for (int i = 0; i < x; i++){
        cin >> seq[i];
    }
    for (int i = 0; i < x; i++){
        for (int j = 0;j<x;j++){
            if (seq[i] > seq[j]) lis[i] = max(lis[i],lis[j]+1);
        }
        if (lis[i] > maxLength) maxLength = lis[i];
    }
    cout << maxLength;


}
