#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Hello World" << endl << "this is a test" << endl;
    cout << "test avec les \'guillemets\' " << endl;
    cout << "un autre test \\/O\\/ " << endl;

// test with variables

    string phrase("that's working");
    cout << phrase << endl;

    int number(120);
    cout << number << endl;

    double pi(3.1415);
    cout << pi << endl;


    int firstNumber(60), secondNumber(40);
    cout << firstNumber + secondNumber << endl; 
    cout << "le premier est : " << firstNumber << " et le second : " << secondNumber << endl;

    int& copyNumber(number);
    cout << copyNumber << endl;

// test with cout && cin

    cout << "How old are you ?" << endl;
    int ageUser(0);

    cin >> ageUser;

    cout << "You have " << ageUser <<  " years old " << endl;

    return 0;
}