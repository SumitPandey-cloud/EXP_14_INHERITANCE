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

