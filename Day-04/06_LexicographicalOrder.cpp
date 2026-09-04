#include<bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin>>a>>b;

    int i = 0;
    int j = 0;

    while(i<a.size() && j<b.size()) {
        if(a[i]==b[j]) {
            i++, j++;
        }
        else if(a[i]<b[j]) {
            cout<<"A";
            return 0;
        }
        else {
            cout<<"B";
            return 0;
        }
    }

    cout<<"Equal";

    return 0;
}