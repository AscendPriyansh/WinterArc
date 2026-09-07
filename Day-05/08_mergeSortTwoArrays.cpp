#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& v1, int n, int mid, int m) {
    int i = mid - n + 1;
    int j = m - mid;

    vector<int> res1(i);
    vector<int> res2(j);

    for(int k=0; k<i; k++) {
        res1[k] = v1[n + k];
    }
    for(int k=0; k<j; k++) {
        res2[k] = v1[mid + 1 + k];
    }

    int s = 0;
    int l = mid;
    int x = n;

    while(s!=i && l!=j) {
        if(res1[s]<=res2[l]) {
            v1[x] = res1[s];
            x++;
            s++;
        }
        else {
            v1[x] = res2[l];
            x++;
            l++;
        }
    }

    while(s!=i) {
        v1[x] = res1[s];
        x++;
        s++;
    } 

    while(l!=j) {
        v1[x] = res2[l];
        x++;
        l++;
    } 
}

void mergeSort(vector<int>& v1, int low, int high) {
    if(low>=high) return;
    int mid = (low+high)/2;
    mergeSort(v1, low, mid);
    mergeSort(v1, mid+1, high);
    merge(v1, low, mid, high);
}

int main() {
    int n, m;
    cin>>n>>m;
    vector<int> v1(n);
    vector<int> v2(m);

    for(int i=0; i<n; i++) {
        cin>>v1[i];
    }
    for(int i=0; i<m; i++) {
        cin>>v2[i];
    }

    mergeSort(v1, 0, n-1);
    mergeSort(v2, 0, m-1);
    vector<int> res = v1;
    for(int i=0; i<m; i++) {
        res.push_back(v2[i]);
    }

    for(int i=0; i<res.size(); i++) {
        cout<<res[i]<<" ";
    }

    return 0;
}