#include<bits/stdc++.h>
using namespace std;

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

class Vec{
    int a,b,c;
public:
    Vec(){};
    Vec(int x, int y, int z){

        a = x;
        b = y;
        c = z;

    }

    static:: Vec add(Vec v1, Vec v2){
        Vec d;
        d.a = v1.a+v2.a;
        d.b = v1.b+v2.b;
        d.c = v1.c+v2.c;
        return d;
    }

    static:: Vec sub(Vec v1, Vec v2){
        Vec d;
        d.a = v1.a-v2.a;
        d.b = v1.b-v2.b;
        d.c = v1.c-v2.c;
        return d;
    }

    void print(){
        cout<<a<<"i+"<<b<<"j+"<<c<<"k"<<endl;
    }
};

int main(){
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    Vec v1(1,2,3), v2(3,2,1);
    Vec d = Vec::add(v1,v2);
    Vec e = Vec::sub(v1,v2);
    d.print();
    e.print();

    
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}