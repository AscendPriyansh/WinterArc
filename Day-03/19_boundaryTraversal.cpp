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

    for(int i=0; i<m; i++) {
        cout<<v[0][i]<<" ";
    }

    for(int i=1; i<n; i++) {
        cout<<v[i][m-1]<<" ";
    }

    for(int i=n-2; i>=0; i--) {
        cout<<v[n-1][i]<<" ";
    }

    for(int i=n-2; i>0; i--) {
        cout<<v[i][0]<<" ";
    }

    return 0;
}