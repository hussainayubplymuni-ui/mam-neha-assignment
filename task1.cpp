//  LHPK4014 - Software Engineering 1
//Assessment 1 (W1): Set Exercises - Combined Program
//  Personalization Number: 4827

/*
 This program consists of 10 short exercises.
 Each exercise is written in its own function (task1 to task10).
 All exercises are called in order from the main() function.
 The personalization number 4827 is used for each exercise.
 Only Task 1 ,2 and 9 reads input from the user.
 All other tasks use values based on the assignment specifications
 and personalization number.
*/

#include <iostream>
#include <string>
using namespace std;

// Function prototypes
void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7(string name, int marks);   // Exercise 7 uses parameters
void task8();
double ComputeAverage();              // helper for Exercise 9
void task9();
void task10();

// Global variables (used by Task 10) 
int personalizationNum = 4827;        // global from my personalization number
int globalCount = personalizationNum; // global counter starts at 4827

// using main
//  main runs all ten exercises in order

int main() {
    cout << " Task 1 " << endl;  task1();
    cout << "\n Task 2 " << endl;  task2();
    cout << "\n Task 3 " << endl;  task3();
    cout << "\n Task 4 " << endl;  task4();
    cout << "\n Task 5 " << endl;  task5();
    cout << "\nTask 6 " << endl;  task6();
    cout << "\nTask 7 " << endl;  task7("4827", 27); // name + marks passed as parameters
    cout << "\n Task 8 " << endl;
    for (int i = 0; i < 5; i++) task8();     // Exercise 8 requires calling the function 5 times
    cout << "\nTask 9 " << endl;  task9();
    cout << "\n Task 10 " << endl; task10();
    return 0;
}


//  LHPK4014 - Software Engineering 1
//Assessment 1 (W1): Set Exercises - Combined Program
//  Personalization Number: 4827

/*
 This program consists of 10 short exercises.
 Each exercise is written in its own function (task1 to task10).
 All exercises are called in order from the main() function.
 The personalization number 4827 is used for each exercise.
 Only Task 1 ,2 and 9 reads input from the user.
 All other tasks use values based on the assignment specifications
 and personalization number.
*/

#include <iostream>
#include <string>
using namespace std;

// Function prototypes
void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7(string name, int marks);   // Exercise 7 uses parameters
void task8();
double ComputeAverage();              // helper for Exercise 9
void task9();
void task10();

// Global variables (used by Task 10) 
int personalizationNum = 4827;        // global from my personalization number
int globalCount = personalizationNum; // global counter starts at 4827

// using main
//  main runs all ten exercises in order

int main() {
    cout << " Task 1 " << endl;  task1();
    cout << "\n Task 2 " << endl;  task2();
    cout << "\n Task 3 " << endl;  task3();
    cout << "\n Task 4 " << endl;  task4();
    cout << "\n Task 5 " << endl;  task5();
    cout << "\nTask 6 " << endl;  task6();
    cout << "\nTask 7 " << endl;  task7("4827", 27); // name + marks passed as parameters
    cout << "\n Task 8 " << endl;
    for (int i = 0; i < 5; i++) task8();     // Exercise 8 requires calling the function 5 times
    cout << "\nTask 9 " << endl;  task9();
    cout << "\n Task 10 " << endl; task10();
    return 0;
}


// Task 1 - Variables & Output
// Declares two integers and prints their sum.
// Personalization: Uses the second digit (8) and last digit (7) of 4827.
// Error 1: no user input.

void task1() {
    int a = 8;
    int b = 7;

    cout << "Variables and Output" << endl;
    cout << "Sum : " << a + b << endl;
}
// Task 2 - Arithmetic Operations
// Multiplies two numbers and displays the result.
// Personalization: The first number is the sum of the digits of 4827 (4+8+2+7 = 21).
// The second number is 5 (chosen value).
// Error 2: no user input, duplicate output lines removed.

void task2() {
    int a = 21;
    int b = 5;

    cout << "First number is : " << a << endl;
    cout << "Second number is : " << b << endl;
    cout << "Result = " << a * b << endl;
}
