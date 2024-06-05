#include<bits/stdc++.h>
using namespace std;

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());


class Student{
private:
    int age;
public:
    Student():age(12){}
    void get_age(){
        cout<<"Age = "<<age<<endl;
    }
};

int main(){
    
    return 0;
}