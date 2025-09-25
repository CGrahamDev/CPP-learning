#include <iostream>

using namespace std;

int main()
{
    int attempt_count = 0;
    int attempt_limit = 2;
    bool login_is_true = false;

    string user_one = "admin";
    int user_one_pass = 423645;
    string user_two = "data_guy";
    int user_two_pass = 123234;
    string user_three = "pen_tester";
    int user_three_pass = 333333;



    do{
        string user_name_input;
        cout << "username: ";
        cin >> user_name_input;

        int user_pass_input;
        cout << "password: ";
        cin >> user_pass_input;
        attempt_count += 1;
        if (user_name_input == user_one && user_pass_input == user_one_pass )
        {
            login_is_true = true;
            cout << "System access granted. Welcome " << user_one << "! :)" << endl;
        }
        else if (user_name_input == user_two && user_pass_input == user_two_pass )
        {
            login_is_true = true;
            cout << "System access granted. Welcome " << user_two << "! :)" << endl;
        }
        else if (user_name_input == user_three && user_pass_input == user_three_pass )
        {
            login_is_true = true;
            cout << "System access granted. Welcome " << user_three << "! :)" << endl;
        }
        else if(attempt_count< 2 && login_is_true == false)
        {
            cout << "Username and/or Password is incorrect. " << attempt_limit - attempt_count << " attempt(s) remaining." << endl;
        }
        else
        {
            cout << "Username and/or Password is incorrect. " << attempt_limit - attempt_count << " attempt(s) remaining." << endl
            << "System access denied. Get lost bozo." << endl;
        }
    }while(login_is_true == false && attempt_count < attempt_limit);

    return 0;
}
