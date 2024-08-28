

#include <iostream>
using namespace std;

//======= Varaiable ========//
int passward = 4578;
double balance = 1000;
int withdrawl = 0;
int depsoit = 0;
int Choice = 0;
//=========================// 

//DisplayMenu is Function that show the menu of ATM
void displayMenu();

//CheckBalance Functoin That Show me Current Balance in Account
void checkBalance();


// Depsoit Function that make process of Depsoit form account
void Depsoit();

// Withdewal Function that make process of withdrawal form account
void Withdrawal();

// Login Function have ALl Process that done in ATM
void Login();


int main()
{
    Login();

    return 0;
}

void displayMenu()
{
    cout << "\n=====================\n";
    cout << "\nATM Menu:\n";
    cout << "1. Check Balance. \n";
    cout << "2. Depsoit.\n";
    cout << "3. Wihhdrwal.\n";
    cout << "4. Exit.\n";
    cout << "\n=====================\n";

}
void checkBalance()
{
    cout << "You Balance Is: " << balance << endl;
}
void Depsoit()
{
    cout << "Your Current Balance is " << balance << endl;

    cout << "Enter amount to be Deposited?\n" << endl;
    cin >> depsoit;
    balance += depsoit;
    cout << "Your New Balance is " << balance << endl;

}
void Withdrawal()
{
    cout << "Note : your Balance is " << balance << endl;
    cout << "Enter amount to be Withdrawal?\n" << endl;
    cin >> withdrawl;
    if (withdrawl > balance)
    {
        while (withdrawl > balance)
        {
            cout << "Error, Your Amount you want to withdrawl is greater than you have in account! Try Again\n";
            cin >> withdrawl;
        }
    }
    else
    {
        balance = balance - withdrawl;
    }
}
void Login()
{
    cout << "\nWelcome in our Bank, We Are Happy to help you..\n";
    cout << "Plesese Enter Your Passward? \n";
    cin >> passward;
    do
    {
        if (passward == 4578)
        {
            displayMenu();
            do
            {
                cout << "Enter You Choice From 1 To 4?\n";
                cin >> Choice;
            } while (Choice > 4);
        }
        else
        {
            char choice = 's';
            cout << "Your Passward is wrong, choice [Y] to enter passward again or [N] to finish program\n";
            cin >> choice;
            if (choice == 'Y' || choice == 'y')
            {
                cin >> passward;
            }
            else
            {
                Choice = 4;
            }
        }
        switch (Choice)
        {
        case 1:
            checkBalance();
            break;
        case 2:
            Depsoit();
            break;
        case 3:
            Withdrawal();
            break;
        case 4:
            cout << "Program Finished\n";
            break;

        }

    } while (Choice < 4);

}




