#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    for(int i=0; i<n-1; i++) {
        int min_idx = i;
        for(int j=i; j<n; j++) {
            if(v[min_idx]>v[j]) {
                min_idx = j;
            }
        }

        cout<<"Pass "<<i+1<<": ";
        for(int i=0; i<n; i++) {
            cout<<v[i]<<" ";
        }
        cout<<", min_selected = "<<v[min_idx]<<"\n";

        if(min_idx!=i) {
            swap(v[min_idx], v[i]);
        }
    }

    for(int i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }

    return 0;
}