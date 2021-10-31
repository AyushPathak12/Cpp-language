#include <iostream>
using namespace std;
int main()
{
    int n;
    int i;
    cout<<"Enter the number: ";
    cin >> n;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Non Prime" << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << "Prime" << endl;
    }

    return 0;
}