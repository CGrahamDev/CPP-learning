#include <iostream>

using namespace std;
bool checkPassword(string username, int passcode, string name_input, int password_input);
int main()
{
    int attempt_count = 1;
    int attempt_limit = 5;
    bool is_login_true = false;

    string user_one = "admin";
    int user_one_pass = 423645;


    for(; attempt_count <= attempt_limit; attempt_count++)
    {
        string user_name_input;
        cout << "username: ";
        cin >> user_name_input;

        int user_pass_input;
        cout << "password: ";
        cin >> user_pass_input;

        if(checkPassword(user_one, user_one_pass, user_name_input, user_pass_input) == true)
        {
            is_login_true = true;
            cout << "System access granted. Welcome " << user_one << "! :)" << endl;
            break;
        }
        else if(attempt_count < attempt_limit && is_login_true == false)
        {
            cout << "Username and/or Password is incorrect. " << attempt_limit - attempt_count << " attempt(s) remaining." << endl;
        }
        else
        {
            cout << "Username and/or Password is incorrect. " << attempt_limit - attempt_count << " attempt(s) remaining." << endl
            << "System access denied. Get lost bozo." << endl;
        }
    }
    return 0;
}

bool checkPassword(string username, int passcode,  string name_input, int password_input)
    {
        if (name_input == username && password_input == passcode )
            {
                return true;
            }
        return false;
    }
