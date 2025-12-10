#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void DFS(int v, vector<vector<int>>&adj, vector<bool>&visited){
    visited[v]=true;
    cout<<v<<" ";
    for(int i=0; i<adj[v].size(); i++){
        if(!visited[adj[v][i]]){
            DFS(adj[v][i], adj, visited);
        }
    }
}
void BFS(int start, vector<vector<int>>&adj){
    vector<bool>visited(adj.size(), false);
    queue<int>q;
    visited[start]=true;
    q.push(start);
    while(!q.empty()){
        int v=q.front();
        q.pop();
        cout<<v<<" ";
        for(int i=0; i<adj[v].size(); i++){
            if(!visited[adj[v][i]]){
                visited[adj[v][i]]=true;
                q.push(adj[v][i]);
            }
        }
    }
    cout<<endl;
}
int main(){
    int V, E;
    cout<<"Enter number of vertices: ";
    cin>>V;
    cout<<"Enter number of edges: ";
    cin>>E;
    if(V<=0){
        cout<<"No. of vertices can't be zero";
    }
    if(E<0){
        cout<<"No. of edges can't be negative";
    }
    vector<vector>>adj(V);
    cout<<"Enter edges (u,v): ";
    for(int i=0; i<E; i++){
        cin>>u>>v;
        if(u<0||u>V||v<0||v>V){
            cout<<"u and v must be between 0 and "<<V-1<<endl;
            return 0;
        }
        adj[u].push_back[v];
        adj[v].push_back[u];
    }
    int start;
    cout<<"Start node: ";
    cin>>start;
    if(start<0||start>=V){
        cout<<"Starting node must be between 0 and "<<V-1<<endl;
        return 0;
    }
    cout<<"DFS Traversal starting from "<<start<<endl;
    vector<bool>visited(V, false);
    DFS(start, adj, visited);
    cout<<endl;
    cout<<"BFS traversal starting from "<<start<<endl;
    BFS(start, adj);
    cout<<endl;
    return 0;
}