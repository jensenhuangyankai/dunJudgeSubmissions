#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N,D;
int counter=0;
vector<int> potatoes;

int main(){
    cin >> N >> D;
    for (int i = 0;i<N; i++){
        int y;
        cin >> y;
        potatoes.push_back(y);
    }
    sort(potatoes.begin(),potatoes.end());
    reverse(potatoes.begin(),potatoes.end());
    for (int j = 0;j<D;j++){
        counter = counter + potatoes[j];
    }
    cout << counter;
}