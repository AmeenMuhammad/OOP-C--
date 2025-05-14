#include <iostream>
#include <string>

using namespace std;

class book
{
public:

string name;
int price;
string edition;

void BookInfromation(string a, int b, string c){
    name = a;
    price = b;
    edition = c;
}
 void DisplayBook(){
    cout <<"Name: " << name <<"\n";
    cout <<"Price: " << price << "\n";
    cout <<"Eddition: " << edition <<"\n";
 }
};

int main(){
    book bk1;
    book bk2;

    bk1.BookInfromation("java:" , 2000, "11th genration");
    bk1.DisplayBook();

    bk2.BookInfromation("Python", 1000, "12Th Genration");
    bk2.DisplayBook();

    return 0;
}