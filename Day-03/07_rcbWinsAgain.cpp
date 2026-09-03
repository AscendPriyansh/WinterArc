#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    int i = (n/2)-1;
    int j = i+1;

    while(i>=0 && j<=n) {
        cout<<v[i]<<" "<<v[j]<<" ";
        i--, j++;
    }

    return 0;
}