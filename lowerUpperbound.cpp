#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // int n;
    // cin>>n;
    // in vectors and array
    //lower bound and upper bound return iterator or pointer
    // int a[n];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // sort(a,a+n);
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // int *ptr=lower_bound(a,a+n,11);
    // int *ptr=upper_bound(a,a+n,11);
    //time complexity if these fuctions is logn .. n->size of array or vectors
    // if(ptr==(a+n)){
    //     cout<<"Not found";
    //     return 0;
    // }
    // cout<<*ptr<<endl;
    

    //In sets and maps
    set<int> s;
    for(int i=0;i<(int)(1e6);i++){
        int x;
        cin>>x;
        s.insert(rand());
    }
    for(int i=0;i<(int)1e5;i++){
        auto it=lower_bound(s.begin(),s.end(),rand());
    }

    return 0;
}