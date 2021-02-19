#include <bits/stdc++.h>
using namespace std;
int main() {
    int rating;
    cin >> rating;
    if (rating < 3) cout << "That's a terrible potato!";
    if (rating > 2 && rating < 6) cout << "That's a normal potato!";
    if (rating > 5 && rating < 9) cout << "That's a good potato!";
    if (rating > 8) cout << "OMG POTATOES!!!";
}