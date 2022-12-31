# include "iostream"
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if (num%2==0)
    {
        cout<<"Even number"<<" and ";
        if (num%3==0){
            cout<<"Divisibe by 3"<<endl;
        }
        else{
            cout<<"Not divisible by 3"<<endl;
        }
    }
    else
    {
        cout<<"The number is not even."<<endl;
    }
    return 0;
}