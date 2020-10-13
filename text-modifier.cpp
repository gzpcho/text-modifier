#include <iostream>
#include <string>

using namespace std;

void displayWelcomeMessage() {
    system("clear");
    printf("\"String Editor\" by gzpcho\n");
    printf("----------------------\n");
    printf("This program receives a steam of characters\n");
    printf("and returns a string with modification specified\n");
    printf("by the user.\n\n");
    printf("Press Enter to proceed...\n");
    cin.ignore();
}

void displayMenuOptions() {
    system("clear");
    printf("Select an option for the string \t [ 0 to terminate ]\n");
    printf("----------------------\n");
    printf("1. Reverse\n");
    printf("----------------------\n");
}

bool promptStringInput(string str) {
    system("clear");
    printf("Enter text and press Enter\n");
    printf("----------------------\n");
    try {
        getline(cin, str);
    } catch(exception& e) {
        cout << "Invalid string : " << e.what() << endl;
    }
}

void reverseString(string str) {

}


int main() {
    const int MENU_RANGE = 1;
    const int EXIT_CODE = 0;
    int menuOption;
    string usrStr;

    displayWelcomeMessage();
    
    while(menuOption != EXIT_CODE) {
        displayMenuOptions();
        cin >> menuOption;
        cin.ignore();

        if(menuOption == EXIT_CODE) break;
        if(menuOption < 0 || menuOption > MENU_RANGE) {
            printf("Invalid menu option. Press Enter to continue\n");
            cin.ignore();
        } else {
            promptStringInput(usrStr);
            switch(menuOption) {
                case 1: reverseString(usrStr);
            }           
        }       
 
    }
    return 0;
}