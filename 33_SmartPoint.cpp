#include<bits/stdc++.h>
using namespace std;

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

class SmartPtr{
    int *ptr;     //Actual pointer  
public:
    //Constructor
    SmartPtr(int*p = NULL){
        ptr = p;
    }

    //Destructor
    ~SmartPtr(){
        delete(ptr);
    }

    //Overloading dreferencing operator
    int &operator*(){
        return *ptr;
    }
};

int main(){
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    SmartPtr ptr(new int());
    *ptr = 20;
    cout<<*ptr;

    //we don't need to call delete ptr:when the object
    //ptr goes out of scope, the destructor for it is
    //automatically called and destructor does delete ptr
    
    
    
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}