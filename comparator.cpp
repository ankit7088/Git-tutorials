#include<bits/stdc++.h>
using namespace std;

// bool shoul_i_swap(int a,int b){
//     if(a>b) return true;
//     return false;
// }
bool shoul_i_swap(pair<int,int> a,pair<int,int> b){
    // if(a.first!=b.second){
    //     if(a.first>b.first) return true;
    //     return false;
    // }
    // else{
    //     if(a.second<b.second) return true;
    //     return false;
    // }
    // if(a>b) return true;
    // return false;
    if(a.first!=b.second){
        // if(a.first>b.first) return false;
        // return true;
        return a.first<b.first;
    }
    else{
        // if(a.second<b.second) return false;
        // return true;
        return a.second>b.second;
    }
}

int main(){
    
    int n;
    cin>>n;
    // vector<int> a(n);
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(shoul_i_swap(a[i],a[j]))
    //         swap(a[i],a[j]);
    //     }
    // }
    sort(a.begin(),a.end(),shoul_i_swap);
    // greater<pair<int,int>> ()
    for(int i=0;i<n;i++){
        cout<<a[i].first<<" "<<a[i].second<<" ";
    }
    return 0;
}