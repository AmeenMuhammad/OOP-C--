#include <iostream>
#include <string>

using namespace std;

class car
{
public:
string name;
string color;
int price;
int speed;

void CarDetail(string a, string c, int b, int d){
    name = a;
    price = b;
    color = c;
    speed = d;
}

void display(){
    cout << "Name: " << name << "\n ";
    cout << "Color: " << color << "\n ";
    cout << "Price: " << price << "\n ";
    cout << "Speed: " << speed << "\n ";
}
};

int main(){

    car c1;
    car c2;

    c1.CarDetail("Honda","Black", 200, 20000);
    c1.display();
    c2.CarDetail("suzuki","white", 130, 150000);
    c2.display();

    return 0;
}