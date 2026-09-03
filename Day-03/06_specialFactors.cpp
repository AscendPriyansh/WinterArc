#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    for(int i=2; i<=n; i+=5) {
        if(n%i==0) {
            cout<<i<<" ";
        }
    }

    return 0;
}