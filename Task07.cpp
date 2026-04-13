/*              Manara University
                2025 - 2026
                Computer Programming I
                Civil Engineering

This program should ask user for the name of the month, then the program will print in which season this month is
Note: Pay attention to the way you write the month name.
*/
#include <iostream>
using namespace std;

int main() {
    string month;
    int monthNumber = 0;

    // Step 1: Take input
    cout << "Enter month name: ";
    cin >> month;

    // Step 2: Convert month name to number

    if (month == "January") monthNumber = 1;
    else if (month == "February") monthNumber = 2;
    else if (month == "March") monthNumber = 3;
    else if (month == "April") monthNumber = 4;
    else if (month == "May") monthNumber = 5;
    else if (month == "June") monthNumber = 6;
    else if (month == "July") monthNumber = 7;
    else if (month == "August") monthNumber = 8;
    else if (month == "September") monthNumber = 9;
    else if (month == "October") monthNumber = 10;
    else if (month == "November") monthNumber = 11;
    else if (month == "December") monthNumber = 12;

    // Step 3: Use switch for seasons
    switch (monthNumber) {

        // Winter
        case /* VALUE */:
        case /* VALUE */:
        case /* VALUE */:
            cout << "Winter" << endl;
            break;

        // Spring
        case /* VALUE */:
        case /* VALUE */:
        case /* VALUE */:
            cout << "Spring" << endl;
            break;

        // Summer
        case /* VALUE */:
        case /* VALUE */:
        case /* VALUE */:
            cout << "Summer" << endl;
            break;

        // Autumn
        case /* VALUE */:
        case /* VALUE */:
        case /* VALUE */:
            cout << "Autumn" << endl;
            break;

        default:
            cout << "Invalid month" << endl;
    }

    return 0;
}