#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// Location Class
class Location {
public:
    string city, area;
    void setLocation() {
        cout << "Enter city: ";
        cin >> city;
        cout << "Enter area: ";
        cin >> area;
    }
    void displayLocation() {
        cout << "Location: " << area << ", " << city << endl;
    }
};

// Evidence Class
class Evidence {
public:
    string evidenceDesc;
    void setEvidence() {
        cout << "Enter evidence description: ";
        cin.ignore();
        getline(cin, evidenceDesc);
    }
    void displayEvidence() {
        cout << "Evidence: " << evidenceDesc << endl;
    }
};

// Report Base Class
class Report {
private:
    string name, contact;

protected:
    bool isVerified;

public:
    virtual void setReport() {
        cout << "Enter reporter name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter contact number: ";
        getline(cin, contact);
        cout << "Is the report verified? (1 for Yes, 0 for No): ";
        cin >> isVerified;
    }

    virtual void displayReport() {
        cout << "\nReporter Name: " << name << endl;
        cout << "Contact Number: " << contact << endl;
        cout << "Verification Status: " << (isVerified ? "Verified" : "Not Verified") << endl;
    }

    virtual ~Report() {}
};

// Derived CrimeReport Class
class CrimeReport : public Report {
public:
    string crimeType, description;
    Location location;
    Evidence evidence;
    string reportTime;

    void setReport() override {
        Report::setReport();
        cout << "Enter crime type: ";
        cin.ignore();
        getline(cin, crimeType);
        cout << "Enter description: ";
        getline(cin, description);
        location.setLocation();
        evidence.setEvidence();

        time_t now = time(0);
        reportTime = ctime(&now);
    }

    void displayReport() override {
        Report::displayReport();
        cout << "Crime Type: " << crimeType << endl;
        cout << "Description: " << description << endl;
        location.displayLocation();
        evidence.displayEvidence();
        cout << "Reported At: " << reportTime << endl;
    }
};

// Main Function
int main() {
    int maxReports;
    cout << "Enter maximum number of reports: ";
    cin >> maxReports;

    Report** reports = new Report*[maxReports];
    int count = 0;
    int choice;

    do {
        cout << "\n===== Crime Reporting System =====\n";
        cout << "1. Add New Crime Report\n";
        cout << "2. Display All Reports\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (count < maxReports) {
                    reports[count] = new CrimeReport();
                    reports[count]->setReport();
                    count++;
                } else {
                    cout << "Maximum report limit reached!\n";
                }
                break;

            case 2:
                for (int i = 0; i < count; ++i) {
                    cout << "\n--- Report #" << i + 1 << " ---\n";
                    reports[i]->displayReport();
                }
                break;

            case 3:
                cout << "Exiting the program...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 3);

    // Deallocate memory
    for (int i = 0; i < count; ++i)
        delete reports[i];
    delete[] reports;

    return 0;
}
