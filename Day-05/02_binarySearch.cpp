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

    int i = 0;
    int j = n-1;

    while(i<j) {
        int mid = i-(i-j)/2;

        if(v[mid]==target) {
            cout<<"YES";
            return 0;
        }
        else if(v[mid]>target) {
            j=j-mid;
        }
        else {
            i=i+mid;
        }
    }

    cout<<"NO";
    
    return 0;
}