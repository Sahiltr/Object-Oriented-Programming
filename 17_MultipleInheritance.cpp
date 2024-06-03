#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18
#define f first
#define s second

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

class Add{
    int x; int y;
public:
    void setAdd(int a, int b){
        x = a;
        y = b;
    }

    void resultAdd(){
        cout<<"sum: "<<x+y<<endl;
    }
};

class Sub{
    int x; int y;
public:
    void setSub(int a, int b){
        x = a;
        y = b;
    }

    void resultSub(){
        cout<<"sum: "<<x-y<<endl;
    }
};

class Math : public Add, public Sub{
    public:
        Math(int a, int b){
            setAdd(a,b);
            setSub(a,b);
        }
};

int32_t main() 
{
    Math m1(5,4);
    m1.resultAdd();
    m1.resultSub();
}