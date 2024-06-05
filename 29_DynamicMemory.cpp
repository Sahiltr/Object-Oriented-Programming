#include<bits/stdc++.h>
using namespace std;

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

int main(){
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int *p;
    p = new int[3];

    for(int i = 0; i < 3; i++){
         
        // cout<<"Enter Number: "<<endl;
        cin>>p[i];
    }

    for(int i = 0; i < 3; i++){
       cout<<p[i]<<endl;
    }

    delete [] p;   
    p = NULL;

    for(int i = 0; i < 3; i++){
        cout<<p[i]<<endl;  
     } 
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}