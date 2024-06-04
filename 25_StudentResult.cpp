#include <iostream>
#include <string>
#include <chrono>
using namespace std;

class Student {
protected:
    string Name;
    int Rollno;
public:
    Student(int rollno, string name) {
        Rollno = rollno;
        Name = name;
    }
};

class Test: public Student {
    int totalMarks;
    float Percentage;
    string Division;
    string Result;
public:
    Test(int ROLLNO, string NAME, int s1, int s2, int s3) : Student(ROLLNO, NAME) {
        totalMarks = s1 + s2 + s3;
        Percentage = ((s1 + s2 + s3) / 300.0) * 100;
        if (Percentage > 90)
            Division = "First";
        else if (Percentage > 80 && Percentage <= 90)
            Division = "Second";
        else if (Percentage > 60 && Percentage <= 80)
            Division = "Third";
        else
            Division = "F";

        if (Division == "F")
            Result = "FAIL";
        else
            Result = "PASS";
    }

    void PrintResult() {
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Percentage: " << Percentage << endl;
        cout << "Division: " << Division << endl;
        cout << "Result: " << Result << endl;
    }
};

int main() {
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    Test t1(1, "Sahil", 96, 99, 97);
    t1.PrintResult();

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}
