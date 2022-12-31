# include "iostream"
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if (num%3 == 0 || num%5 == 0)
    {
        cout<<"The number is valid"<<endl;
    }
    else{
        cout<<"The number is not valid"<<endl;
    }
    return 0;
}