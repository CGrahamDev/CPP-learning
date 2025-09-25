#include <iostream>

using namespace std;

int main()
{
    char calc_operator;
    double arg_one;
    double arg_two;
    double total;
    cout << "Console Calc" << endl;

    cout << "argument one: ";
    cin >> arg_one;
    cout << "operator(+,-,*,/): ";
    cin >> calc_operator;
    cout << "argument two: ";
    cin >> arg_two;

    if(calc_operator == '+')
    {
        total = arg_one + arg_two;
        cout << arg_one << " " << calc_operator << " " << arg_two << " = " << total << endl;
    }
    else if(calc_operator == '-')
    {
        total = arg_one - arg_two;
        cout << arg_one << " " << calc_operator << " " << arg_two << " = " << total << endl;
    }
    else if(calc_operator == '*')
    {
        total = arg_one * arg_two;
        cout << arg_one << " " << calc_operator << " " << arg_two << " = " << total << endl;
    }
    else if(calc_operator == '/')
    {
        total = arg_one / arg_two;
        cout << arg_one << " " << calc_operator << " " << arg_two << " = " << total << endl;
    }
    else
    {
        cout << "operator not accepted or invalid input. Goodbye";
        return 0;
    }

    return 0;
}
