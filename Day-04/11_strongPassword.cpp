#include<bits/stdc++.h>
using namespace std;

int main() {
    string a;
    getline(cin, a);

    int charCount = a.size();
    bool lower = false;
    bool upper = false;
    bool digit = false;
    bool special = false;

    for(int i=0; i<a.size(); i++) {
        if(a[i]>=65 && a[i]<=91) {
            lower = true;
        }
        else if(a[i]>=97 && a[i]<=122) {
            upper = true;
        }
        else if(a[i]>=48 && a[i]<=57) {
            digit = true;
        }
        else {
            special = true;
        }
    }

    if(charCount == 10 && lower && upper && digit && special) {
        cout<<"Strong";
    }
    else {
        cout<<"Weak";
    }

    return 0;
}