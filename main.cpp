#include <iostream>
#include <string>
#include <cmath>

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

    

// constante

   double const pi(3.1415);

   string const pass("pass");

   cout << pi << pass << endl;

// first exercices 

    double firstCalc(0),secondCalc(0), calcResult(0);

    cout << "Entre le premier numéro : " << endl;

    cin >> firstCalc;

    cout << "Et maintenant le deuxième : " << endl;

    cin >> secondCalc;

    calcResult = firstCalc + secondCalc;

    cout << firstCalc << " + " << secondCalc << " est égal à " << calcResult << endl;

// Increment && decrement

    int incrementation(1);

    incrementation++;

    cout << incrementation << endl;

    int decrementation(5);

    decrementation--;

    cout << decrementation << endl;

    int maxLife(5);

    maxLife += 5;

    cout << maxLife << endl;

    */

   // cmath

   double racineSquare(25),result(0);

    result = sqrt(racineSquare);

    cout << result << endl;

    double cubicRoot(25),secondResult(0);

    secondResult = cbrt(cubicRoot);

    cout << secondResult << endl;

    double a(2),b(5),thirdResult(0);

    thirdResult = pow(a,b);

    cout << thirdResult << endl;

    double c(0),d(0),lastResult(0);

    cout << "Veuillez entrer la valeur de (c) " << endl;

    cin >> c;

    cout << "Et maintenant la valeur de (d) " << endl;

    cin >> d;

    lastResult = pow(c,d);

    cout << "Le résultat est : " << lastResult << endl;

    return 0;
}