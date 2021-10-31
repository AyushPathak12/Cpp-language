#include <iostream>
using namespace std;
int main()
{
    float num1, num2, ans;
    char op;
    cout << "-----------------This is a calculator------------------\n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division" << endl;
    cout << "Enter your first number: ";
    cin >> num1;
    cout << "Enter your second number: ";
    cin >> num2;
    cout << "Choose one choice: ";
    cin >> op;

    switch (op)
    {
    case '+':
        ans = num1 + num2;
        cout << "The addition is: " << endl
             << ans;
        break;
    case '-':
        ans = num1 - num2;
        cout << "The subtraction is: " << endl
             << ans;
        break;
    case '*':
        ans = num1 * num2;
        cout << "The multiplication is: " << endl
             << ans;
        break;
    case '/':
        // if (num2==0)
        // {
        //     cout<<"Cannot be divided by 0"<<endl;
        // }
        ans = num1 / num2;
        cout << "The division is: " << endl
             << ans;

        break;

    default:
        cout << "Choose the right option!!!!!!!!!!!!!!";
        break;
    }
    return 0;
}