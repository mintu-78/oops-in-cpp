#include <iostream>
#include <string>
using namespace std;

class Teacher {
    private:
    double salary;


    public:
    string name;
    string dept;
    string subject;
    

    // methods
    void changeDept(string newDept){
        dept = newDept;
    }

};



int main (){
    Teacher t1;
   t1.name = "Mintu";
   t1.subject = "C++";
   t1.dept = "Computer Science";
   

   cout << t1.name <<endl;


    return 0;
}