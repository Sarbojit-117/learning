//
// Created by sarbo on 22-12-2022.
//
#include "iostream"
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter the first value:";
    cin>>a;
    cout<<"Enter the second value:";
    cin>>b;
    int c = b;
    b = a;
    a = c;
    cout<<"Now,\n";
    cout<<"Value of a is:"<<a<<"\n";
    cout<<"Value of b is:"<<b<<endl;
    return 0;
}