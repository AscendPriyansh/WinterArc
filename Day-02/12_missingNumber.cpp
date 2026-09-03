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

        sort(v.begin(), v.end());

        int i = 0;
        int j = i+1;

        int store = 0;
        while(j!=n) {
            if(v[i]!=v[j]) {
                store = v[i];
                break;
            }
            i+=2, j=i+1;
        }

        if(!store) {
            store = v[n-1];
        }
        cout<<store<<" ";
        cout<<"\n";
    }

    return 0;
}