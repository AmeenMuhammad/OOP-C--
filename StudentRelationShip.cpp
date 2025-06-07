#include <iostream>
#include <string>

using namespace std;

class StudentRelationShip
{									// inheritance program 
public: 
	string name;
	int rollNo;
	string department;
	string course;

 	void Student(string StdName, int StudentrollNo, string Studentdept, string Studentcourse){
	
		this->name = StdName;
		this->rollNo = StudentrollNo;
		this->department = Studentdept;
		this->course = Studentcourse;
		}
};
class Department : public StudentRelationShip{ // inheritanace class A member intilize Classs B  
	public:
	string UniversityName;;
	int UniversityId;
	string UniAdress;
	void university(string uniName, int uniId, string uniAdress) {

		this->UniversityName = uniName;
		this->UniversityId = uniId;
		this->UniAdress = uniAdress;
	}
	void displayDepartmentInfo() {
		cout << "Student Name: " << name << endl;
		cout << "RollNo : " << rollNo << endl;
		cout << "Department: " << department << endl;
		cout << "course: " << course << endl;
		cout << "Department Name: " << UniversityName << endl;
		cout << "University ID: " << UniversityId << endl;
		cout << "University Address: " << UniAdress << endl;
	}
};

int main() {
	
	Department s1;
	
	s1.name = "Ameen Muhammad";
	s1.rollNo = 012;
	s1.department = "Computer Science";
	s1.course = "CSA-122";
	s1.university("Software Engneairing", 12345, "Jamshoro, Sindh");


	s1.displayDepartmentInfo();
	
	return 0;
}
