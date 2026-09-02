#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int a;
        cin>>a;
        vector<int> v1(a);
        for(int i=0; i<a; i++) {
            cin>>v1[i];
        }
        int b;
        cin>>b;
        vector<int> v2(b);
        for(int i=0; i<b; i++) {
            cin>>v2[i];
        }

        vector<int> res;

        for(int i=0; i<a; i++) {
            for(int j=0; j<b; j++) {
                if(v1[i]==v2[j]) {
                    res.push_back(v1[i]);
                    v2[j] = -1;
                    break;
                }
            }
        }

        for(int i=0; i<res.size(); i++) {
            cout<<res[i]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
