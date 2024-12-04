#include<iostream>
using namespace std;
int main()
{
    int smaller=7;
    int larger=9;
    int ans;
    int LCM;
    for(int i=larger; ;i=i+larger)
    {
       if(i%smaller==0 && i%larger==0)
       {
        ans=i;
        break;
       }
    }
   cout<<ans;
}