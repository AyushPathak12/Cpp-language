#include <iostream>
using namespace std;
int main()
{
    int savings;
    cout << "Enter your savings" << endl;
    cin >> savings;

    if (savings > 5000)
    {
        cout << "Neha\n";
    }
    else if (savings > 2000)
    {
        cout << "Rashmi\n";
    }
    else
    {
        cout << "Friends\n";
    }

    return 0;
}