#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

class Stack{
    int data[MAX];
    int index;

public:
    Stack(){
        index = -1;
    }

    bool isEmpty(){
        return index == -1;
    }

    bool isFull(){
        return index == MAX - 1;
    }

    void push(int x){
        if(!isFull()){
            index++;
            data[index] = x;
        }
    }

    void pop(){
        if(!isEmpty()){
            index--;
        }
    }

    int peak(){
        if(!isEmpty())
            return data[index];
        return -1; // Returning -1 to indicate the stack is empty.
    }

    void print(){
        for(int i = index; i >= 0; i--){
            cout << data[i] << " ";
        }
        cout << endl;
    }

    void Clear(){
        index = -1;
    }

    int avg(){
        if (isEmpty()) return 0;
        int sum = 0, cnt = 0;
        for(int i = index; i >= 0; i--){
            sum += data[i];
            cnt++;
        }
        return sum / cnt;
    }

    int maxi(){
        if (isEmpty()) return INT_MIN;
        int Maxi = INT_MIN;
        for(int i = index; i >= 0; i--){
            Maxi = max(Maxi, data[i]);
        }
        return Maxi;
    }

    int mini(){
        if (isEmpty()) return INT_MAX;
        int Mini = INT_MAX;
        for(int i = index; i >= 0; i--){
            Mini = min(Mini, data[i]);
        }
        return Mini;
    }

    int Sum(){
        int sum = 0;
        for(int i = index; i >= 0; i--){
            sum += data[i];
        }
        return sum;
    }

    void Menu(){
        cout << "1. New\n2. Remove\n3. Top\n4. Print\n5. Search" << endl;
        cout << "6. Size\n7. Capacity\n8. Sum\n9. Avg\n10. Max" << endl;
        cout << "11. Min\n12. Clear\n13. isEmpty\n14. isFull\n0. Exit" << endl;
    }

    int size(){
        return index + 1;
    }

    int capacity(){
        return MAX;
    }

    bool search(int key){
        for(int i = index; i >= 0; i--){
            if(data[i] == key)
                return true;
        }
        return false;
    }
};

int main(){
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    Stack st;
    int op;

    do{
        cout << endl << "**************Stack Menu*****************" << endl;
        st.Menu();
        cin >> op;
        switch(op){
        case 0: break;
        case 1:{
            int n;
            cout << "Enter value to enter in stack: ";
            cin >> n;
            st.push(n);
            break;
        }
        case 2:
            st.pop();
            break;
        case 3: 
            cout << "Top element is: " << st.peak() << endl;
            break;
        case 4:
            st.print();
            break;
        case 5: {
            int key;
            cout << "Enter value to search: ";
            cin >> key;
            if (st.search(key)) {
                cout << "Value found in stack." << endl;
            } else {
                cout << "Value not found in stack." << endl;
            }
            break;
        }
        case 6: 
            cout << "Size of stack: " << st.size() << endl;
            break;
        case 7: 
            cout << "Capacity of stack: " << st.capacity() << endl;
            break;
        case 8: 
            cout << "Sum of elements in stack: " << st.Sum() << endl;
            break;
        case 9: 
            cout << "Average of elements in stack: " << st.avg() << endl;
            break;
        case 10: 
            cout << "Maximum element in stack: " << st.maxi() << endl;
            break;
        case 11:
            cout << "Minimum element in stack: " << st.mini() << endl;
            break;
        case 12: 
            st.Clear();
            cout << "Stack cleared." << endl;
            break;
        case 13: 
            cout << (st.isEmpty() ? "Stack is empty." : "Stack is not empty.") << endl;
            break;
        case 14: 
            cout << (st.isFull() ? "Stack is full." : "Stack is not full.") << endl;
            break;
        default:
            cout << "Invalid option" << endl;
        }
    } while(op != 0);

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}
