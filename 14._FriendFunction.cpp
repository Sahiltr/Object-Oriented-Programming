//Friend Function
#include<bits/stdc++.h>
using namespace std;

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

class Complex{
    int real,image;
public:
    Complex(){}
    Complex(int r, int i){
        real = r;
        image = i;
    }

    void print(){
        cout<<real<<"+"<<image<<"i"<<endl;
    }
    friend Complex Add(Complex c1, Complex c2);
    
};
Complex Add(Complex c1, Complex c2){
        Complex c3;
        c3.real = c1.real + c2.real;
        c3.image = c1.image + c2.image;
        return c3;
    }

int main(){
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    Complex a(2,6), b(3,8),c;
    c =Add(a,b);
    a.print();
    b.print();
    cout<<endl;
    c.print();
    
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}