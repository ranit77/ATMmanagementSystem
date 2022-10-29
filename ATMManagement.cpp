#include <iostream>  #RanitGhosh
using namespace std;
string i;
string a;
int balance = 5000;
void reg() // Register user functionn()
{
    cout << "Enter Username:";
    cin >> a;
    cout << "Enter Password:";
    cin >> i;
}
void login() // Login User function()
{
    string p, q;
    cout << "Enter Username:";
    cin >> p;
    cout << "Enter Password:";
    cin >> q;
    if (p == a && q == i)
    {
        cout << "Login Successful" << endl;
    }
    else
    {
        cout << "Login Details does not match" << endl;
        while (p != a || q != i)
        {
            if (p != a && q == i)
            {
                cout << "Username does not match" << endl;
                cout << "Try again" << endl;
                cout << "Enter Username:";
                cin >> p;
            }
            if (q != i && p == a)
            {
                cout << "Password does not match" << endl;
                cout << "Try again" << endl;
                cout << "Enter Password:";
                cin >> q;
            }
            if (p != a && q != i)
            {
                cout << "Username and Password do not match" << endl;
                cout << "Try again" << endl;
                cout << "Enter Username:";
                cin >> p;
                cout << "Enter Password:";
                cin >> q;
            }
        }
    }
}
void check_balance()
{
    cout << "Current Balance:" << balance << endl;
    cout<<"-----------------------------"<<endl;
}
void cash_withdraw()
{
    int z,q;
    cout<<"Your Total Balance is:"<<balance<<endl;
    cout<<"Enter amount you want to withdraw:";
    cin>>z;
    q=balance-z;
    if(q>=0)
    {
      balance=balance-z;
      cout<<"Amount withdrawn is:"<<z<<endl;
      
    }
    else
    {
        cout<<"Balance low."<<endl;
    }
    cout<<"-----------------------------"<<endl;
}
void cash_deposit()
{
    int q;
    cout<<"Your Total Balance is:"<<balance<<endl;
    cout<<"Enter amount you want to deposit:";
    cin>>q;
    balance=balance+q;
    cout<<"Amount deposited is:"<<q<<endl;
    cout<<"-----------------------------"<<endl;
}
int main()
{
    system("cls");
    string j;
    int k;
    system("color 6B");
    cout << "**********Enter registration details**********" << endl;
    reg();
    cout << "ReEnter Password:";
    cin >> j;
    if (i == j)
    {
        cout << "Account Registration Complete." << endl;
    }
    else
    {
        while (i != j)
        {
            cout << "Incorrect Password Entered." << endl;
            cout << "ReEnter Password:";
            cin >> j;
        }
        cout << "Account Registration Complete." << endl;
    }
    system("cls");
    cout << "**********Enter Login details**********" << endl;
    login();
    system("cls");
    while (1)
    {
        cout<<"Hey "<<a<<endl;
        cout << "********************Welcome to ABC Bank Application********************" << endl;
        cout << "                           1. For Balance Check" << endl;
        cout << "                           2. For Withdrawal" << endl;
        cout << "                           3. For Deposit" << endl;
        cout<<"                                 4. Exit"<<endl;
        cout << "Enter your choice:";
        cin >> k;
        switch (k)
        {
        case 1:
        {
            check_balance();
            break;
        }
        case 2:
        {
           cash_withdraw();
           break;
        }
        case 3:
        {
            cash_deposit();
            break;
        }
        case 4:
        {
            system("cls");
            cout<<"ThankYou for using our application."<<endl;
            exit(0);
        }
        }
    }
    return 0;
}
