#include<bits/stdc++.h>
using namespace std;
class Circle{
    float a;
public:

    void Set(int r){
        a = r*r*3.14;
    }

    void Show(){
        cout<<"Area: "<<a<<endl;
    }

};

int main(){
    Circle cObj;
    Circle *p;
    p = &cObj;
    p->Set(7);
    p->Show();
    cObj.Set(100);
    p->Show();
}