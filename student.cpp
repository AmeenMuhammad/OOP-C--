#include <iostream>
#include <string>

using namespace std;

class student
{
public:
    string name;
    int id;
    string address;
    int age;

    void stdt(string a, int b, string c, int d){
        name = a;
        id = b;
        address = c;
        age = d;
    }

    void Display(){
        cout <<"name: " << name <<"\n ";
        cout <<"ID: " << id <<"\n";
        cout << "Age: " << age << " \n";
        cout << "Address: " << address << "\n";
    }
};

int main(){

    student st;

    st.stdt("Ameen", 8, "Badin", 22);
    st.Display();

    return 0;
}