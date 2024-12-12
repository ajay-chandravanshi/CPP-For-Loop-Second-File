#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number=";
    cin>>number;
    int counter=0;
    for(int i=1;i<=number;++i)
    {
        if(number%i==0)
        {
         counter++;
        }
    }
    if(counter==2)
    {
        cout<<"This is a Prime Number";
    }
    else{
        cout<<"not a primne number";
    }
}