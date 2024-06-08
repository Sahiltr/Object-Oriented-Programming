    #include<bits/stdc++.h>
using namespace std;

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

class MyArray{
    int arr[5];
public:
    void set(){
        for(int i = 0; i < 5; i++){
             cout<<"Enter Number"<<endl;
             cin>>arr[i];
        }
    }

    void print(){
        for(int i = 0; i < 5; i++){
           cout<<arr[i]<<endl;  
        }
    }
};

int main(){
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    
    MyArray arr;
    arr.set();
    arr.print();

    
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}