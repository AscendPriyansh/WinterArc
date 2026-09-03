#include<bits/stdc++.h>
using namespace std;

bool primeAlmost(int n) {
    int count = 0;
    for(int i=1; i<=n; i++) {
        if(n%i==0) count++;
    }

    if(count<=4) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int n;
    cin>>n;

    int count = 0;
    for(int i=1; i<=n; i++) {
        if(primeAlmost(i)) cout<<i<<" ";
    }

    return 0;
}