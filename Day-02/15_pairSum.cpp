#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) {
            cin>>v[i];
        }
        int target;
        cin>>target;

        sort(v.begin(), v.end());

        int i = 0;
        int j = n-1;

        int count = 0;

        while(i<j) {
            int sum = v[i] + v[j];
            if(sum == target) {
                count++;
                i++, j--;
            }
            else if(sum > target) {
                j--;
            }
            else {
                i++;
            }
        }

        cout<<count<<"\n";
    }

    return 0;
}
