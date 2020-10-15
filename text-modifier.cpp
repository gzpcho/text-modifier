#include <iostream>
#include <string>
#include <limits>

using namespace std;

void wait() {
    printf("Press Enter to proceed...\n");
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.clear();
}

void displayWelcomeMessage() {
    system("clear");
    printf("\"String Editor\" by gzpcho\n");
    printf("----------------------\n");
    printf("This program receives a steam of characters\n");
    printf("and returns a string with modification specified\n");
    printf("by the user.\n\n");
    wait();
}

void displayMenuOptions() {
    system("clear");
    printf("Select an option for the string \t [ 0 to terminate ]\n");
    printf("----------------------\n");
    printf("1. Reverse\n");
    printf("----------------------\n");
}

void requestStringInput(string& str) {
    system("clear");
    printf("Enter text and press Enter\n");
    printf("----------------------\n");
    getline(cin, str);
}

void reverseString(string& str) {
    for(int i = 0; i <= str.length()/2; i++)
        swap(str[i], str[str.length()-i-1]);
}

int main() {
    const int EXIT_CODE = 0;
    const int MENU_RANGE = 1;
    
    int menuOption;
    string usrStr;

    displayWelcomeMessage();
    
    while(menuOption != EXIT_CODE) {
        displayMenuOptions();
                       
        while(!(cin >> menuOption) || (menuOption < 0 || menuOption > MENU_RANGE)) {
            printf("Invalid menu option\n");
            wait();
            displayMenuOptions();
        }

        if(menuOption == EXIT_CODE) break;
        
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        requestStringInput(usrStr);
        
        switch(menuOption) {
            case 1:
                reverseString(usrStr); 
                break;
        }
        
        cout << usrStr << endl;
        wait();           
       
    }
    return 0;
}