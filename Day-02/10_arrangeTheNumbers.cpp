#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
     
    while(t--) {
        int n;
        cin>>n;

        vector<int> v(n);

        int i = 0;
        int iVal = 1;
        int j = n-1;
        int jVal = 2;

        while(i<=j) {
            if(iVal<=n) {
                v[i] = iVal;
                iVal += 2;
            }
            if(jVal<=n) {
                v[j] = jVal;
                jVal += 2;
            }
            i++, j--;
        }

        for(int i=0; i<n; i++) {
            cout<<v[i]<<" ";
        }
        cout<<"\n";

    }

    return 0;
}