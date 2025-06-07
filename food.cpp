#include <iostream>
#include <string> 
using namespace std;

class food
{

public:
    virtual void foodItem(){                        // Base Class
        cout <<"Base Class Fodd Items " << endl;
    }

    virtual ~food(){
        cout << "Food item completed " << endl;
    }
};

class pizza : public food{                          // Drive Class
    virtual void foodItem() override{
        cout << "Pizza Reasturant: " << endl;
    }
};

class Burger : public food{                           // drive Class
    virtual void foodItem() override{
        cout << "Burger Resturant " << endl;
    }
};
                                                        
class Salad : public food{                             // Drive class
    virtual void foodItem() override{
        cout <<"Salad Resturant " << endl;
    }
};

int main(){

    food * order1 = new pizza(); // pinter new object call function
    food * order2 = new Burger();
    food * order3 = new Salad();

    order1 ->foodItem();
    order2 ->foodItem();
    order3 ->foodItem();

    delete order1;
    delete order2;
    delete order3;

    // food *item;
    // pizza p;
    // Burger b;
    // Salad s;
    // item = &p;
    // item->foodItem();
    // item = &b;
    // item ->foodItem();
    // item = &s;
    // item -> foodItem();

    return 0;
}