#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
     
    while(t--) {
        int n;
        cin>>n;

        vector<int> v(n);
        for(int i=0; i<n; i++) {
            cin>>v[i];
        }

        for(int i=1; i<n; i+=2) {
            swap(v[i-1], v[i]);
        }
        
        for(int i=0; i<n; i++) {
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}