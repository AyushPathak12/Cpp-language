#include <iostream>
using namespace std;
int main()
{
    char button;
    cout<<"Enter a character: ";
    cin>>button;
    switch (button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    case 'b':
        cout<<"Kya kar re ho"<<endl;
        break;
    case 'c':
        cout<<"Namaste india"<<endl;
        break;
    case 'd':
        cout<<"Ha ha"<<endl;
        break;
    
    default:
    cout<<"I am still learning"<<endl;
        break;
    }
    
    return 0;
}