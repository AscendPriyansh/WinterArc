#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    for(int i=0; i<n-2; i++) {
        int swapCount = 0;
        for(int j=0; j<n-i-1; j++) {
            if(v[j]>v[j+1]) {
                swapCount++;
                swap(v[j], v[j+1]);
            }
        }

        cout<<"Pass "<<i+1<<": ";
        for(int i=0; i<n; i++) {
            cout<<v[i]<<" ";
        }
        cout<<", swaps = "<<swapCount<<"\n";

    }

    for(int i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }

    return 0;
}