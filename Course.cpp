#include <iostream>
#include <string>

using namespace std;

class Course {
private:

string name;
int rollNo;
float CGPA;

public:
   void student(string a, int b, float c){

    name = a;
    rollNo = b;
    CGPA = c;
}
void Display(){
    cout << "Name: " << name << "\n ";
    cout <<"Roll No: " << rollNo << "\n";
    cout << "CGPA: " << CGPA ;
} 

};

int main(){
    Course st1;
    st1.student("Ameen Muhammad", 8, 3.7);
    st1.Display();

    return 0;
}

/*

Consider a C++ program that demonstrates the concept of association between two classes: 
Student and Course. In this program, each Course object has a course name, and each Student 
object has a name and a list of enrolled courses. The student can enroll in multiple
courses using the enroll() function, which stores course objects in a vector. 
The showEnrolledCourses() function displays all the courses the student is enrolled in. 
In the main() function, two course objects (Mathematics and Computer Science) 
and one student object (Ali) are created. 
The student is then enrolled in both courses, and her enrolled courses are displayed.

*/