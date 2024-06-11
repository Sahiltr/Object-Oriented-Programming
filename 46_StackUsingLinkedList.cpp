#include<bits/stdc++.h>
using namespace std;

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

class Node {
public:
    int data;
    Node* next;
    
    Node() {
        data = 0;
        next = nullptr;
    }

    Node(int n) {
        data = n;
        next = nullptr;
    }
};

class StackLL {
    Node* headtop;
public:

    StackLL() {
        headtop = nullptr;
    }

    void push(int n) {
        Node* newNode = new Node(n);
        if (headtop == nullptr)
            headtop = newNode;
        else {
            newNode->next = headtop;
            headtop = newNode;
        }
    }

    void pop() {
        if (headtop == nullptr)
            return; // Stack is empty
        Node* temp = headtop;
        headtop = headtop->next;
        delete temp;
    }

    void print() {
        Node* temp = headtop;
        while (temp != nullptr) {
            cout << temp->data << "-->";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }
};

int main() {
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    StackLL st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.print();
    st.pop();
    st.print();
    
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}
