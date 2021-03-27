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
    cout << "Enter information of login: " << endl;

    // storing information
    for(int i = 0; i < 10; ++i)
    {
        s[i].roll = i+1;
        cout << "user number" << s[i].roll << "," << endl;

        cout << "Enter email: ";
        cin >> s[i].name;

        cout << "Enter password: ";
        cin >> s[i].number;

        cout << endl;
    }

    cout << "Displaying Information: " << endl;

    // Displaying information
    for(int i = 0; i < 10; ++i)
    {
        cout << "\nuser number: " << i+1 << endl;
        cout << "email " << s[i].name << endl;
        cout << "password: " << s[i].number << endl;
    }

    return 0;
}
