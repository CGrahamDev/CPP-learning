#include <iostream>

using namespace std;

int main()
{
    int selected_option;

    do{
        cout << "Pick between [1]exploding, [2]blowing up and [3]combusting!!!! " ;
        cin >> selected_option;
    }while(selected_option > 3 || selected_option <1);
    cout << "happy booms!";
    return 0;
}
