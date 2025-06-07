// use inheritance method group class Base class and Drive class 
#include <iostream> 
#include <string> 

using namespace std;

class person
{

public:
    string name;
    string lastname;
    string address;

    void inforamation(string firstname, string lastname, string address){ // base class
        this->name = firstname;
        this ->lastname = lastname;
        this->address = address;
    }

    // default constructor 
    // person(string name, string lastname, string address){
        
    //     this->name = name;
    //     this->lastname = lastname;
    //     this ->address = address;
    // }

    ~person(){ // descontructor
        cout <<"\nClean All Data Successfull " << endl;
    }
};
// Drive class 

class Detail : public person{
    public: 
    int id;
    int number;
    string email;

    void record(int Id, int Numbr, string Email){
        this->email = Email;
        this->id = Id;
        this->number = Numbr;
    }

        // Detail(string name, string lastname, string address, int id, int number, string email ) : 
        // person(name, lastname, address){
        // cout <<"\nChild Class or Drive class \n" << endl;

        // this->id = id;
        // this->number = number;
        // this->email = email;}

    void Display(){
        cout <<"Name: " << name << endl;
        cout << "Last name: " << lastname << endl;
        cout << "Address: " << address << endl;
        cout << "ID: " << id << endl;
        cout << "number: " << number << endl;
    }
};

int main(){
    //  Detail d1("Am", "Muhammad", "Krachi", 321, 02212 );
    Detail d1;
    d1.name = "Ameen";
    d1.lastname = "muhammad";
    d1.address = "Krachi";
    d1.id = 890;
    d1.number = 0322111;
    d1.email = "ameenmuhammadjat@gmail.com";

    d1.Display();
    return 0;
}