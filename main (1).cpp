/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

struct users
{
    char name[50];
    int roll;
    int number;
} s[10];

int main()
{
    cout << "Enter information of create account: " << endl;

    // storing information
    for(int i = 0; i < 10; ++i)
    {
        s[i].roll = i+1;
        cout << "new user number" << s[i].roll << "," << endl;

        cout << "full name: ";
        cin >> s[i].name;
       
        cout << "email address: ";
        cin >> s[i].name;
       
        cout << "phone number: ";
        cin >> s[i].number;

        cout << "Enter password: ";
        cin >> s[i].number;

cout << "confirm password: ";
        cin >> s[i].number;
       
        cout << endl;
    }

    cout << "Displaying Information: " << endl;

    // Displaying information
    for(int i = 0; i < 10; ++i)
    {
        cout << "\nnew user number: " << i+1 << endl;
        cout << "full name " << s[i].name << endl;
        cout << "email address " << s[i].name << endl;
        cout << "phone number: " << s[i].number << endl;
        cout << "enter password: " << s[i].number << endl;
        cout << "confirm password: " << s[i].number << endl;
    }

    return 0;
}
