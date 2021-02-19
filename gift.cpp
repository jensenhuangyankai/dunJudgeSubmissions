#include<iostream>
using namespace std;

int main(){
    int num,timing;
    int gifts = 0;
    int prevTiming;
    cin >> num >> timing;
    for (int i = 0; i<num;i++){
        if (i==0) cin >> prevTiming;
        else{
            int newTiming;
            cin >> newTiming;
            if (prevTiming - newTiming >= timing) gifts++;
            prevTiming = newTiming;
        }

    }
    cout << gifts;
}

