#include<iostream>
#include<string>
using namespace std;

string x;
string line;

int main(){
    getline(cin,x);
    int y = stoi(x);
    
    getline(cin,line);
    for(int i = 0;i<y;i++){
        cout << line << '\n';
    }
}