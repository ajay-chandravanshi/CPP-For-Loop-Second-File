#include<iostream>
using namespace std;
int main()
{
    int number=121;
    int num1 =number;
    int rv=0;
    for(;number!=0;)
    {
        rv=rv*10 + number %10;
        number =number/10;
    }
    if(num1==rv)
    {
        cout<<"This is a Palindrome";
    }
    else
    {
        cout<<"Not a Palindrome";
    }
}