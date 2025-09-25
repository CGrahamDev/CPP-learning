#include <iostream>

using namespace std;

void printDaysOfChristmas(int day);
string printDayCount(int num);
int main()
{
    int day_of_christmas;
    cout << "What day of Christmas is it? (number): ";
    cin >> day_of_christmas;
    printDaysOfChristmas(day_of_christmas);

    return 0;
}

void printDaysOfChristmas(int day){
    string sent_items;

    if(day> 0 && day<= 12)
    {
        cout << "On the " << printDayCount(day) << " day of Christmas, my true love sent to me" << endl;
    }else
    {
        cout << "There must be more than 0 days and less than 13 days; goodbye" << endl;
    };

    for(; day>0; day--){
        switch(day)
        {
            case 1:
                sent_items = "A partridge in a pear tree";
                break;
            case 2:
                sent_items = "Two turtle doves,\nAnd";
                break;
            case 3:
                sent_items = "Three French hens,";
                break;
            case 4:
                sent_items = "Four calling birds";
                break;
            case 5:
                sent_items = "Five golden rings";
                break;
            case 6:
                sent_items = "Six geese a-laying";
                break;
            case 7:
                sent_items = "Seven swans a-swimming";
                break;
            case 8:
                sent_items = "Eight maids a-milking";
                break;
            case 9:
                sent_items = "Nine ladies dancing";
                break;
            case 10:
                sent_items = "Ten lords a-leaping";
                break;
            case 11:
                sent_items = "Eleven pipers piping";
                break;
            case 12:
                sent_items = "Twelve drummers drumming";
                break;
            default:
                cout << "Bro doesn't know the song only has 12 days :skull:";
                return;
    }
    cout << sent_items << endl;
    }
}

string printDayCount(int num) {
    switch(num)
    {
        case 1:
            return "first";
        case 2:
            return "second";
        case 3:
            return "third";
        case 4:
            return "fourth";
        case 5:
            return "fifth";
        case 6:
            return "sixth";
        case 7:
            return "seventh";
        case 8:
            return "eighth";
        case 9:
            return "ninth";
        case 10:
            return "tenth";
        case 11:
            return  "eleventh";
        case 12:
            return "twelfth";
        default:
            return "Not Counted";
    }
}

