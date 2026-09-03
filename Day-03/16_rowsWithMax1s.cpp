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

    int row = 0;
    int idx = -1;
    for(int i=0; i<n; i++) {
        int count = 0;
        for(int j=0; j<m; j++) {
            if(v[i][j]==1) {
                count++;
            }
        }
        if(row<count) {
            row = count;
            idx = i;
        }
    }

    cout<<idx;

    return 0;
}