#include <iostream>

using namespace std;

int main()
{
    cout << "Welcome to tiny_calc!" << endl;
    double first_argument;
    double second_argument;

    cout << "Enter first argument: ";
    cin >> first_argument;
    cout << "\nEnter second argument: ";
    cin >> second_argument;
    cout << endl;

    double mult_total = first_argument * second_argument;
    double div_total = first_argument / second_argument;
    double add_total = first_argument + second_argument;
    double minus_total = first_argument - second_argument;

    cout << first_argument << " * " << second_argument << " = " << mult_total << endl;
    cout << first_argument << " / " << second_argument << " = " << div_total << endl;
    cout << first_argument << " + " << second_argument << " = " << add_total << endl;
    cout << first_argument << " - " << second_argument << " = " << minus_total<< endl;

    cout << "Goodbye!" << endl;
    return 0;
}
