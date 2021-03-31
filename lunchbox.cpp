#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N,m;
vector<int> schools;
int counter = 0;
int numberOfSchools;
int main(){
    cin >> N >> m;
    for (int i=0;i<m;i++){
        int x;
        cin >> x;
        schools.push_back(x);
    }
    sort(schools.begin(),schools.end());
    for (int j = 0;j<m;j++){
        if ((counter <= N) && ((counter + schools[j]<=N))){
            counter += schools[j];
            numberOfSchools++;
        }
    }

    cout << numberOfSchools;
}