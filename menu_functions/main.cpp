#include <iostream>

using namespace std;

void singBottlesOfBeer();
void calculateInput();
void consoleClear();

int main()
{
    int user_input;
    do
    {
        cout << "Chelsea's Menu" << endl;
        cout << "[1] Sing 99 Bottles Of Beer" << endl;
        cout << "[2] Console Calculator" << endl;
        cout << "[3] Escape Program" << endl;

        cin >> user_input;

        if(user_input == 1)
        {
            consoleClear();
            singBottlesOfBeer();

        } else if(user_input == 2)
        {
            consoleClear();
            calculateInput();

        }
        else if(user_input == 3)
        {
            return 0;
        }else
        {
            cout << "Invalid Input. Please enter a number 1-3.";
            consoleClear();
            continue;
        }

    }while(true);
    return 0;
}



void consoleClear(){
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}

void singBottlesOfBeer(){
    int bottles_of_beer = 99;
    while (bottles_of_beer > 1){
        cout << bottles_of_beer << " bottle(s) of beer on the wall, " << bottles_of_beer << " bottle(s) of beer." << endl;
        bottles_of_beer--;
        cout << "Take one down and pass it around, " << bottles_of_beer << " bottles of beer on the wall" << endl;
    }
    cout << bottles_of_beer << " bottle of beer on the wall, " << bottles_of_beer << " bottle of beer." << endl;
    bottles_of_beer--;
    cout << "Take one down and pass it around, " << "no more bottles of beer on the wall" << endl;
}

void calculateInput(){
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

    }}
