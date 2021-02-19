#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int jobs;
vector<int> increase;
int totalcost = 0;

int main(){
    cin >> jobs;
    for (int i = 0; i<jobs; i++){
        int x;
        cin >> x;
        totalcost = totalcost + x;
    }
    for (int j = 0; j<jobs; j++){
        int y;
        cin >> y;
        increase.push_back(y);
    }
    sort(increase.begin(),increase.end());
    reverse(increase.begin(),increase.end());

    for (int j = 0;j<jobs;j++){
        totalcost = totalcost + (increase[j] * (j));
    }
    cout << totalcost;
    

}