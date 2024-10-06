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