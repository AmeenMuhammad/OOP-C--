#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class polymorhsm
{

public:
   void virtual shape(){
    cout << "Shape class: " << endl;
   }
   virtual ~polymorhsm(){
    cout << "Clean Shape area" << endl;
   }
};

class Reactangle: public polymorhsm{
    public:
    void virtual shape() override{
        cout << "React Angle square: " << endl;
    }
};

int main(){
    Reactangle shp;
    shp.shape();

    return 0;
}