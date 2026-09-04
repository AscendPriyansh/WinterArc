#include<bits/stdc++.h>
using namespace std;

int main() {
    string a;
    getline(cin, a);

    for(int i=0; i<a.size(); i++) {
        if(a[i]>=65 && a[i]<=91) {
            a[i]+=32;
        }
        else {
            a[i]-=32;
        }
    }

    cout<<a;

    return 0;
}