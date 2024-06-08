    #include<bits/stdc++.h>
using namespace std;

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

class MyArray{
    int arr[5];
public:
    void set(){
        for(int i = 0; i < 5; i++){
             // cout<<"Enter Number"<<endl;
             cin>>arr[i];
        }
    }

    void print(){
        for(int i = 0; i < 5; i++){
           cout<<arr[i]<<endl;  
        }
    }

    void sort(){
    	for(int i = 0; i < 5; i++){
    	   for(int j = 0; j < 5; j++){
    	     	if(arr[i]>arr[j])
    	     		swap(arr[i],arr[j]);
    	     }  
    	}
    }

    int search(int key){
    	for(int i = 0; i < 5; i++){
    	     if(key == arr[i])
    	     	return i;
    	}
    	return -1;
    }

    int BinSearch(int key){
    	int mid;
    	int low = 0;
    	int high = 4;
    	while(low<=high){
    		mid = low + (high - low) / 2;
    		if(arr[mid] == key)
    			return mid;

    		if(arr[mid]>key){
    			high = mid-1;
    		}
    		else
    			low = mid+1;
    	}
    	return -1;
    }
};

int main(){
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    
    MyArray arr;
    arr.set();
    arr.sort();
    cout<<arr.BinSearch(5);

    
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}