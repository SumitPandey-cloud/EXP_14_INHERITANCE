#include<iostream>
#include<string>
using namespace std;
//single inheritance

class Uni{          // parent class
    public:
    string uni = "Symbiosis";
    void discipline(){
        cout<<"Engineering"<<endl;
    }};

class Dep: public Uni{     //child class
    public:
    string dept = "Electronics";
};

int main(){
    Dep u1;
    u1.discipline();
    cout<<u1.uni+" "+u1.dept;
}