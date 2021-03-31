#include<iostream>
#include<vector>
using namespace std;

int N = 0;
vector<int> numbers;

int main(){
    cin >> N;
    for(int i = 0;i<N;i++){
        int y;
        cin >> y;
        numbers.push_back(y);
    }
    N = N - 1;
    N = N/2;
    cout << numbers[N];
}