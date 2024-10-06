# EXP_14_INHERITANCE
# CDS-experiment-14-

AIM:- to learn and implement inheritance in cpp <br>

Software used:- VS code 

Theory:-<br>
Inheritance is the property of object oriented programming where the child class can inherit the properties from the parent class.<br>
Modes of INERITANCE:-<br>
1).Public inheritance:- members of the base class retain their visiblty in the in the derieved class .Public members remain public<br>
2).Protected inheritance :-public and protected members of the base class become protected in derived class<br>
3).Private inheritance:-all publicand protected member of the base class become private in the derived class<br>

Single Inheritance:<br>
A derived class inherits from a single parent class.<br>
Multiple Inheritance<br>
A derived class inherits from more than one parent class.<br>
Multilevel Inheritance:<br>
A class is derived from another child class.<br>
Hierarchical Inheritance:<br>
Multiple child classes inherit from the same parent class<br>

CODE:-
a
```
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
```
b
```
#include<iostream>
#include<string>
using namespace std;
//multiple inheritance

class Bike{ //parent class 1
    public:
    string model = "TWO WHEELER";
    void company(){
        cout<<endl<<"BAJAJ";
    }
};

class fuelType{ //parent class 2
    public:
    string gas = "FUEL";
    void DisplayGas(){
        cout<<endl<<"CNG";
    }
};

class super: public Bike , public fuelType{
    public:
    string modelName = "FREEDOM";
};

int main(){
    super v1;
    v1.company();
    v1.DisplayGas();
    cout<<endl<<v1.model<<endl<<" "<<v1.gas<<endl<<" "<<v1.modelName<<endl;
    return 0;
}

```
c
```
#include <iostream>
#include <string>
using namespace std;

class plantKingdom
{
public:
string plant = "Plant Classification";
void plantKing()
{
    cout << "Kingdom: Plantae ";
}
};

class division: public plantKingdom
{
public:
string div = "Division: Magnoliophyta ";
};

class plantClass: public division
{
public:
string pClass = "Class: Magnoliopsida ";
};

class plantOrder: public plantClass
{
public:
string pOrder = "Order: Rosales ";
};

class plantFamily: public plantOrder
{
public:
string pFamily = "Family: Rosaceae";
};

class plantGenus: public plantFamily
{
public:
string pGenus = "Genus: Rosa";
};

class plantSpecies: public plantGenus
{
public:
string pSpecies = "Species: Rosa indica";
};

int main()
{
plantSpecies p1;
cout << p1.plant << endl;
p1.plantKing();
cout << endl;
cout << p1.div << endl;
cout << p1.pClass << endl;
cout << p1.pOrder << endl;
cout << p1.pFamily << endl;
cout << p1.pGenus << endl;
cout << p1.pSpecies << endl;
}
```
d
```
#include <iostream>
using namespace std;

class Animal
{
public:
void eat()
{
    cout << "This animal eats food." << endl;
}
};

class Mammal : public Animal
{
public:
void sound()
{
    cout << "Mammal makes sound." << endl;
}
};

class Bird : public Animal
{
public:
void fly()
{
    cout << "Bird flies in the sky." << endl;
}
};

int main()
{
Mammal dog;
Bird sparrow;

cout << "Mammal actions:" << endl;
dog.eat();   
dog.sound();
cout << "\nBird actions:" << endl;
sparrow.eat(); 
sparrow.fly();

return 0;
}
```
## OUTPUT
![image](https://github.com/user-attachments/assets/81010aa3-f341-4ca0-8c29-c2d77101efa0)
![image](https://github.com/user-attachments/assets/5f17b426-0e71-4646-94fd-f513f82e0d67)
![image](https://github.com/user-attachments/assets/fee85a0f-6cf6-4727-9fd1-9e3db9183723)
![image](https://github.com/user-attachments/assets/fbced082-2be1-47bf-a577-438bab0a8281)
