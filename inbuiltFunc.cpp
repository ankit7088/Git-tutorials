#include<bits/stdc++.h>
using namespace std;

int main(){
    

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int mn=*min_element(v.begin(),v.end());
    cout<<mn<<endl;
    int mx=*max_element(v.begin(),v.end());
    cout<<mx<<endl;
    int sum=accumulate(v.begin(),v.end(),0);
    cout<<sum<<endl;
    int ct=count(v.begin(),v.end(),2);
    cout<<ct<<endl;
    auto it=find(v.begin(),v.end(),2);
    if(it!=v.end())
    cout<<*it<<endl;
    else
    cout<<" Element not found"<<endl;
    reverse(v.begin(),v.end());
    for(auto ele:v){
        cout<<ele<<" ";
    }
    return 0;
}