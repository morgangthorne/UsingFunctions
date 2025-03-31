/*
File Name: UsingFunctions.cpp
Programmer Name: Morgan Thorne
Date: March 2025
Requirements;
Write a program that calculates distance with speed * time
using the template
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


void DisplayMessage(string text) {
    cout << text << endl;
}

int GetAssignmentNumber() {
    return 1.0;
}

//Displays result of distance calculated by speed* time and
//uses a loop to show the distance the vehicle has traveled each hour
void DisplayResult(double speed, double time) {
    cout << "Hours   Distance\n";
    for (int hour = 1; hour <= time; ++hour) {
        double distance = speed * hour;
        cout << hour << "       " << distance << endl;
    }
}

//Function allows user to repeat or exit program 
bool GetRepeatInfo() {
    char choice;
    cout << "Would you like to repeat Y/N: ";
    cin >> choice;
    return (choice == 'Y' || choice == 'y');
}

//Validates user entry by only allowing positive integers 
void ValidateEntry(double speed, double time) {
    while (speed <= 0) {
        cout << "Please enter a positive integer: ";
        cin >> speed;
    }
    while (time <= 0) {
        cout << "Please enter a positive integer: ";
        cin >> time;
    }
}

//Function Main
int main()
{
    int number = GetAssignmentNumber();
    DisplayMessage("Welcome to the distance calculator V" + to_string(number));
    bool repeat = true;
    while (repeat) {
        // calls to modules go here
        double speed = 0;
        double time = 0;
        
        cout << "\nHow many mph are you going: ";
        cin >> speed;
        cout << "\nHow many hours have you been travelling: ";
        cin >> time;
        
        ValidateEntry(speed, time);

        DisplayResult(speed, time);
        
        repeat = GetRepeatInfo();

    }
    return 0;
}