#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string animal;
    
    cout << "Choose an animal! (c-cat, d-dog, t-tiger): ";
    cin >> animal;

    switch (animal)
    {
        case "cat":
            cout << "MEOW";
            break;

        case "dog":
            cout << "ARFF";
            break;

        case "tiger":
            cout << "RAWR";
            break;
        
        default: 
            cout << "Please enter cat, dog, and tiger only!";
    }
    return 0;

}