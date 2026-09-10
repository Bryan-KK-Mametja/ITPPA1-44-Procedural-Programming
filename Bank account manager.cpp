#include <iostream>

using namespace std;

//void createAccount
string name;
int accountNumber;
double balance;

//void depositMoney
double inititalDeposit;
double newBalance;

//void withdrawMoney
double withDrawAmount;
double totalWithdrawal;

void createAccount(string &name, int &accountNumber, double &balance){
    cout << "Enter name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter your account number: ";
    cin >> accountNumber;
    cout << "Enter your initial deposit (must be greater than 0): R ";
    cin >> inititalDeposit;
    if(inititalDeposit <= 0){
        cout << "Invalid input" << endl;
    }else{
    }

}

void depositMoney(double &balance){
    cout << "Enter amount you would like to deposit: R ";
    cin >> newBalance;
    inititalDeposit = balance + newBalance;
    cout << "R " << inititalDeposit << endl;
};

void withdrawMoney(double &balance){
    cout << "The amount you would like to withdraw: R ";
    cin >> withDrawAmount;
    if(withDrawAmount > balance){
        cout << "The amount of money that you would like to withdraw is less than the amount you have." << endl;
    }else{
        inititalDeposit = balance - withDrawAmount;
        cout << "Remaining: R " << inititalDeposit << endl;
    }
}

void checkBalance(const double &balance){
    cout << "Current balance is: R " << inititalDeposit << endl;
}

void displayAccountDetails(const string &name, const int &accountNumber, const double &balance){
    cout << "--- Account Details ---" << endl;
    cout << "Account Holder: " << name << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Current Balance: R " << inititalDeposit << endl;
}

int main(){
    bool isRunning = true;
    int choice;

    while(isRunning=true){
        cout << "*** Bank Account Management System ***" << endl;
        cout << "1. Create Account" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Check Balance" << endl;
        cout << "5. Display Account Details" << endl;
        cout << "6. Exit" << endl << endl;
        cout << "Enter your choice (1-6): ";
        cin >> choice;
        if(choice == 1){
            createAccount(name, accountNumber, inititalDeposit);
        }
        if(choice == 2){
            depositMoney(inititalDeposit);
        }
        if(choice == 3){
            withdrawMoney(inititalDeposit);
        }
        if(choice == 4){
            checkBalance(inititalDeposit);
        }
        if(choice == 5){
            displayAccountDetails(name, accountNumber, inititalDeposit);
        }
        if(choice == 6){
            cout << "Exiting the system. Goodbye!";
            isRunning = false;
            break;
        }
    }

    return 0;
}


