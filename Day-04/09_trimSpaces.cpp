#include<bits/stdc++.h>
using namespace std;

int main() {
    string a;
    getline(cin, a);

    string s;
    for(int i=0; i<a.size(); i++) {
        if(a[i]!=' ') {
            s.push_back(a[i]);
        }
    }

    cout<<s;

    return 0;
}