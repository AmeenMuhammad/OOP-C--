#include <iostream>
#include <string>

using namespace std;

class BankAccount
{

public:
    string AccountNumber;
    double balance;

    BankAccount(string Accnumber, double InitailBalance){ // constructor to intial Account number   

        AccountNumber = Accnumber;
        balance = InitailBalance;
    }

    void Deposit(double Amount){

        balance += Amount;
        cout <<"\nDeposite Amount: " << Amount << endl;
        cout <<"\nSuccesssfully Deposite Amount New balance: "<< balance << endl;
    }
    void WithDraw(double Amount){
        cout << "\nWith Draw Amount: " << Amount << endl;

        if (Amount <= balance)
        {
            balance -= Amount;
            cout << "\nWithdraw Successfull - New balance: " << balance << endl;
        }
        else
        {
            cout << "\nInsuffiucent Balnce: " << endl;
        }
    }
    void ShowBalnce(){
        cout <<"\n=========== Show Initial Details Account ===============\n";
        cout << "Account Number: " << AccountNumber << endl;
        cout << "New Balance: " << balance << endl;
    }
};

int main(){
    BankAccount employe("Am-123", 30000);

    employe.ShowBalnce();

    employe.Deposit(2000); // Deposit money
    employe.WithDraw(1200); // Draw Money

    employe.WithDraw(2300);

    return 0;
}
