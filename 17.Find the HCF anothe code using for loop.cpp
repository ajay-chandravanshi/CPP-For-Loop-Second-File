#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int smaller=4;
    int larger=8;
    int ans;
    for(i;i<=smaller;i++)
    {
       if(smaller%i==0 && larger%i==0)
       {
        ans=i;
       }
    }
    
   cout<<ans;
}