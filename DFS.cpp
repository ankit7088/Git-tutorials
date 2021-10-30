#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> graph1[N];
bool vis[N];

void dfs(int vertex){
    cout<<vertex<<endl;
    vis[vertex]=true;
    for(auto child:graph1[vertex]){
        cout<<"par"<<vertex<<", child"<<child<<endl;
        if(vis[child]) continue;
        dfs(child);
    }
}

int main(){
    
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int v1,v2;
        cin>>v1>>v2;
        graph1[v1].push_back(v2);
        graph1[v2].push_back(v1);
    }
    dfs(1);
    
    return 0;
}