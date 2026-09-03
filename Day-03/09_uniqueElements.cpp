#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    sort(v.begin(), v.end());

    int i = 0;
    int j = i+1;

    while(j<n) {
        if(v[i]!=v[j]) {
            cout<<v[i]<<" ";
            i++, j=i+1;
        }
        else {
            i+=2, j=i+1;
        }
    }

    if(i!=n && v[i]!=v[i-1]) {
        cout<<v[i];
    }

    return 0;
}