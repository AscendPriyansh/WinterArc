#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    for(int i=1; i<n; i++) {
        int key = v[i];
        int idx = i-1;
        int shifts = 0;
        while(idx>=0 && key<v[idx]) {
            swap(v[idx], v[idx+1]);
            shifts++;
            idx--;
        }

        cout<<"Pass "<<i<<": ";
        for(int i=0; i<n; i++) {
            cout<<v[i]<<" ";
        }
        cout<<", ";
        for(int k=0; k<=i; k++) {
            cout<<v[k]<<" ";
        }
        cout<<"| ";
        for(int k=i+1; k<n; k++) {
            cout<<v[k]<<" ";
        }
        cout<<", shifts = "<<shifts<<"\n";
    }

    for(int i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }

    return 0;
}