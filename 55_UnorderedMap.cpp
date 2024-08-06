#include<bits/stdc++.h>
using namespace std;

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

int main(){
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    unordered_map<string, int> mp;
    //inserting values by using [] operator
    mp["X"] = 10;
    mp["A"] = 20;
    mp["P"] = 30;

    auto u = mp.begin();
    cout<<u->first<<" : "<<u->second<<endl;

    for(auto &it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}