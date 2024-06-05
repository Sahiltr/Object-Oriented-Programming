#include<bits/stdc++.h>
using namespace std;

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

int main(){
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    double numerator, denominator, arr[4] = {0.0, 0.0, 0.0, 0.0};
    int index;
    cin>>index;
    try{
        if(index>3)
            throw 1;
        if(denominator == 0)
            throw 2
    }
    catch(int i){
        if(i == 1)
            cout<<"array out of inbounds";
        else if(i == 2)
            cout<<"Error! denominator cannot be zero";
    }
    catch(...){
        cout<<"unexpected error"<<endl;
    }
    return 0;
    
    
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}