#include<iostream>
using namespace std;
int main()
{
    int digit;
    int number;
    int sum=0;
    cout<<"Enter the number=";
    cin>>number;
    int cpy=number;
    for(;number!=0;)
    {
        digit=number%10;
        sum=sum+digit*digit*digit;
        number=number/10;
    }
    if(sum==cpy)
    {
        cout<<"this is a armstrong number";
    }
    else
    {
        cout<<"Not a armstrong";
    }
}
 