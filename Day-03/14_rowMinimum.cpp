#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    vector<vector<int>> v(n, vector<int> (m));

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>v[i][j];
        }
    }


    for(int i=0; i<n; i++) {
        int store = INT_MAX;
        for(int j=0; j<m; j++) {
            if(store>v[i][j]) store = v[i][j];
        }
        cout<<store<<" ";
    }


    return 0;
}