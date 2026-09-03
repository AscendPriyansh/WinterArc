#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int m;
    cin>>m;

    if(n<=1 && m<=1) {
        cout<<"YES";
    }
    else if(n==m) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }

    return 0;
}