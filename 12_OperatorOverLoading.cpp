//Operator Overloading
#include<bits/stdc++.h>
using namespace std;

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

class Time
{
    int mm, hh;
    public:
        Time() {}
        Time(int h, int m)
        {
            hh=h;
            mm=m;
        }
        void print()
        {
            cout<<hh<<":"<<mm<<endl;
        }
        Time operator +(Time c2)
        {
            Time c3;
            c3.hh = (hh + c2.hh) + (mm + c2.mm) / 60;
            c3.mm = (mm + c2.mm) % 60;
            return c3;
        }

        Time operator -(Time c2)
        {
            Time c3;
            if(mm<c2.mm)
                hh--;
            c3.hh = (hh - c2.hh);
            c3.mm = abs((mm - c2.mm) % 60);
            return c3;
        }

};


int main(){
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int h1,m1;
    cin>>h1>>m1;
    int h2,m2;
    cin>>h2>>m2;
    
    Time c1(h1,m1),c2(h2,m2),c3,c4;
    c3=c1+c2;
    c1.print();
    c2.print();
    cout<<"-------- +"<<endl;
    c3.print();
    c4 = c1-c2;
    c4.print();
    
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}