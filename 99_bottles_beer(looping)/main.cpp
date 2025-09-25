#include <iostream>

using namespace std;

int main()
{
    int bottles_of_beer = 99;
    while (bottles_of_beer > 1){
        cout << bottles_of_beer << " bottle(s) of beer on the wall, " << bottles_of_beer << " bottle(s) of beer." << endl;
        bottles_of_beer--;
        cout << "Take one down and pass it around, " << bottles_of_beer << " bottles of beer on the wall" << endl;
    }
    cout << bottles_of_beer << " bottle of beer on the wall, " << bottles_of_beer << " bottle of beer." << endl;
    bottles_of_beer--;
    cout << "Take one down and pass it around, " << "no more bottles of beer on the wall" << endl;
    return 0;
}
