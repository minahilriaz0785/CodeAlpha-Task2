//#include <iostream>
//#include <fstream>
//#include <cstring>
//#include <windows.h>
//using namespace std;
//struct User {
//    char username[50];
//    char password[50];
//};
//// Function to set console text color
//void setConsoleColor(WORD color) {
//    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//    SetConsoleTextAttribute(hConsole, color);
//}
//// Function to reset console text color to default
//void resetConsoleColor() {
//    setConsoleColor(7); // 7 is the default color (light gray on black)
//}
//// Function to register a new user
//void registerUser() {
//    User user;
//    setConsoleColor(10); // Green color for prompts
//    cout << "Enter username: ";
//    resetConsoleColor();
//    cin >> user.username;
//
//    setConsoleColor(10); // Green color for prompts
//    cout << "Enter password: ";
//    resetConsoleColor();
//    cin >> user.password;
//    ofstream file;
//    file.open("database.txt", ios::app);
//    if (file.is_open()) {
//        file << user.username << " " << user.password << endl;
//        file.close();
//        setConsoleColor(11); // Light cyan color for success message
//        cout << "Registration successful!" << endl;
//        resetConsoleColor();
//    }
//    else {
//        setConsoleColor(12); // Red color for error message
//        cout << "Error opening file!" << endl;
//        resetConsoleColor();
//    }
//}
//// Function to login a user
//bool loginUser() {
//    User user;
//    setConsoleColor(10); // Green color for prompts
//    cout << "Enter username: ";
//    resetConsoleColor();
//    cin >> user.username;
//
//    setConsoleColor(10); // Green color for prompts
//    cout << "Enter password: ";
//    resetConsoleColor();
//    cin >> user.password;
//
//    ifstream file;
//    file.open("database.txt");
//    if (file.is_open()) {
//        char storedUsername[50], storedPassword[50];
//        while (file >> storedUsername >> storedPassword) {
//            if (strcmp(user.username, storedUsername) == 0 && strcmp(user.password, storedPassword) == 0) {
//                file.close();
//                return true;
//            }
//        }
//        file.close();
//    }
//    else {
//        setConsoleColor(12); // Red color for error message
//        cout << "Error opening file!" << endl;
//        resetConsoleColor();
//    }
//    return false;
//}
//
//int main() {
//    int choice;
//    while (true) {
//        setConsoleColor(14); // Yellow color for menu
//        cout << "1. Register" << endl;
//        cout << "2. Login" << endl;
//        cout << "3. Exit" << endl;
//        resetConsoleColor();
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        if (choice == 1) {
//            registerUser();
//        }
//        else if (choice == 2) {
//            if (loginUser()) {
//                setConsoleColor(10); // Green color for success message
//                cout << "Login successful!" << endl;
//                resetConsoleColor();
//            }
//            else {
//                setConsoleColor(12); // Red color for error message
//                cout << "Invalid username or password!" << endl;
//                resetConsoleColor();
//            }
//        }
//        else if (choice == 3) {
//            break;
//        }
//        else {
//            setConsoleColor(12); // Red color for error message
//            cout << "Invalid choice. Please try again." << endl;
//            resetConsoleColor();
//        }
//    }
//    system("pause");
//    return 0;
//}
