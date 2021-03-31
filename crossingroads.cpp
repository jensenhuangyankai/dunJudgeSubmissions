#include<iostream>
#include<cstdlib>
using namespace std;

int l,s,h;
int distance1;
int distance2 = 0;

int main(){
    cin >> l >> s >> h;
    //if light 1 is used
    distance1 = s + h;

    //if light 2 is used
    //distance between house and light
    int distanceHouseToLight = abs(l - h);
    //distance between light to school
    int distanceLightToSchool = abs(l - s);
    distance2 = distanceHouseToLight + distanceLightToSchool;
    if (distance1 > distance2){
        cout << distance2;
    }
    else {
        cout << distance1;
    }

}