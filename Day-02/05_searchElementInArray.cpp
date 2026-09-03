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
    
    for(int i=0; i<n; i++) {
        if(target == v[i]) {
            cout<<"YES";
            return 0;
        }
    }

    cout<<"NO";

    return 0;
}