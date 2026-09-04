#include<bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin>>a;

    char n;
    cin>>n;

    string s;
    for(int i=0; i<a.size(); i++) {
        if(a[i]!=n) {
            s.push_back(a[i]);
        }
    }

    cout<<s;

    return 0;
}