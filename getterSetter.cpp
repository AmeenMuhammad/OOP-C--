#include <iostream>
#include <string>

using namespace std;

class getterSetter
{
private:
    double salary;
public:
    getterSetter(){
        cout <<"Constructor method " << endl;
    }
    string name;
    string addres;
    int id;
    string jobTitle;
    string department;

    void employe(string a , string b, int c, string d, string e){

        name = a;
        addres = b;
        id = c;
        jobTitle = d;
        department = e;
    }
    // use method sete method
    void SetSalary(double s){
        salary = s;
    }
    double getSalary(){
        return salary;
    }
};
   
int main(){

    getterSetter get;

    get.name = "Ameen Muhammad";
    get.addres = "Badin";
    get.id = 1001;
    get.jobTitle = "Software Enginear";
    get.SetSalary(250000);

    cout << get.name << "\n" << get.addres << "\n" << get.department << "\n" << get.id << "\n" << get.jobTitle;
   // cout << get.SetSalary() << endl;
    return 0;
}