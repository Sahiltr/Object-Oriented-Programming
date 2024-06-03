#include<iostream>
using namespace std;

class Number{
    private:
        int p;
        int r;
        int t;
        float SI;
    public:
        void seta(int PrincipalAmt, int rate, int time){         //input function used to pass the data to the hidden/private data
            p = PrincipalAmt;
            r = rate;
            t = time;
            SI = p*r*t/100;
        }
        float geta(){
            return SI;                                         //output function used to return the value of the hidden data
        }
};

int main(){
    Number n;
    int PA, R, T;
    cin>>PA>>R>>T;
    n.seta(PA,R,T);
    cout<<n.geta();
}