// Given number will be divided by which-which number, that is factor 
#include<iostream>
using namespace std;
int main()
{
   int number;
   cout<<"Enter the number=";
   cin>>number;
    for(int i=1;i<=number;++i)
    {
        if(number%i==0)
        cout<<i<<endl;
    }
}