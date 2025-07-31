#include<bits/stdc++.h>
using namespace std;

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

class Student
{
    int roll, m1, m2, m3;
    char name[21];
    float total, per;

public:

    void getInput(int r, int a1, int a2, int a3, char *n){

        roll = r;
        strcpy(name,n);
        m1 = a1;
        m2 = a2;
        m3 = a3;
        total = m1+m2+m3;
        per = total/3.0;

    }

    void print(){

        cout<<"Roll: "<<roll<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"m1: "<<m1<<endl;
        cout<<"m2: "<<m2<<endl;
        cout<<"m3: "<<m3<<endl;
        cout<<"Total: "<<total<<endl;
        cout<<"Per: "<<per<<"%"<<endl;

    }

};

int main(){
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    Student std[3];               //Here we are creating array of objects
    
    cout<<"size of std: "<<sizeof(std)<<endl ;

    for(int i = 0; i < 3; i++){
        int rollno,a1,a2,a3;
        char name[20];
        cin>>rollno>>name>>a1>>a2>>a3;
        std[i].getInput(rollno,a1,a2,a3,name);
    }
    
    for(int i = 0; i < 3; i++){
         std[i].print(); 
         cout<<endl;    
    }
    
    
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}
