#include<iostream>
using namespace std;

int main()
{
    int n,rev=0;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    while(n>0)
    {
        int digit=n%10;
        rev=(rev*10)+digit; 
        n=n/10;
    }
    cout<<"Reverse of number is: "<<rev;
    return 0;
}
