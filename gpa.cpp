#include <bits/stdc++.h>
using namespace std;
int main() {
    int gpa;
    scanf("%d",&gpa);
    if (gpa>=80) printf("4.0");
    else if (80 > gpa && gpa >= 70) printf("3.6");
    else if (70 > gpa && gpa >= 65) printf("3.2");
    else if (65 > gpa && gpa >= 60) printf("2.8");
    else if (60 > gpa && gpa >= 55) printf("2.4");
    else if (55 > gpa && gpa >= 50) printf("2.0");
    else if (50 > gpa && gpa >= 45) printf("1.6");
    else if (45 > gpa && gpa >= 40) printf("1.2");
    else printf("0.8");
    
    
}