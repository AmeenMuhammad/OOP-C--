#include <iostream>
using namespace std;

class polymorphism
{

    // Base class 

    public:
    void animalSound(){
        cout << "\n\nAnmial Sound a makes \n" << endl;
    }
};

// Drive class class 

class Sound : public polymorphism{
    public : 
    void animalSound(){
        cout << "This Sound Cat " << endl;
    }
};

// Drive class 

class Dog : public polymorphism{
    public :
    void animalSound(){
        cout << "Dog Sound " << endl;
    }
};

int main(){
    polymorphism myAnimal;

    Sound mySound;
    Dog myDog;

    myAnimal.animalSound();
    mySound.animalSound();
    myDog.animalSound();

    return 0;
}