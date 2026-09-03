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


        int count = 0;
        for(int i=0; i<n; i++) {
            int j = i+1;
            int k = n-1;

            while(j<k) {
                int sum = v[i] + v[j] + v[k];
                if(sum == target) {
                    count++;
                    j++, k--;
                }
                else if(sum > target) {
                    k--;
                }
                else {
                    j++;
                }
            }
        }

        cout<<count<<"\n";
    }

    return 0;
}
