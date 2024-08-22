// TicTacToeApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h>
#include "menu.h"
using namespace std;

int main()
{
    Menu menu;
    string menuChoice;
    int se = 0;
    int gameToken = 1;
    int token = 0;
    int k = 10;
    static CONSOLE_FONT_INFOEX  fontex;
    fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    GetCurrentConsoleFontEx(hOut, 0, &fontex);
    fontex.FontWeight = 400;
    fontex.dwFontSize.X = 20;
    fontex.dwFontSize.Y = 20;
    SetCurrentConsoleFontEx(hOut, NULL, &fontex);
    SetConsoleTextAttribute(hOut, k);
    HWND console = GetConsoleWindow();

    MoveWindow(console, 400, 200, 800, 400, true);
    system("cls");
   

    while (gameToken == 1) {       
        
        if (token == 0) {
            cout << "Welcome to tic tac toe!" << endl;
            cout << "Menu:" << endl;
            cout << "1. Player vs CPU enter (pvc or PVC)" << endl;
            cout << "2. Player vs player enter (pvp or PVP)" << endl;
            cout << "3. Quit" << endl;
            getline(cin, menuChoice);
        }
        if (!cin.fail()) {

            if (menuChoice == "pvc" || menuChoice == "PVC" || menuChoice[0] == '1') {
               
                se = menu.pvc();
                if (se == 1) {
                    menuChoice = "pvc";
                }
                else if (se == 0) {
                    system("cls");
                    cout << "Menu:" << endl;
                    cout << "1. Player vs CPU enter (pvc or PVC)" << endl;
                    cout << "2. Player vs player enter (pvp or PVP)" << endl;
                    cout << "3. Quit" << endl;
                    getline(cin, menuChoice);
                }

            }
            else if (menuChoice == "pvp" || menuChoice == "PVP" || menuChoice[0] == '2') {
                
                se = menu.pvp();
                if (se == 1) {
                    menuChoice = "pvp";
                }
                else if (se == 0) {
                    system("cls");
                    cout << "Menu:" << endl;
                    cout << "1. Player vs CPU enter (pvc or PVC)" << endl;
                    cout << "2. Player vs player enter (pvp or PVP)" << endl;
                    cout << "3. Quit" << endl;
                    getline(cin, menuChoice);
                }

            }
            else if (menuChoice == "quit" || menuChoice == "Quit" || menuChoice[0] == '3') {

                gameToken = 0;

            }
            else {
                token = 1;
                system("cls");
                cout << "Please choose a valid option.\npress any key to continue." << endl;
                _getch();
                system("cls");
               // cout << "Welcome to tic tac toe!" << endl;
                cout << "Menu:" << endl;
                cout << "1. Player vs CPU" << endl;
                cout << "2. Player vs player" << endl;
                cout << "3. Quit" << endl;
                getline(cin, menuChoice);

            }
        }
        else {
            cin.clear();
        }
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
