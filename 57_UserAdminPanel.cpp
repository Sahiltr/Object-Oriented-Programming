#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

class User{
    int id;
    string name;
    string pass;
    int mobile;
    string emailID;
    string address;
public:

    User(){};
    User(int id,string name, string pass, int mobile, string emailID, string address ){
        this->id = id;
        this->name = name;
        this->pass = pass;
        this->mobile = mobile;
        this->emailID = emailID;
        this->address = address;
    }

    void checkPass(string pass){
        if(this->pass == pass )
            cout<<"Access Granted";
        else
            cout<<"Access Denied";
    }

    int getId(){
        return id;
    }

    string getName(){
        return name;
    }

    int getMobile(){
        return mobile;
    }

    string getEmail(){
        return emailID;
    }

    string getAddress(){
        return address;
    }

        
};

int main(){
    
    int n = 3;
    vector<User> arr[n];
    for(int i = 0; i < n; i++){
        int id;
        string name;
        string pass;
        int mobile;
        string emailID;
        string address;
        cin>>id>>name>>pass>>mobile>>emailID>>address;
        arr[i] = User(id,name,pass,mobile,emailID,address);
    }

    cout<<"Select options: "<<endl;
    cout<<"1.Admin\n2.User\n3.Exit"<<endl;

    int option;
    cin>>option;

    switch(option){
    case(1):
            string pass = "";
            char ch;
            cout<<"Admin Login"<<endl;
            cout<<"Enter password: ";
            for(int i = 0; i < 4; i++){
                ch = getch();
                pass.push_back(ch);
                cout<<"*";   
            }

            if(pass == "1234"){
                cout<<"Welcome Admin, Select options: "<<endl;
                cout<<"1.Add User\n2.Add Item\n3.Back"<<endl;

                int option2;
                cin>>option2;

                switch(option2){
                case(1):
                    cout<<"Enter id,name,pass,mobile,emailID,address:"<<endl;
                    cin>>id>>name>>pass>>mobile>>emailID>>address;
                    cout<<"User added"<<endl;
                    break;
                case(2):
                    cout<<"Add item"<<endl;
                    break;
                case(3):
                    break;
                }
            }
            break;

    case(2):
        cout<<"Welcome User!!"<<endl;
        cout<<"Enter Email id: ";
        string email;
        cin>>email;
        string pass = "";
        char ch;
        cout<<"Enter password: ";
        for(int i = 0; i < 4; i++){
            ch = getch();
            pass.push_back(ch);
            cout<<"*";   
        }

        if()


    }
    


    // cout<<"id\t\tname\t\tmobile\temail\t\t    address"<<endl;
    // cout<<"---------------------------------------------------"<<endl;
    // for(int i = 0; i < n; i++){
    //     cout<<arr[i].getId()<<"\t\t"<<arr[i].getName()<<"\t\t"<<arr[i].getMobile()<<"\t\t"<<arr[i].getEmail()<<"  \t\t"<<arr[i].getAddress()<<endl;   
    // }
       
    return 0;
}               