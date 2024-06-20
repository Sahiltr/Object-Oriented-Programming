#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18
#define f first
#define s second

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

class Graph {
    int numVertices;
    list<int> *adjLists;

public:
    Graph(int vertices) {
        numVertices = vertices;
        adjLists = new list<int>[vertices];
    }

    ~Graph() {
        delete[] adjLists;
    }

    // Add edges to the graph
    void addEdge(int src, int dest) {
        adjLists[src].push_back(dest);
        adjLists[dest].push_back(src);
    }

    // DFS
    void DFS(int s) {
        vector<bool> visited(numVertices, false);
        stack<int> st;
        st.push(s);
        while (!st.empty()) {
            int s = st.top();
            st.pop();
            if (!visited[s]) {
                cout << s << " ";
                visited[s] = true;
            }
            for (auto i = adjLists[s].begin(); i != adjLists[s].end(); ++i) {
                if (!visited[*i])
                    st.push(*i);
            }
        }
        cout << endl;
    }

    // BFS algorithm
    void BFS(int startVertex) {
        vector<bool> visited(numVertices, false);
        list<int> queue;
        visited[startVertex] = true;
        queue.push_back(startVertex);

        list<int>::iterator i;
        while (!queue.empty()) {
            int currVertex = queue.front();
            cout << currVertex << " ";
            queue.pop_front();
            for (i = adjLists[currVertex].begin(); i != adjLists[currVertex].end(); ++i) {
                int adjVertex = *i;
                if (!visited[adjVertex]) {
                    visited[adjVertex] = true;
                    queue.push_back(adjVertex);
                }
            }
        }
        cout << endl;
    }
};

int32_t main() {
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int numVer = 5;
    int edges = 5;
    Graph g(numVer);
    for (int i = 0; i < edges; i++) {
        int src, dest;
        cin >> src >> dest;
        g.addEdge(src, dest);
    }

    cout << "BFS starting from vertex 2:" << endl;
    g.BFS(2);
    
    cout << "DFS starting from vertex 2:" << endl;
    g.DFS(2);

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";

    return 0;
}
