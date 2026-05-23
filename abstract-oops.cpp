#include <iostream>
#include <string>
using namespace std;

class Shap{ //abstract class
    virtual void drow() = 0; // pure virtual function
};

class Circle : public Shap{
    public:
        void drow(){
            cout  << "drawing a circle\n";

        }
};


int main (){
    Circle c1; 
    c1.drow();
    return 0;
}

