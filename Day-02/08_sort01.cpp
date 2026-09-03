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
    int j = n-1;

    while(i<j) {
        if(v[i]==0 && v[j]==1) {
            i++, j--;
        }
        else if(v[i]==1 && v[j]==0) {
            swap(v[i], v[j]);
            i++, j--;
        }
        else if(v[i]==1 && v[j]==1) {
            j--;
        } 
        else {
            i++;
        }
    } 

    for(int i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }

    return 0;
}