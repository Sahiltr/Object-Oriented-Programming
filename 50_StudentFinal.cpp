#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18
#define f first
#define s second

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

class Student {
    int roll;
    string name;
public:
    Student() {}
    Student(int roll, string name) {
        this->roll = roll;
        this->name = name;
    }

    int getRoll() {
        return roll;
    }

    string getName() {
        return name;
    }
};

class Exam : public Student {
    int s1;
    int s2;
    int s3;
public:
    Exam() {}
    Exam(int s1, int s2, int s3, int roll, string name) : Student(roll, name) {
        this->s1 = s1;
        this->s2 = s2;
        this->s3 = s3;
    }

    float TotalMarks() {
        float total_marks = s1 + s2 + s3;
        return total_marks;
    }
};

class Sports {
    int sport1;
    int sport2;
public:
    Sports() {}
    Sports(int sport1, int sport2) {
        this->sport1 = sport1;
        this->sport2 = sport2;
    }

    float total_sports_marks() {
        int totalSport = sport1 + sport2;
        return totalSport;
    }
};

class Result : public Exam, public Sports {
    float total_Per;
    string res;
    string division;
    int allTotal;
public:
    Result() {}
    Result(int s1, int s2, int s3, int sport1, int sport2, int roll, string name)
        : Exam(s1, s2, s3, roll, name), Sports(sport1, sport2) {
        
        allTotal = s1 + s2 + s3 + sport1 + sport2;
        total_Per = (allTotal / 500.0) * 100;

        if (total_Per > 90) {
            division = "A";
            res = "Pass";
        } else if (total_Per > 80 && total_Per <= 90) {
            division = "B";
            res = "Pass";
        } else if (total_Per > 70 && total_Per <= 80) {
            division = "C";
            res = "Pass";
        } else {
            division = "F";
            res = "Fail";
        }
    }

    float getTotal(){
      return allTotal;
    }

    float getResult() {
        return total_Per;
    }

    string getDivision() {
        return division;
    }

    string getRes() {
        return res;
    }
};

int32_t main() 
{
   auto begin = std::chrono::high_resolution_clock::now();
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   Result res[3];
   for(int i = 0; i < 3; i++){
     string name;
     cin>>name;
     int s1,s2,s3,sport1,sport2,roll;
     cin>>s1>>s2>>s3>>sport1>>sport2>>roll;
     res[i] = Result(s1,s2,s3,sport1,sport2,roll,name);
   }

   cout<<"Name\tRoll no\t Total\tPer\t  Div\tResult"<<endl;
   cout<<"------------------------------------------"<<endl;
   for(int i = 0; i < 3; i++){
    cout<<res[i].getName()<<"\t "<<res[i].getRoll()<<" \t  "<<res[i].getTotal()<<" \t"<<res[i].getResult()<<"   "<<res[i].getDivision()<<"\t"<<res[i].getRes()<<endl;
}

   return 0;
}