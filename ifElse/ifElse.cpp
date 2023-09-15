#include <iostream>
using namespace std;

int main ()
{
    int age;
    cout << "Hello my friend!" << endl;
    cout << "Enter your age: ";
    cin >> age;


    if (age >= 100)
    {
        cout << "You are too old!";
    }

    else if (age >= 18)
    {
        cout << "You are a MAJOR!";
    }
    
    else if (age < 0)
    {
        cout << "You are not born yet!";
    }

    else if ( age < 18 ) 
    {
        cout << "You are a MINOR!";
    }
    return 0;
}