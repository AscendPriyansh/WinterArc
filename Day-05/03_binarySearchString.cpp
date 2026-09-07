#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<string> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    string target;
    cin>>target;

    int i = 0;
    int j = n-1;

    while(i<=j) {
        int mid = (i+j)/2;
        if(v[mid]==target) {
            cout<<"YES";
            return 0;
        }
        else if(v[mid]>target) {
            j = mid - 1;
        }
        else {
            i = mid + 1;
        }
    }

    cout<<"NO";

    return 0;
}