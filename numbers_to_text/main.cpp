#include <iostream>

using namespace std;

string convertNumbersToText(int number);
string handleHundreds(int num);
string handleUniqueTens(int num);
string handleTens(int num);
string convertGroup(int num);


int main()
{
    string converted_text;
    int user_number;
    cout << "Numbers To Text Converter" << endl;
    cout << "Enter your number: ";
    cin >> user_number;


    converted_text = convertGroup(user_number);
    cout << "Your number is:" <<converted_text << endl;

    return 0;
}

int chunkNumbers()
{
    return 0;
}

string convertNumbersToText(int num)
{
    //Check Billions by dividing by 1_000_000_000. since using ints, it will provide 0 if it's not at least 1B. Meaning you dont have to group for it.
    if(num / 1000000000 != 0){

    }
    //Check Millions
    if(num / 1000000 != 0)
    {

    }
    //Check Thousands
    if(num / 1000 != 0)
    {

    }
    //Check Hundreds
    if(num / 100 != 0)
    {

    }
}

string handleUniqueTens(int num){

    if(num >= 10 && num <= 19)
    {
            switch(num)
        {

        case 10:
            return "ten";
        case 11:
            return "eleven";
        case 12:
            return "twelve";
        case 13:
            return "thirteen";
        case 14:
            return "fourteen";
        case 15:
            return "fifteen";
        case 16:
            return "sixteen";
        case 17:
            return "seventeen";
        case 18:
            return "eighteen";
        case 19:
            return "nineteen";
        default:
            return "";
        }
    }
}
string handleOnes(int num)
{
    switch(num)
    {
        case 1:
            return "One";
        case 2:
            return "Two";
        case 3:
            return "Three";
        case 4:
            return "Four";
        case 5:
            return "Five";
        case 6:
            return "Six";
        case 7:
            return "Seven";
        case 8:
            return "Eight";
        case 9:
            return "Nine";
    }
}
string handleZero(int num)
{
    switch(num)
    {
    case 0:
        return "Zero";
    default:
        return "";
    }
}
string handleTens(int num){
    //the number this function should take in it's param should only be between 20 and 99;
    string converted_tens;
    if(num >= 20)
    {
        if(num > 20 && num < 30)
        {
            num -= 20;
            converted_tens = "Twenty " + handleOnes(num);
            return converted_tens;
        }
        else if(num > 30 && num < 40)
        {
            num -= 30;
            converted_tens = "Thirty " + handleOnes(num);
            return "Thirty";
        }
        else if(num > 40 && num < 50)
        {
            num -= 40;
            converted_tens = "Forty " + handleOnes(num);
            return "Forty";
        }
        else if(num > 50 && num < 60)
        {
            num -= 50;
            converted_tens = "Fifty " + handleOnes(num);
            return "Fifty";
        }
        else if(num > 60 && num < 70)
        {
            num -= 60;
            converted_tens = "Sixty " + handleOnes(num);
            return "Sixty";
        }
        else if(num > 70 && num < 80)
        {
            num -= 70;
            converted_tens = "Seventy " + handleOnes(num);
            return "Seventy";
        }
        else if(num > 80 && num < 90)
        {
            num -= 80;
            converted_tens = "Eighty " + handleOnes(num);
            return "Eighty";
        }
        else if(num > 90 && num < 100)
        {
            num -= 90;
            converted_tens = "Ninety " + handleOnes(num);
            return "Ninety";
        }
    }
    else
    {
        return "";
    }
}

string handleHundreds(int num)
{
    string converted_text;
    if(num % 100 < 100 && (num >= 100 && num <= 199))
    {
        if(num % 100 > 0 && num % 100 >= 20){
        num - 100;
        converted_text = "One Hundred " + handleTens(num);
        return converted_text;
        }
        else if(num % 100 > 0 && num % 100 < 20)
        {
            num - 100;
        converted_text = "One Hundred " + handleUniqueTens(num);
        return converted_text;
        }

    }else if(num % 100 < 100 && (num >= 200 && num <= 299))
    {
        if(num % 100 > 0 && num % 100 >= 20){
        num - 100;
        converted_text = "Two Hundred " + handleTens(num);
        return converted_text;
        }
        else if(num % 100 > 0 && num % 100 < 20)
        {
            num - 100;
        converted_text = "Two Hundred " + handleUniqueTens(num);
        return converted_text;
        }

    }else if(num % 100 < 100 && (num >= 300 && num <= 399))
    {
        if(num % 100 > 0 && num % 100 >= 20){
        num - 100;
        converted_text = "Three Hundred " + handleTens(num);
        return converted_text;
        }
        else if(num % 100 > 0 && num % 100 < 20)
        {
            num - 100;
        converted_text = "Three Hundred " + handleUniqueTens(num);
        return converted_text;
        }

    }else if(num % 100 < 100 && (num >= 400 && num <= 499))
    {
        if(num % 100 > 0 && num % 100 >= 20){
        num - 100;
        converted_text = "Four Hundred " + handleTens(num);
        return converted_text;
        }
        else if(num % 100 > 0 && num % 100 < 20)
        {
            num - 100;
        converted_text = "Four Hundred " + handleUniqueTens(num);
        return converted_text;
        }

    }else if(num % 100 < 100 && (num >= 500 && num <= 599))
    {
        if(num % 100 > 0 && num % 100 >= 20){
        num - 100;
        converted_text = "Five Hundred " + handleTens(num);
        return converted_text;
        }
        else if(num % 100 > 0 && num % 100 < 20)
        {
            num - 100;
        converted_text = "Five Hundred " + handleUniqueTens(num);
        return converted_text;
        }

    }else if(num % 100 < 100 && (num >= 600 && num <= 699))
    {
        if(num % 100 > 0 && num % 100 >= 20){
        num - 100;
        converted_text = "Six Hundred " + handleTens(num);
        return converted_text;
        }
        else if(num % 100 > 0 && num % 100 < 20)
        {
            num - 100;
        converted_text = "Six Hundred " + handleUniqueTens(num);
        return converted_text;
        }

    }else if(num % 100 < 100 && (num >= 700 && num <= 799))
    {
        if(num % 100 > 0 && num % 100 >= 20){
        num - 100;
        converted_text = "Seven Hundred " + handleTens(num);
        return converted_text;
        }
        else if(num % 100 > 0 && num % 100 < 20)
        {
            num - 100;
        converted_text = "Seven Hundred " + handleUniqueTens(num);
        return converted_text;
        }

    }else if(num % 100 < 100 && (num >= 800 && num <= 899))
    {
        if(num % 100 > 0 && num % 100 >= 20){
        num - 100;
        converted_text = "Eight Hundred " + handleTens(num);
        return converted_text;
        }
        else if(num % 100 > 0 && num % 100 < 20)
        {
            num - 100;
        converted_text = "Eight Hundred " + handleUniqueTens(num);
        return converted_text;
        }

    }else if(num % 100 < 100 && (num >= 900 && num <= 999))
    {
        if(num % 100 > 0 && num % 100 >= 20){
        num - 100;
        converted_text = "Nine Hundred " + handleTens(num);
        return converted_text;
        }
        else if(num % 100 > 0 && num % 100 < 20)
        {
            num - 100;
        converted_text = "Nine Hundred " + handleUniqueTens(num);
        return converted_text;
        }
    }
    else
    {
        return "";
    }
}
string convertGroup(int num)
{
     string groupedValue;
     if(num > 99 && num < 1000)
     {
        groupedValue = handleHundreds(num);
     }
     return groupedValue;
}



