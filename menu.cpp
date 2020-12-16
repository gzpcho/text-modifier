#include <iostream>
#include <limits>

#include "modifier.cpp"

using namespace std;

enum OPTIONS {
    PALINDROME = '1',
    PIG_LATIN,
    REVERSE,
    SHUFFLE
};

void displayMenuOptions() {
    cout << "Select an option for the string\n"
        "----------------------\n"
        "1) Palindrome"
        "2) Pig Latin"
        "3) Reverse"
        "4) Shuffle"
        "----------------------\n";
}

void displayWelcomeMessage() {
    cout << "\"String Editor\" by gzpcho\n"
        "----------------------\n"
        "This program receives a steam of characters and returns\n"
        "a string with modification specified by the user.\n"
        "----------------------\n";
}

void requestStringInput(string& str) {
    cout << "Enter text and press Enter\n"
        "----------------------\n";
    getline(cin, str);
}

void wait() {
    cout << "Press Enter to proceed...\n";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.clear();
}

int main() {
    Modifier mod;

    char menuOption;
    string usrStr;

    displayWelcomeMessage();
    wait();

    while(1) {
        displayMenuOptions();
        requestStringInput(usrStr);
        
        switch(menuOption) {
            case PALINDROME:
                mod.palindrome(usrStr);
                break;
            case PIG_LATIN:
                mod.pigLatin(usrStr);
                break;
            case REVERSE:
                mod.reverse(usrStr);
                break;
            case SHUFFLE:
                mod.shuffle(usrStr);
                break;
            default:
               cout << "Invalid input.\n";
        }
        cout << usrStr << "\n";
        wait();
    }
}