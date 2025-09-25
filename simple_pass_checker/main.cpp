#include <iostream>

using namespace std;

int main()
{
    int sys_pass = 423645;
    int user_pass_input;
    cout << "Enter the system password to gain access : ";
    cin >> user_pass_input;

    if (user_pass_input != sys_pass)
    {
        cout << "Password is incorrect. System access denied. Get lost bozo." << endl;
    }
    else
    {
        cout << "System access granted. Welcome! :)" << endl;
    }

    return 0;
}
