#include <iostream>
#include <string>

using namespace std;

class GameCharacter
{

public:
    virtual void attack(){
        cout << "Game Attack Class " << endl;
    }
  //  virtual ~GameCharacter(){}
};

class Warior : public GameCharacter{
    virtual void attack() override{
        cout << "Warior Ride Attacking: " << endl;
    }
};

class Mage : public GameCharacter{
    virtual void attack() override{
        cout << "Mage game class " << endl;
    }
};
// 
class Archer : public GameCharacter{
    virtual void attack() override {
        cout << "Archer class Throw ball " << endl;
    }
};

int main(){
    GameCharacter *game;

    Warior w;
    Mage m;
    Archer a;

    game = &w;
    game->attack();

    game = &m;
    game ->attack();

    game = &a;
    game ->attack();

    return 0;
}