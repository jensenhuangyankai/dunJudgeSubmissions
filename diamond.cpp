#include<iostream>
using namespace std;

int spaces;
int stars = 1;
int counter = 0;
bool half = false;
int main(){
    int x;
    cin >> x;
    x = x-1;
    int lines = 2 * x + 1;
    spaces = x;
    if (counter <= x){
        for (int i = 0;i<=x;i++){
            for(int j = 0;j<spaces;j++){
                cout << " ";
            }
            for (int k = 0;k<stars;k++){
                cout << "*";
            }
            stars = stars + 2;
            spaces--;
            cout << '\n';
            counter++;
        }
    }
    counter--;
    half = true;
    if (half == true){
        if (counter > 0){
            spaces = spaces + 2;
            stars = stars - 4;
            for (int i = 0;i<=x-1;i++){
                for(int j = 0;j<spaces;j++){
                    cout << " ";
                }
                for (int k = 0;k<stars;k++){
                    cout << "*";
                }
                stars = stars - 2;
                spaces++;
                cout << '\n';
            }
            counter--;
        }
    }
}