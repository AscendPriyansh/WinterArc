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

    int target;
    cin>>target;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(target == v[i][j]) {
                cout<<"YES";
                return 0;
            }
        }
    }

    cout<<"NO";

    return 0;
}