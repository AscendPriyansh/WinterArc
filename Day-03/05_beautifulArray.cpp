#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    for(int i=1; i<n; i++) {
        if(v[i-1]!=v[i]) {
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";

    return 0;
}