#include<bits/stdc++.h>
using namespace std;
#define MAX 100000

class Queue {
    int data[MAX];
    int front;
    int back;
    int count;

public:
    Queue() {
        front = 0;
        back = 0;
        count = 0;
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == MAX;
    }

    void Enqueue(int x) {
        if (isFull()) {
            cout << "Queue is full" << endl;
            return;
        }
        data[back++] = x;
        count++;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        for (int i = 0; i < back - 1; i++) {
            data[i] = data[i + 1];
        }
        back--;
        count--;
    }

    int peak() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return data[front];
    }

    void print() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        for (int i = front; i < back; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    void Clear() {
        front = 0;
        back = 0;
        count = 0;
    }

    int maxi() {
        if (isEmpty()) return INT_MIN;
        int Maxi = INT_MIN;
        for (int i = front; i < back; i++) {
            Maxi = max(Maxi, data[i]);
        }
        return Maxi;
    }

    int mini() {
        if (isEmpty()) return INT_MAX;
        int Mini = INT_MAX;
        for (int i = front; i < back; i++) {
            Mini = min(Mini, data[i]);
        }
        return Mini;
    }

    int Sum() {
        int sum = 0;
        for (int i = front; i < back; i++) {
            sum += data[i];
        }
        return sum;
    }

    double avg() {
        if (isEmpty()) return 0;
        return (double)Sum() / count;
    }

    void Menu() {
        cout << "1. New\n2. Remove\n3. Top\n4. Print\n5. Search" << endl;
        cout << "6. Size\n7. Capacity\n8. Sum\n9. Avg\n10. Max" << endl;
        cout << "11. Min\n12. Clear\n13. isEmpty\n14. isFull\n0. Exit" << endl;
    }

    int size() {
        return count;
    }

    int capacity() {
        return MAX;
    }

    bool search(int key) {
        for (int i = front; i < back; i++) {
            if (data[i] == key)
                return true;
        }
        return false;
    }
};

int main() {
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    Queue st;
    int op;

    do {
        cout << endl << "**************Queue Menu*****************" << endl;
        st.Menu();
        cin >> op;
        switch(op) {
            case 0: break;
            case 1: {
                int n;
                cout << "Enter value to enter in Queue: ";
                cin >> n;
                st.Enqueue(n);
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
                    cout << "Value found in Queue." << endl;
                } else {
                    cout << "Value not found in Queue." << endl;
                }
                break;
            }
            case 6: 
                cout << "Size of Queue: " << st.size() << endl;
                break;
            case 7: 
                cout << "Capacity of Queue: " << st.capacity() << endl;
                break;
            case 8: 
                cout << "Sum of elements in Queue: " << st.Sum() << endl;
                break;
            case 9: 
                cout << "Average of elements in Queue: " << st.avg() << endl;
                break;
            case 10: 
                cout << "Maximum element in Queue: " << st.maxi() << endl;
                break;
            case 11:
                cout << "Minimum element in Queue: " << st.mini() << endl;
                break;
            case 12: 
                st.Clear();
                cout << "Queue cleared." << endl;
                break;
            case 13: 
                cout << (st.isEmpty() ? "Queue is empty." : "Queue is not empty.") << endl;
                break;
            case 14: 
                cout << (st.isFull() ? "Queue is full." : "Queue is not full.") << endl;
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
