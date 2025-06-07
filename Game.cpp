#include <iostream>
#include <string>

using namespace std;

class Game
{

public:
   void virtual attack(){
        cout <<"Base Class Virtual "<< endl;
    }
    virtual ~Game(){
        cout <<"Complete Game Over Successfull "<< endl;
    }
};
// Drive class 
class Warior : public Game{
    void virtual attack() override{
        cout <<"Warior class , game start " << endl;
    }
};
// dirve class
class Mage : public Game{
    void virtual attack() override{
        cout <<"Mage class , Game runing " << endl;
    }
};
// drive class 
class Archer : public Game{
    void virtual attack() override{
        cout << "Archer throw ball in air , Archer class " << endl;
    }
};

int main(){
    Game * w = new Warior();
    Game * m = new Mage();
    Game * a = new Archer();

    w ->attack();
    m ->attack();
    a ->attack();

    delete w;
    delete m;
    delete a;

    return 0;
}