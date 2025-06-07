#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Location{
    public:
    string City;
    string Area;

    void Setloaction(){
        cout <<"Enter City Name: ";
        cin >> City;

        cout <<"Enter Area Information city: ";
        cin >> Area;
    }
    void GetLocation(){
        cout <<"City Name: " << City << endl;
        cout << "Area Information: " << Area << endl;
    }
};

class Evidence{
    public:
    string Description;

    void SetEvidence(){
        cout <<"enter Evidence Description Report: ";
        cin.ignore();
        getline(cin , Description);
    }
    void getevidence(){
        cout <<"Description: " << Description << endl;
    }
};
// Report Base Class 
class Report {
private:
    string name;
    string contact;

protected:
    bool VeryfiedStuts;

public:
    virtual void SetReport(){
        cout <<"Enter Name: ";
        cin.ignore();
        getline(cin, name);

        cout <<"Enter Contact Number: " << endl;
        getline(cin, contact);

        // protect memmber add
        cout <<"Report verify option (1) yes Succefull (0) not verified: "<< endl;
        cin >> VeryfiedStuts;
    }
    virtual void DisplayReport(){
        cout <<"Name: " << name << endl;
        cout << "Contact Number: " << contact << endl;
        cout <<"Veryfictation Stuts: " << (VeryfiedStuts? "Veryfied" : "not veryfied" )<< endl;
    }
    virtual ~Report(){
        cout <<"\nClean All data " << endl;
    }
};

// Drive class 
class CrimeReport : public Report{
    public:
    string CrimeType;
    string CrimeDescrip;

    Location loaction;
    Evidence evidence;
    string reportTime;

    virtual void SetReport() override{
    
        Report::SetReport();   

        cout <<"Enter Crime Type: " << CrimeType;
        cin.ignore();
        getline(cin, CrimeType);

        cout <<"Crime type Description: " << CrimeDescrip;
        getline(cin, CrimeDescrip);

        loaction.Setloaction();
        evidence.SetEvidence();

        time_t now = time(0);
        reportTime = ctime(&now);
    }
    void DisplayReport(){
        Report::DisplayReport();
        cout <<"Crime Type: " << CrimeType << endl;
        cout <<"Report Description: " << CrimeDescrip << endl;

        loaction.GetLocation();
        evidence.getevidence();

        cout <<"Report Time: " << reportTime << endl;
    }
};

int main(){

    int maxReports;
    cout << "Enter Miximum Number Report Add: ";
    cin >> maxReports;;

    Report** newReoprt = new Report*[maxReports];

    int count = 0;
    int choice;

    do{
        cout <<"\n================= Crime Report System ================= \n";
        cout <<"1. Add a new Crime Reportr: \n";
        cout <<"2. Display All Crime Report: \n";
        cout <<"3. Exit Program ------ Thnk you: ";

        cout <<"Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
           if (count < maxReports)
           {
            newReoprt[count] = new CrimeReport();
            newReoprt[count]-> SetReport();
            count++;
           }else
           {
             cout << "maximum Report Reached: "<< endl;
           }
            break;
        case 2:
            for (int i = 0; i < count; i++){
                cout <<"\n======= Report#: " << i + 1 << "------------\n";
                newReoprt[i]->DisplayReport();
            }
            break;

        case 3:
            cout << "Exitng Program " << endl;
            break;

        default:
            cout << "Invalid Choice: " << endl;
            break;
        }
    }while(choice != 3);

    for (int i = 0; i < count; ++i)
    {
        delete newReoprt[i];
        delete[] newReoprt;
    }
    
    return 0;
}