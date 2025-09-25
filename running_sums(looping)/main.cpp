#include <iostream>

using namespace std;

int main()
{
    int quit_num = 0;
    int input;
    int sum = 0;
    int sub_sum;

    do{
        cout << "Add a number to add to the sum. Enter 0 to quit: ";
        cin >> input;
        sub_sum = sum;
        sum += input;
        cout << input << " + " << sub_sum << " = " << sum << endl;
    }while(input != quit_num);

    return 0;
}
