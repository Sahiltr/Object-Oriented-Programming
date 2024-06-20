#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18
#define f first
#define s second
#define V 5

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

class Graph{
    vector<int> adj[V];
public:
    void add_edge(int u, int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void printGraph(){
        for(int v = 0; v < V; v++){
            cout<<v;
            vector<int> t = adj[v];
            for(int i = 0; i < t.size(); i++)
               cout<<"-> "<<t[i]; 
            cout<<endl;
        }
    }
};

int32_t main() 
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    Graph g;
    g.add_edge(0,1);
    g.add_edge(0,4);
    g.add_edge(1,3);
    g.add_edge(2,4);
    g.add_edge(2,3);
    g.printGraph();
    return 0;
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}