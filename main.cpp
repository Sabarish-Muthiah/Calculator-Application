#include <iostream>

using namespace std;

int addition(int a, int b, int c = 0, int d = 0, int e = 0){
    return a + b + c + d + e;
}
int subtraction(int a, int b, int c = 0, int d = 0, int e = 0){
    return a - b - c - d - e;
}
int multiplication(int a, int b, int c = 1, int d = 1, int e = 1){
    return a * b * c * d * e;
}
int division(int a, int b, int c = 1, int d = 1, int e = 1){
    return a / b / c / d / e;
}

int main()
{
    int userChoice;
    cout << "Welcome to the calculator app. This is a simple application that will enable you to do simple calculations up to 5 numbers at a time." << endl;
    cout << "Type 1 for Addition \nType 2 for Subtraction \nType 3 for Multiplication \nType 4 for division" << endl;
    cout << "Enter the number corresponding to the operation: ";
    cin >> userChoice;
    
    switch(userChoice){
        case 1:
        cout << "You have selected Addition" << endl;
        int a_firstNumber;
        cout << "Enter the first number: ";
        cin >> a_firstNumber;
        
        int a_secondNumber;
        cout << "Enter the second number: ";
        cin >> a_secondNumber;
        
        int a_thirdNumber;
        cout << "Enter the third number (if none please enter zero (0)) : ";
        cin >> a_thirdNumber;
        
        int a_fourthNumber;
        cout << "Enter the fourth number (if none please enter zero (0)) : ";
        cin >> a_fourthNumber;
        
        int a_fifthNumber;
        cout << "Enter the fifth number (if none please enter zero (0)) : ";
        cin >> a_fifthNumber;
        
        cout << "Answer: " << addition(a_firstNumber, a_secondNumber, a_thirdNumber, a_fourthNumber, a_fifthNumber);
        break;
        
        case 2: 
        cout << "You have selected Subtraction" << endl;
        int s_firstNumber;
        cout << "Enter the first number: ";
        cin >> s_firstNumber;
        
        int s_secondNumber;
        cout << "Enter the second number: ";
        cin >> s_secondNumber;
        
        int s_thirdNumber;
        cout << "Enter the third number (if none please enter zero (0)) : ";
        cin >> s_thirdNumber;
        
        int s_fourthNumber;
        cout << "Enter the fourth number (if none please enter zero (0)) : ";
        cin >> s_fourthNumber;
        
        int s_fifthNumber;
        cout << "Enter the fifth number (if none please enter zero (0)) : ";
        cin >> s_fifthNumber;
        
        cout << "Answer: " <<  subtraction(s_firstNumber, s_secondNumber, s_thirdNumber, s_fourthNumber, s_fifthNumber);
        break;
        
        case 3: 
        cout << "You have selected Multiplication" << endl;
        int m_firstNumber;
        cout << "Enter the first number: ";
        cin >> m_firstNumber;
        
        int m_secondNumber;
        cout << "Enter the second number: ";
        cin >> m_secondNumber;
        
        int m_thirdNumber;
        cout << "Enter the third number (if none please enter one (1)) : ";
        cin >> m_thirdNumber;
        
        int m_fourthNumber;
        cout << "Enter the fourth number (if none please enter one (1)) : ";
        cin >> m_fourthNumber;
        
        int m_fifthNumber;
        cout << "Enter the fifth number (if none please enter one (1)) : ";
        cin >> m_fifthNumber;
        
        cout << "Answer: " <<  multiplication(m_firstNumber, m_secondNumber, m_thirdNumber, m_fourthNumber, m_fifthNumber);
        break;
        
        case 4: 
        cout << "You have selected Division" << endl;
        int d_firstNumber;
        cout << "Enter the first number: ";
        cin >> d_firstNumber;
        
        int d_secondNumber;
        cout << "Enter the second number: ";
        cin >> d_secondNumber;
        
        int d_thirdNumber;
        cout << "Enter the third number (if none please enter one (1)) : ";
        cin >> d_thirdNumber;
        
        int d_fourthNumber;
        cout << "Enter the fourth number (if none please enter one (1)) : ";
        cin >> d_fourthNumber;
        
        int d_fifthNumber;
        cout << "Enter the fifth number (if none please enter one (1)) : ";
        cin >> d_fifthNumber;
        
        cout << "Answer: " <<  division(d_firstNumber, d_secondNumber, d_thirdNumber, d_fourthNumber, d_fifthNumber);
        break;
        
        default:
        cout << "ERROR! You have to type the number corresponding to the operation of your choice." << endl;
        cout << "Type 1 for Addition, Type 2 for Subtraction, Type 3 for Multiplication, Type 4 for division" << endl;
    }
    
}
