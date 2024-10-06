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