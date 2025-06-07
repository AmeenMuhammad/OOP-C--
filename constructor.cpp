#include <iostream>
#include <string>

using namespace std;

class constructor
{
private:
    
public:

    string name;
    string job;
    int id;
    int number;

    // non - parametrize Constructor 
    // constructor(){
    //     cout <<"Non parametrize constructor " << endl;
    // }
    constructor(string a, string b, int c , int d){ 
        
        this->name = a;           // use this pointer
        this->job = b;
        this->id = c;
        this->number = d;
    }
    // copy constructor
    constructor(constructor &obj){
        cout <<"\n copy constructor \n" << endl;
        this->name = obj.name;
        this->job = obj.job;
        this->id = obj.id;
        this->number = obj.number;
    }
    void display(){
        cout <<"Employee Name: " << name << endl;
        cout << "Employee job Title: " << job << endl;
        cout << "Employee Id: " << id << endl;
        cout << "Employee number: " << number << endl;
    }
};

int main(){
    constructor cn("Ameen Muhammad", "Software Enginear", 01, 0344555122);
    //cn.display();
    
    cout <<"===========================================\n";
    // Drfault copy constructor 

    constructor cn2(cn);
    cn2.display();
    return 0;
}