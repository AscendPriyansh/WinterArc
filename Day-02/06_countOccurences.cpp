#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    
    int count = 0;
    for(int i=0; i<n; i++) {
        if(target == v[i]) count++;
    }

    cout<<count;

    return 0;
}