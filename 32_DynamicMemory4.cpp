#include<bits/stdc++.h>
using namespace std;

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());


class Items{
    int code,qty;
    string name;
    float price, total_price;

    public:
        void set(int c, string n, int q, float p){
            code = c;
            name = n;
            qty = q;
            price = p;
            total_price = price*qty;
        }

        void print(){
            cout<<"Code: "<<code<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Price: "<<price<<endl;
            cout<<"Quantity: "<<qty<<endl;
            cout<<"Total: "<<total_price<<endl;
        }

        int get_qty(){
        return qty;
        }
};

int main(){
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int code,qty;
    string name;
    float price;
    Items *it = new Items[3];

    for(int i = 0; i < 3; i++){
         
         cout<<"Enter code, name, quantity and price: "<<endl;
         cin>>code>>name>>qty>>price;
         it[i].set(code,name,qty,price);
    }

    for(int i = 0; i < 3; i++){
         for(int j = 0; j < 3; j++){
             if(it[i].get_qty() > it[j].get_qty())
                swap(it[i],it[j]);
         }
    }

    cout<<"------------------------------------------------------"<<endl;
    for(int i = 0; i < 3; i++){
         it[i].print();
    }

    delete [] it;
    
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}