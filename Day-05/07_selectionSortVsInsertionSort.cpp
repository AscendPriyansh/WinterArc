#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    while(n--) {
        int a;
        cin>>a;
        vector<int> v(a);
        for(int i=0; i<a; i++) {
            cin>>v[i];
        }

        vector<int> v1 = v;
        // selection sort
        int swaps = 0;
        for(int i=0; i<a-1; i++) {
            int min_idx = i;
            
            for(int j=i; j<a; j++) {
                if(v1[min_idx]>v1[j]) {
                    min_idx=j;
                }
            }

            if(min_idx!=i) {
                swaps++;
                swap(v1[min_idx], v1[i]);
            }
        }

        // insertion sort
        int shifts = 0;
        for(int i=1; i<a; i++) {
            int key = v[i];
            int idx = i-1;
    
            while(idx>=0 && key<v[idx]) {
                shifts++;
                swap(v[idx], v[idx+1]);
                idx--;
            }
        }

        if(swaps == shifts) {
            cout<<"Tie"<<"\n";
        }
        else if(swaps < shifts) {
            cout<<"Selection Sort"<<"\n";
        }
        else {
            cout<<"Insertion Sort"<<"\n";
        }
    }

    return 0;
}