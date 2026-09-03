#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    int i = 0;
    int mid = 0;
    int j = n-1;

    while(mid<=j) {
        if(v[mid]==0) {
            swap(v[i], v[mid]);
            i++, mid++;
        }
        else if(v[mid]==1) {
            mid++;
        }
        else {
            swap(v[mid], v[j]);
            j--;
        }
    }

    for(int i=n-1; i>=0; i--) {
        cout<<v[i]<<" ";
    }

    return 0;
}