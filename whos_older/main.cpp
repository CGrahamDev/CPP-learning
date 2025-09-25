#include <iostream>

using namespace std;

int main()
{
    int user_age_difference;
    cout << "User 1: What's your name? :  ";
    string user_one_name;
    cin >> user_one_name;
    cout << "Hi " << user_one_name << ", how are old you? : ";
    int user_one_age;
    cin >> user_one_age;

    cout << "User 2: What's your name? :  ";
    string user_two_name;
    cin >> user_two_name;
    cout << "Hi " << user_two_name << ", how are old you? : ";
    int user_two_age;
    cin >> user_two_age;

    if(user_one_age > user_two_age){
        user_age_difference = user_one_age - user_two_age;
        cout << "Wow! " << user_one_name  << " is older than " << user_two_name << "!\nAnd by " << user_age_difference << " years at that!";
    }else if(user_one_age < user_two_age){
        user_age_difference = user_two_age - user_one_age;
        cout << "Wow! " << user_two_name  << " is older than " << user_one_name << "!\nAnd by " << user_age_difference << " years at that!";
    }else{
        cout << "Wow! The two of you, " << user_one_name  << " and " << user_two_name << " are the same ages! What are the chances of that!️‍";
    }

    return 0;
}
