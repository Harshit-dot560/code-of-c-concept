#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
class Bankmanagmentsystem
{
private:
    string Bankname = "HBOI";
    int bankcode;
    string accountno;
    string acc_holder_name;
    string password;
    string adhaarno;
    string phoneno;
    double balance;
    vector<string> transactionhistory;

public:
    void savetofile();
    void loadfromfile();
    void mainmenu();
    void Createaccount();
    void loginaccount();
    void depositmoney();
    void withdrawmoney();
    void alltransactionhistory();
    void checkbalance();
};

void Bankmanagmentsystem ::savetofile()
{
    ofstream file(accountno + ".txt");
    if (file.is_open())
    {
        file << acc_holder_name << endl;
        file << accountno << endl;
        file << password << endl;
        file << adhaarno << endl;
        file << phoneno << endl;
        file << balance << endl;
        for (auto transaction : transactionhistory)
        { // explanation need?
            file << transaction << endl;
        }
        file.close();
    }
    else
    {
        cout << "Error openning a file!" << endl;
    }
}

void Bankmanagmentsystem ::loadfromfile()
{
    ifstream file(accountno + ".txt");
    if (file.is_open())
    {
        getline(file, acc_holder_name);
        getline(file, accountno);
        getline(file, password);
        getline(file, adhaarno);
        getline(file, phoneno);
        file >> balance;
        file.ignore();
        for (auto transaction : transactionhistory)
        {
            file >> transaction;
        }
        file.close();
    }
    else
    {
        cout << "Error in reading file " << endl;
    }
}

void Bankmanagmentsystem ::mainmenu()
{
    int choice;
    do
    {
        cout << "------------------------------" << endl;
        cout << "Enter 1 for Deposit money." << endl;
        cout << "Enter 2 for Withdrawl money." << endl;
        cout << "Enter 3 for All transaction history." << endl;
        cout << "Enter 4 for Check balance." << endl;
        cout << "Enter 5 for Logout." << endl;
        cout << "-------------------------------" << endl;
        cout << "Enter your choice from(1-5) : ";
        cin >> choice;
        cin.ignore();  // explain
        system("cls"); // explain
        switch (choice)
        {
        case 1:
            depositmoney();
            break;
        case 2:
            withdrawmoney();
            break;
        case 3:
            alltransactionhistory();
            break;
        case 4:
            checkbalance();
            break;
        case 5:
            cout << "Logging out..." << endl;
            break;
        default:
            cout << "Invalid choice . Choose option within range" << endl;
        }
    } while (choice != 5);
}

void Bankmanagmentsystem ::Createaccount()
{
    cout << " Create Account " << endl;
    cout << "-------------------" << endl;
    cout << "Enter your name: " << endl;
    getline(cin, acc_holder_name);
    cout << "Enter your phone no: " << endl;
    getline(cin, phoneno);
    cout << "Enter your adhaar no: " << endl;
    getline(cin, adhaarno);
    cout << "Enter your password: " << endl;
    getline(cin, password);
    cout << "-------------------" << endl;
    balance = 500.0;
    ifstream file("Bank-of-india.txt");
    if (file.is_open())
    {
        file >> bankcode;
        file.close();
        ofstream out("Bank-of-india.txt");
        if (out.is_open())
        {
            out << bankcode + 1;
            out.close();
        }
    }
    else
    {
        cout << "Error in openning file!... " << endl;
    }
    accountno = Bankname + to_string(bankcode);
    transactionhistory.push_back("Deposit: " + to_string(balance));

    cout << "Account created succesfully" << endl;
    cout << "Account no: " << accountno << endl;
    cout << "Account name: " << acc_holder_name << endl;
    cout << "Password: " << password << endl;
    cout << "Minimum Balance: 500.0" << endl;
    cout << "---------------------------" << endl;
    cout << " Account no. and password is used for login so carefully write it somewhere."<<endl; 
    savetofile();
}

void Bankmanagmentsystem ::loginaccount()
{
    string enteredaccountno;
    string enteredaccountpassword;
    cout << " login account " << endl;
    cout << "---------------" << endl;
    cout << "Enter account no: ";
    getline(cin, enteredaccountno);
    accountno = enteredaccountno;
    ifstream file(enteredaccountno + ".txt");
    if (file.is_open())
    {
        loadfromfile();
        cout << "Enter your account password: ";
        getline(cin, enteredaccountpassword);
        if (password == enteredaccountpassword)
        {
            cout << "login succesfull!" << endl;
            mainmenu();
        }
        else
        {
            cout << "Incorrect password!" << endl;
        }
        file.close();
    }
    else
    {
        cout << "Account not founded!" << endl;
    }
}

void Bankmanagmentsystem ::depositmoney()
{
    double amount;
    cout << "Enter the amount to deposit: ";
    cin >> amount;
    cin.ignore();
    if (amount > 0)
    {
        balance += amount;
        transactionhistory.push_back("Deposit: " + to_string(amount));
        cout << "Deposit succesfull!" << endl;
        cout << "New balance: " << balance << endl;
        savetofile();
    }
    else
    {
        cout << "Invalid amount!" << endl;
    }
}
void Bankmanagmentsystem ::withdrawmoney()
{
    double amount;
    cout << "Enter the amount to withdrawl ";
    cin >> amount;
    cin.ignore();
    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        transactionhistory.push_back("Withdrawl- " + to_string(amount));
        cout << "Withdrawl succesfull!" << endl;
        cout << "New balance: " << balance << endl;
        savetofile();
    }
    else
    {
        cout << "Invalid amount!" << endl;
    }
}

void Bankmanagmentsystem ::checkbalance()
{
    cout << " Check Balance: " << balance << endl;
    cout << "------------------";
}

void Bankmanagmentsystem ::alltransactionhistory()
{
    cout << " Transaction History: " << endl;
    cout << "-----------------------" << endl;
    for (auto &transaction : transactionhistory)
    {
        cout << transaction << endl;
    }
    cout << "------------------------" << endl;
}
int main()
{
    Bankmanagmentsystem Account;
    int choice;
    do
    {
        cout << " Bank Managment system " << endl;
        cout << "----------------------------" << endl;
        cout << "1. Create account " << endl;
        cout << "2. Login account " << endl;
        cout << "3. Exit " << endl;
        cout << "-----------------------------" << endl;
        cout << "Enter your choice: " << endl;
        cin >> choice;
        cin.ignore();
        system("CLS");
        switch (choice)
        {
        case 1:
            Account.Createaccount();
            break;
        case 2:
            Account.loginaccount();
            break;
        case 3:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalide choice !" << endl;
            break;
        }

    } while (choice != 3);
    return 0;
}