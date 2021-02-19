#include <iostream>
#include <string>
using namespace std;

int main()
{
/*    cout << "Hello World" << endl << "this is a test" << endl;
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

// part 2 cout && cin

    cout << "Quel est votre prénom ? " << endl;

    string nameUser("No name");

    cin >> nameUser;

    cin.ignore();

    cout << "Quel est votre âge ? " << endl;

    int age(0);

    cin >> age;

    cout << "Votre prénom c'est : " << nameUser << " et vous avez : " << age << " ans" << endl;

*/

// Change the content of a variable

    int myFirstNumber(1);

    myFirstNumber = 5;

    cout << myFirstNumber << endl ; // 5

    int a(1),b(2);

    cout << a << b << endl; // 12

    a = b;

    cout << a << b << endl; // 22

    int c(2),d(2),result(0);

    result = c + d;

    cout << result << endl; // 4

    return 0;
}