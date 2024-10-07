#include <iostream>
using namespace std;
int main()
{

  char operation;
  int num1, num2;
  cout << "Welcome To The Simple Calculator" << endl;
  cout << "Choose Operator" << endl;
  cout << "-----------------------" << endl;
  cout << "+ Operator For Addition" << endl;
  cout << "-----------------------" << endl;

  cout << "- Operator For Minus" << endl;
  cout << "-----------------------" << endl;

  cout << "* Operator For MUltiply" << endl;
  cout << "-----------------------" << endl;

  cout << "/ Operator For Devision" << endl;
  cout << "-----------------------" << endl;

  cout << "Enter Operation:";
  cin >> operation;
  cout << "***********************" << endl;

  cout << "Enter Two Number:" << endl;
  cin >> num1 >> num2;

  switch (operation)
  {
  case '+':
    cout << "Result:" << num1 + num2 << endl;
    break;

  case '-':
    cout << "Result:" << num1 - num2 << endl;
    break;

  case '*':
    cout << "Result:" << num1 * num2 << endl;
    break;

  case '/':
    if (num2 != 0)
    {
      cout << "Result:" << num1 / num2 << endl;
    }
    else
    {
      cout << "Error : Divisble By Zero is undefined." << endl;
    }
    break;

  default:
    cout << "Errore Invalid Operation" << endl;
    break;
  }

  cout << "________________________" << endl;
  cout << "Thank You" << endl;

  return 0;
}
