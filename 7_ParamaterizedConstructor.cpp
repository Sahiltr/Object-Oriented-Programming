#include<bits/stdc++.h>
using namespace std;

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

class MyUnit{
	int km,m,feet;
public:
	MyUnit(float k){
		km = k;
		m = km*1000;
		feet = km*3280.84;
	}

	void print(){

		cout<<km<<" km"<<endl;
		cout<<m<<" m"<<endl;
		cout<<feet<<" feet"<<endl;
	}
};

int main(){
	auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	
	MyUnit m(2.0);
	m.print();
	
	
	auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}