﻿

#include <iostream>

using namespace std;

int main()
{

    char n ;

    cout << "Enter the first letter of the country: ";
    cin >> n;

    switch (n)
    {
    case 'A':
        cout << "Continent: South America" << "\n";  // Argentina
        cout << "Area: 2 780 000";
        break;

    case 'B':
        cout << "Continent: Eurasia" << "\n";  // Bangladesch
        cout << "Area: 148 460";
        break;

    case 'C':
        cout << "Continent: North America" << "\n";  // Canada
        cout << "Area: 9 985 000";
        break;

    case 'T':
        cout << "Continent: Africa" << "\n";  // Tunis
        cout << "Area: 163 610";
        break;

    case 'U':
        cout << "Continent: Eurasia" << "\n";  // Ukraine
        cout << "Area: 603 700";
        break;

    case 'M':
        cout << "Continent: North America" << "\n";  // Mexico
        cout << "Area: 1 964 000";
        break;

    case 'P':
        cout << "Continent: South America" << "\n";  // Peru
        cout << "Area: 1 285 000";
        break;

    default:
        cout << "Enter another letter" << endl;
        break;
    }

    return 0;

        
    }

