#include<bits/stdc++.h>
using namespace std;

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

class Demo{
    int x;
public:
    Demo(){

        cout<<"Default Constructor called"<<endl;      //only a single Default constructor is there
    }

    // Demo(int n){

    //     x = n;
    //     cout<<"Parametrized Constructor called"<<endl;    // can have multpile parameterized constructor in a class
    // }

    Demo(int n):x(n){                                   //parametrized constructor by inheritance
        cout<<"Parametrized Constructor called"<<endl;
    }

    ~Demo(){

        cout<<"Destructor called"<<endl;                  //only single desctructor in a class 
    }
};

int main(){
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    Demo d1;
    cout<<"----------1-----------"<<endl;
    Demo d2(100);
    cout<<"----------2-----------"<<endl;
    Demo d3;
    cout<<"----------3-----------"<<endl;
    Demo d4;
    cout<<"----------4-----------"<<endl;
    
    
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}
