#include <iostream>
using namespace std;

template <typename T2>
T2 name(T2 a , T2 b){
    
    return a + b;
}

// T add(){
//     T a, b;
//     cout <<"First number: ";
//     cin>> a;
//     cout <<"Second number: ";
//     cin >> b;
//     return a + b;
// }
// T add(T a, T b){
//     return a + b;
// }

int main()
{

    //cout <"Enter two number add : "<< add<int>() << endl;
    //cout <<"sum of two double value: " << add(2.5, 4.5) << endl;
    cout << "Calling function: " << name<string>("abc", "def") << endl;

    // cout << "enter two numbers to add: " << endl;
    // cout << "Sum of two integers: " << add<int>() << endl;
    // cout << "Sum of two doubles: " << add<double>() << endl;

    // cout <<"sum of 5 and 3: " << add(3, 5) << endl;
    // cout <<"sum of 2. 5" << add(2.5, 4.1) << endl;
    return 0;
}