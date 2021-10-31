#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter an alphabet: ";
    cin >> c;
    if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u')
    {
        cout << "It is a vowel." << endl;
    }
    else
    {
        cout << "It is a consonant." << endl;
    }

    return 0;
}