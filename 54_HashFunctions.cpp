#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18
#define f first
#define s second

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

class HashTable {
   int capacity;
   list<int> *table;

public:
   bool checkPrime(int n) {
      if (n <= 1) return false;
      for (int i = 2; i * i <= n; i++) {
           if (n % i == 0)
            return false;
      }
      return true;
   }

   int getPrime(int n) {
      if (n % 2 == 0) n++;
      while (!checkPrime(n)) n += 2;
      cout << "Prime capacity: " << n << endl;
      return n;
   }

   int hashFunction(int key) {
      return key % capacity;
   }

   HashTable(int c) {
      int size = getPrime(c);
      this->capacity = size;
      table = new list<int>[capacity]; 
   }

   void insertItem(int key, int data) {
      int index = hashFunction(key);
      table[index].push_back(data);
   }

   void displayHash() {
      for (int i = 0; i < capacity; i++) {
           cout << "table[" << i << "]";
           for (auto x : table[i])
               cout << " --> " << x;
           cout << endl;
      }
   }

   ~HashTable() {
       delete[] table;
   }
};

int32_t main() 
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int key[] = {231, 321, 212, 321, 1035, 262};
    int data[] = {123, 432, 523, 43, 423, 111};

    int size = sizeof(key) / sizeof(key[0]);
    HashTable h(size);

    for (int i = 0; i < size; i++) {
         h.insertItem(key[i], data[i]);
    }

    h.displayHash();

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 

    return 0;
}
