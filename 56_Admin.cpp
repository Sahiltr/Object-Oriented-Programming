#include<bits/stdc++.h>
#include<conio.h>
using namespace std;


int main(){
    
    string pass = "";
    char ch;
    cout<<"Welcome Admin: "<<endl;
    cout<<"Enter pass: ";
    for(int i = 0; i < 4; i++){
    	ch = getch();
        pass.push_back(ch);
        cout<<"*";
         
    }
    if(pass == "1234")
        cout<<"\nAccess granted";
    else
        cout<<"\nAccess Denied";
    
    return 0;
}
