#include <iostream>
#include <string>

using namespace std;

class polymorhism12
{
// Base Class ,, Parent
public:
    void Parent(){
        cout << "\nFather of Child \n";
    }
};

class Child : public polymorhism12{
    public:
    void parent(){
        cout << "Child Class \n";
    }
};

int main(){

    polymorhism12 newparent;

    Child mychild;

    newparent.Parent();
    mychild.Parent();
    mychild.parent();

    return 0;
}