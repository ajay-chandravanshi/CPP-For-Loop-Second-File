#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number=";
    cin>>number;
      int sum=0;
    for(int i=1;i<number;++i)
    {
        if(number%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==number)
    {
        cout<<"This is a perfect Number";
    }
    else{
        cout<<"Not a perfect  number";
    }
}