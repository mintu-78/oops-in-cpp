#include <iostream>
#include <string>
using namespace std;

class Teacher {
    private:
    double salary;


    public:

    Teacher(){ //non parameterized
        dept = "Computer Science";
    }

    Teacher(string n, string d, string s, double sal){//parameterized
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }
    string name;
    string dept;
    string subject;
    

    // methods
    void changeDept(string newDept){
        dept = newDept;
    }

    // setter
    void setSalary(double s){
        salary = s;
    }

    // getter
double getSalary(){
    return salary;
}

};



int main (){
    Teacher t1; //constructor call
    Teacher t2;
   t1.name = "Mintu";
   t1.subject = "C++";
//    t1.dept = "Computer Science";
   t1.setSalary (100000);
   

   cout << t1.dept <<endl;
//    cout << t1.getSalary() << endl;


    return 0;
}