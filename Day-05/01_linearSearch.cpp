#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    int target;
    cin>>target;

    for(int i=0; i<n; i++) {
        if(v[i]==target) {
            cout<<"YES";
            return 0;
        }
    }

    cout<<"NO";
    
    return 0;
}