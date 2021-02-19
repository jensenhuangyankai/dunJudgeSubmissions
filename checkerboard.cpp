#include <iostream>
#include <string>
using namespace std;

int y;
string output = "";

int main(){
    string o = "o";
    string x = "x";
    cin >> y;
    for (int i = 0; i<y; i++){
        output = output + "\n";
        if (i % 2 == 0){
            for (int j = 0; j<y; j++){
                if (j % 2 == 0){
                    output = output + o;
                }
                else {
                    output = output + x;
                }
            }
        }
        else {
            for (int j = 0; j<y; j++){
                if (j % 2 == 0){
                    output = output + x;
                }
                else {
                    output = output + o;
                }
            }
        }
    }
    cout << output;
}