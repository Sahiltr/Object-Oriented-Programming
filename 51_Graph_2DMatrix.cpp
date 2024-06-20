#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18
#define f first
#define s second

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

class Graph{
    int vertArr[20][20];
    int v;
public:
    Graph(int c){
        v=c;
        for(int i = 0; i < 20; i++){
           for(int j = 0; j < 20; j++){
                 vertArr[i][j] = 0;
             }  
        }
    }

    void displayMatrix(){
        int i,j;
        cout<<" \t";
        for(int i = 0; i < v; i++){
            cout<< i << "\t"; 
        }
        cout<<endl;
        cout<<" ";

        for(int i = 0; i < v; i++){
            cout<<"----";
        }
        cout<<endl;
        for(int i = 0; i < v; i++){
           cout<< i << "| \t";
           for(int j = 0; j < v; j++){
                cout<<vertArr[i][j]<<"\t";
            }  
            cout<<endl;
        }
    }

    void add_edge(int a, int b){
        vertArr[a][b] = 1;
        vertArr[b][a] = 1;
    }
};

int32_t main() 
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    Graph g(6);
    g.add_edge(0,4);
    g.add_edge(0,2);
    g.add_edge(1,2);
    g.add_edge(1,4);
    g.add_edge(1,5);
    g.add_edge(2,3);
    g.add_edge(2,5);
    g.add_edge(5,4);
    g.displayMatrix();

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}