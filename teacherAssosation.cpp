#include <iostream>
#include <string>

using namespace std;

class teacherAssosation
{

public:
    string name;
};

class Teacher
{
    public:
    void teach(teacherAssosation sdt){
        cout << "Teaching: " << sdt.name << endl;
    }
};

int main(){
    teacherAssosation s1;
    Teacher t1;
    s1.name = "Ameen";
    t1.teach(s1);

    return 0;
}


