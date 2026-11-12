//  LHPK4014 - Software Engineering 1
//Assessment 1 (W1): Set Exercises - Combined Program
//  Personalization Number: 4827

/*
 This program consists of 10 short exercises.
 Each exercise is written in its own function (task1 to task10).
 All exercises are called in order from the main() function.
 The personalization number 4827 is used for each exercise.
 Only Task 9 reads input from the user.
 All other tasks use fixed values based on the assignment specifications
 and personalization number.

 Errors found and fixed during development:
 Error 1 -  Task 1: Asked for input instead of using 8 and 7 
 Fix: Used 8 and 7 directly.
 Error 2 - Asked for input and printed the result twice
 Fix: Used 5 directly and removed the extra lines.
 Error 3 - Tasks 3, 4 and 5  Used extra copies of 4827 instead of the global value.
 Fix: Used the global value in Task 3 AND number in Task 4 and calculated the month directly in Task 5
 Error 4 - Task 10: Missing function prototype
 Fix: Added The prototype
 Error 5 -Task 9: Got stuck when a letter was entered
 Fix: Clears the wrong input and asks again
 Error 6 - Error 6: Output Had uneven spacing
 Fix: Cleaned up the output text

 Error 7 Error 7: Header said Tasks 1, 2 and 9 read input
 Fix: Updated it to say only Task 9 reads input
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
void showVariables();                 // Error 4: prototype added (helper for Exercise 10)
void task10();

// Global variables (used by Task 10)
int personalizationNum = 4827;        // global from my personalization number
int globalCount = personalizationNum; 

// using main
//  main runs all ten exercises in order

int main() {
    // Error 6: consistent Spacing in the task Headings
    cout << "Task 1" << endl;     task1();
    cout << "\nTask 2" << endl;   task2();
    cout << "\nTask 3" << endl;   task3();
    cout << "\nTask 4" << endl;   task4();
    cout << "\nTask 5" << endl;   task5();
    cout << "\nTask 6" << endl;   task6();
    cout << "\nTask 7" << endl;   task7("4827", 27); // name + marks Passed as parameters
    cout << "\nTask 8" << endl;
    for (int i = 0; i < 5; i++) task8();     // Exercise 8 Requires calling the function 5 times
    cout << "\nTask 9" << endl;   task9();
    cout << "\nTask 10" << endl;  task10();
    return 0;
}


// Task 1 is  Variables And  Output
//  it declares two integers and prints their sum
// Personalization: Uses the second digit (8) and last digit (7) of 4827
// Error 1: no user input.

void task1() {
    int a = 8;
    int b = 7;

    cout << "Variables and Output" << endl;
    cout << "Sum : " << a + b << endl;
}
// Task 2 is Arithmetic Operations
//  it multiplies two numbers and displays the result
// Personalization: The first number is the sum of the digits of 4827 (4+8+2+7 = 21).
// The second number is 5 which is chosen value
// Error 2: no user Input,, duplicate output lines removed.

void task2() {
    int a = 21;
    int b = 5;

    cout << "First number is : " << a << endl;
    cout << "Second number is : " << b << endl;
    cout << "Result = " << a * b << endl;
}
// Task 3 - Loops / Iterations
// it Prints a multiplication table from 1 up to N
// Personalization: N is calculated using 4827 % 10 + 1, which equals  to 8.
// Error 3: uses the global variable.

void task3() {
    int N = (personalizationNum % 10) + 1;

    for (int i = 1; i <= N; i++) {
        cout << N << " x " << i << " = " << N * i << endl;
    }
}
// Task 4 - If-Else Conditions
//  it Checks whether a number is even or odd.
// Personalization: Uses the Full personalization number 4827 (odd).
// Error 3: variable renamed to "number" so it does not hide the global.

void task4() {
    int number = 4827;

    if (number % 2 == 0) {
        cout << number << " is even" << endl;
    } else {
        cout << number << " is odd" << endl;
    }
}


// Task 5 - Switch Case
// it Displays the month name for a number between 1 and 12.
// Personalization: month = (4827 % 12) + 1 = 4 So it prints April.
// Error 3: no local copy of personalizationNum any more 

void task5() {
    int month = (4827 % 12) + 1;

    switch (month) {
        case 1:  cout << "January" << endl;   break;
        case 2:  cout << "February" << endl;  break;
        case 3:  cout << "March" << endl;     break;
        case 4:  cout << "April" << endl;     break;
        case 5:  cout << "May" << endl;       break;
        case 6:  cout << "June" << endl;      break;
        case 7:  cout << "July" << endl;      break;
        case 8:  cout << "August" << endl;    break;
        case 9:  cout << "September" << endl; break;
        case 10: cout << "October" << endl;   break;
        case 11: cout << "November" << endl;  break;
        case 12: cout << "December" << endl;  break;
        default: cout << "Invalid month" << endl;
    }
}
// Task 6 - Arrays
// it Creates a array of five numbers and prints its third value
// Personalization: One value in the array is the last digit of 4827 (7).

void task6() {
    int numbers[5] = {10, 20, 7, 40, 50};

    // Arrays start at index 0, so numbers[2] is the third value
    cout << "Third value = " << numbers[2] << endl;
}
//  Task 7 - Functions with Parameters
// it  Accepts a name and marks as parameters and displays a
//  personalized welcome message with the marks
//  Personalization: 4827 passed as name and  marks (27) from the
//  last two digits of 4827 which is personalization number

void task7(string name, int marks) {
    cout << "Hello, welcome " << name << endl;   // Error 6: double space removed
    cout << "Your marks are " << marks << endl;
}
//  Task 8 - Static Local Variable
//  it Displays the personalization number and the function call
//  count using a static local variable.
//  Personalization: called 5 times  Shows 4827 each time.
void task8() {
    static int count = 0;   // static: keeps its value between calls
    count++;
    cout << "My personalization number is 4827" << endl;
    cout << "Total function count is " << count << endl;
}

// Task 9 - Debugging
// reads marks until -1 and calculates the average
// four original Bugs are documented Below
double ComputeAverage() {
    int total = 0;
    int marks = 0;
    int count = 0;
    do {
        cin >> marks;
        // Error 5 IF a Letter is entered ask the user to try again
        if (cin.fail()) {
            cin.clear();             
            cin.ignore(1000, '\n');  
            cout << "Please enter a number : " << endl;
            marks = 0;               
        }
        else if (marks >= 0) {
            total = total + marks;
             // Bug 1: original code added negative marks too.
            // Fix:  Only Add marks THAT are zero or positive
             
            count++;
            // Bug 2: original Code counted every Input
            // Fix:  Count only VALID marks
        }
    } while (marks != -1);
    // Bug 3: Original code Could be divided by zero 
    // Fix:  if no valid marks were entered, return 0.0.
  
    if (count == 0) {
        return 0.0;
    }
    // Bug 4: original code used integer division.
    // Fix:  cast total to double so the average can include decimals.
    return static_cast<double>(total) / count;
}

void task9() {
    cout << "Enter marks, also enter -1 when you want to stop :" << endl;
    double average = ComputeAverage();
    cout << "The average of the marks is : " << average << endl;
}
//  Task 10 - Global vs Static Variables
//  Global and static variables keep their value between calls,
//  but a global is reachable from any function while a static
//  is only reachable inside its own function; a local resets
//  every call. All three start from 4827.
void showVariables() {
    static int staticCount = personalizationNum; // static persists across calls while local on the other hand resets every  call
    int localCount = personalizationNum;         

    globalCount++;
    staticCount++;
    localCount++;
    cout << "Global: " << globalCount << endl;
    cout << "Static: " << staticCount << endl;
    cout << "Local: " << localCount << endl;
    cout << endl;
}

void task10() {
    for (int i = 0; i < 3; i++) showVariables();
}

