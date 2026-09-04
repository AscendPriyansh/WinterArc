#include<bits/stdc++.h>
using namespace std;

int main() {
    char n;
    cin>>n;

    int check = (n-'0')+'0';

    if(check>=65 && check<=90) {
        cout<<"Uppercase";
    }
    else if(check>=97 && check<=122) {
        cout<<"Lowercase";
    }
    else if(check>=48 && check<=57) {
        cout<<"Digit";
    }
    else {
        cout<<"Special";
    }

    return 0;
}