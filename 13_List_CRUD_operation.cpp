//Now we'll create a User-defined List datatype
//which will have following fun
//Add
//Count
//Indexof
//Remove
//Removeat
//Insert
//Sort
//Clear
//Show

#include<bits/stdc++.h>
using namespace std;

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

class Mylist{
	int list[50];
public:
	int i = 0;
	void add(int x){
		list[i] = x;
		i++;
	}
	
	void show(){
		for(int j = 0; j < i; j++){
			cout<<list[j]<<" ";
		}
		cout<<endl;
	}

	void count(){
		cout<< i <<endl;
	}

	void Indexof(int x){
		int k = 0;
		while(k<i){
			if(list[k] == x){
				cout<<k<<endl;
				return;
			}
			k++;
		}
		cout<<-1;
	}

	void clear(){
		i = 0;
	}

	void remove(int x){
		int k = 0;
		while(k<i){
			if(list[k] == x)
				break;
			k++;
		}
		for(int j = k; j < i; j++){
			list[j] = list[j+1];
		}
		i--;
	}

	void removeAt(int x){
		for(int j = x; j < i; j++){
			list[j] = list[j+1];
		}
		i--;
	}

	void insert(int index, int val){
		for(int j = i+1; j--; j>index){
			list[j] = list[j-1];
		}
		list[index] = val;
		i++;
	}

	void sort(){
		for(int j = 0; j < i; j++){
			for(int k = 0; k < i; k++){
				if(list[j] < list[k]){
					int temp = list[j];
					list[j] = list[k];
					list[k] = temp;
				}
			}
		}
	}
};

int main(){
	auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	
	Mylist l;
	l.add(1);
	l.add(2);
	l.add(9);
	l.add(4);
	l.add(5);
	l.add(6);
	// l.remove(5);
	// l.removeAt(0);
	// l.Indexof(3);
	l.insert(0,0);
	l.sort();
	l.show();
	l.count();
	
	auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}