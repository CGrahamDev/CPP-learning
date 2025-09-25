#include <iostream>

using namespace std;

int main()
{
    cout << "squared numbers  1-20:" << endl;
    double squared;
    for(int i = 1; i <=20; i++)
    {
        squared = i * i;
        cout << i << "^2 = " << squared << endl;
    }
    return 0;
}
