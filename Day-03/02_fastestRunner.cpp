#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    int maxi = INT_MAX;
    int store = -1;
    for(int i=0; i<n; i++) {
        if(maxi>=v[i]) store = i;
    }

    cout<<store;

    return 0;
}