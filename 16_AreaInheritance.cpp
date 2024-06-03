#include<iostream>
using namespace std;

class Shape{
protected:
    float area;
public:
    void ShowArea(){
        cout<<"Area: "<<area<<endl;
    }
};

class Rectangle: public Shape{

public:
    Rectangle(float h, float w){
        area = h*w;
    }
};



int main(){

    Rectangle obj(3,2);
    obj.ShowArea();
}