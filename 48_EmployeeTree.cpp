#include <bits/stdc++.h>
using namespace std;

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

class Employee {
public:
    int id;
    string name;
    int empType;
    int baseSalary;

    Employee(int id, string name, int empType, int baseSalary)
        : id(id), name(name), empType(empType), baseSalary(baseSalary) {}

    int TotalSal() const {
        int DA, HRA;
        int total_salary;
        if (empType == 1) {
            DA = baseSalary * 0.65;
            HRA = baseSalary * 0.20;
        } else if (empType == 2) {
            DA = baseSalary * 0.55;
            HRA = baseSalary * 0.15;
        } else if (empType == 3) {
            DA = baseSalary * 0.45;
            HRA = baseSalary * 0.10;
        }
        total_salary = baseSalary + DA + HRA;
        return total_salary;
    }

    void display() const {
        cout << "ID: " << id << ", Name: " << name << ", Total Salary: " << TotalSal() << endl;
    }
};

class Node {
public:
    Employee *emp;
    Node *left;
    Node *right;

    Node(Employee *emp) : emp(emp), left(nullptr), right(nullptr) {}
};

class BinaryTree {
public:
    Node *root;

    BinaryTree() : root(nullptr) {}

    Node *NewNode(Employee *emp) {
        return new Node(emp);
    }

    void PreOrder(Node *temp) {
        if (temp != nullptr) {
            temp->emp->display();
            PreOrder(temp->left);
            PreOrder(temp->right);
        }
    }

    void InOrder(Node *temp) {
        if (temp != nullptr) {
            InOrder(temp->left);
            temp->emp->display();
            InOrder(temp->right);
        }
    }

    void PostOrder(Node *temp) {
        if (temp != nullptr) {
            PostOrder(temp->left);
            PostOrder(temp->right);
            temp->emp->display();
        }
    }
};

int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    Employee e1(1, "sahil", 1, 100000);
    Employee e2(2, "mayur", 2, 50000);
    Employee e3(3, "pali", 3, 80000);
    Employee e4(4, "shreya", 1, 70000);
    Employee e5(5, "saloni", 2, 100000);
    Employee e6(6, "lakhsay", 3, 50000);
    Employee e7(7, "pathan", 1, 90000);

    BinaryTree bt;
    bt.root = bt.NewNode(&e1);
    bt.root->left = bt.NewNode(&e2);
    bt.root->right = bt.NewNode(&e3);
    bt.root->left->left = bt.NewNode(&e4);
    bt.root->left->right = bt.NewNode(&e5);
    bt.root->right->left = bt.NewNode(&e6);
    bt.root->right->right = bt.NewNode(&e7);

    cout << "PreOrder Traversal:" << endl;
    bt.PreOrder(bt.root);

    cout << "InOrder Traversal:" << endl;
    bt.InOrder(bt.root);

    cout << "PostOrder Traversal:" << endl;
    bt.PostOrder(bt.root);

    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}
