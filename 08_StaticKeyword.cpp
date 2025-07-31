//static member function
#include<bits/stdc++.h>
using namespace std;

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

class Number{
    int x;
    static int y;
public:
    Number(int n){
        x = n;
        y++;
    }

    static void sety(int n){

        y = n;
    }

    void print(){
        cout<<"x="<<x<<endl;  
        cout<<"y="<<y<<endl;
    }    

};
int Number::y;

int main(){
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    Number::sety(100);
    Number n(10);
    Number n2(20);
    n.print();
    n2.print();
    
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}
