#include <iostream>
//#include<cstring>
using namespace std;


int h,w;
int counter = 0;
char temp;
int main(){
    cin >> h >> w;
    for (int i = 0;i<h;i++){
        for (int j = 0;j<w;j++){
            cin >> temp;
            if (temp == '*') counter++;
        }
    }
    cout << counter;
}

/*
//more optimised by using scanf
int main(){
    ios_base::sync_with_stdio(false);
    scanf("%d%d",h,w);
    h = h+1;
    w = w+1;
    for (int i = 0;i < h;i++){
        string y;
        getline(cin,y);
        y = y.c_str();
        for (int j = 0;j<w;j++){
            if (y[j] == '*') counter++;
        }
    }
    cout << counter;
}

//unoptimised
int main(){
    cin >> h;
    cin >> w;
    h = h + 1;
    w = w + 1;
    string y;
    for (int i = 0; i<h;i++){
        getline(cin,y);
        for (char& c : y){
            if(c == '*'){
                counter = counter + 1;
            }
        }
    }
    cout << counter;
    
}
*/