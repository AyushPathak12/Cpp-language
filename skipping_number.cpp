//Skipping the numbers which are divisible by 3....
#include <iostream>
using namespace std;
int main()
{
    for (size_t i = 0; i < 100; i++)
    {
        if (i % 3 == 0)
        {
            continue;
            // break;
        }

        cout << i << endl;
    }

    return 0;
}