#include<bits/stdc++.h>
using namespace std;

int main() {    
    int n;
    cin>>n;
    vector<int> v(n);

    int mini = INT_MAX;
    int idx = -1;
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    for(int i=0; i<n; i++) {
        if(mini>v[i]) {
            mini = v[i];
            idx = i+1;
        }
    }

    cout<<mini<<" "<<idx;

    return 0;
}