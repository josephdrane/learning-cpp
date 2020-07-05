#include <iostream>

int main() {

    // cout result strings
    char not_leap_year[] = " is not a leap year.\n";
    char leap_year[] = " is a leap year.\n";

    // capture year from user
    int year;
    std::cout << "Year: ";
    std::cin >> year;
    std::cout << "Year set to : " << year << "\n";

    // test input is 4 digit year
    if (year < 1000) {
        std::cout << year << ": ERROR not 4 digit year\n";
    }

    /*
    * divisible by 4, 100 and 400 : true
    * divisible by 4 and not divisible by 100 : true
    */
    bool divide_4 = (year % 4) == 0;
    bool divide_100 = (year % 100) == 0;
    bool divide_400 = (year % 400) == 0;

    if ((divide_4 && !divide_100) || (divide_4 && divide_100 && divide_400)) {
        std::cout << year << leap_year;
    } 
    else {
        std::cout << year << not_leap_year;
    }
}