# include "iostream"
using namespace std;
int main()
{
    int inp;
    cout<<"Enter a number to check even or odd: ";
    cin>>inp;
    if (inp % 2 == 0)
    {
        cout<<"Even number."<<endl;
    }
    else
    {
        cout<<"Odd number."<<endl;
    }
    return 0;
}