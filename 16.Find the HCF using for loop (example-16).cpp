#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int smaller=4;
    int larger=8;
    int ans;
    int LCM;
    for(i;i<=smaller;i++)
    {
       if(smaller%i==0 && larger%i==0)
       {
        ans=i;
       }
       LCM=larger*smaller/ans;
    }
    
   cout<<LCM;
}