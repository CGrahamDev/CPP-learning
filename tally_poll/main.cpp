#include <iostream>

using namespace std;

int main()
{
    const int quit_num = 0;
    cout << "Enter a poll question with 3 results in mind." << endl;
    string poll_question;
    cin >> poll_question;
    const int max_string_length = 48;
    int offset = max_string_length / 3;


    string option_one;
    int o1_vote = 0;
    string option_two;
    int o2_vote = 0;
    string option_three;
    int o3_vote = 0;

    cout << "Enter poll result 1:";
    cin >> option_one;
    cout << "Enter poll result 2:";
    cin >> option_two;
    cout << "Enter poll result 3:";
    cin >> option_three;

    cout << option_one << " "  << option_two <<  " "  << option_three << endl;
    //cout << new string(max_string_length, '-') << endl;
    //come back to this annoying ass project. I dont think I understand C++ enough to do what I intend to do for it.




    return 0;
}
