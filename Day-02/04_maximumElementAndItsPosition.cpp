#include<bits/stdc++.h>
using namespace std;

int main() {    
    int n;
    cin>>n;
    vector<int> v(n);

    int maxi = INT_MIN;
    int idx = -1;
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    for(int i=0; i<n; i++) {
        if(maxi<v[i]) {
            maxi = v[i];
            idx = i+1;
        }
    }

    cout<<maxi<<" "<<idx;

    return 0;
}