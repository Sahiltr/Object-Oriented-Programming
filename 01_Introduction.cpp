#include<iostream>
using namespace std;

class Number{
    private:
        int a;                    //data should not get exposed
    public:
        void seta(int x){         //input function used to pass the data to the hidden/private data
            a = x;
        }
        int geta(){
            return a;            //output function used to return the value of the hidden data
        }
};

int main(){
    Number n;
    n.seta(100);
    cout<<n.geta();
}
