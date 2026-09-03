#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    int passingMarks;
    cin>>passingMarks;

    int passCount = 0;
    for(int i=0; i<n; i++) {
        if(v[i]>=passingMarks) passCount++;
    }

    cout<<"Pass: "<<passCount<<"\n";
    cout<<"Fail: "<<n-passCount;


    return 0;
}