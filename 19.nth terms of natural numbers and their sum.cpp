#include <iostream>
using namespace std;
int main() {
    int a;
    int i=1;
    int sum;
    cout<<"Enter the number=";
    cin>>a;
    for(i;i<a;++i)
    {
        sum=sum+i;
        cout<<sum<<endl;
    }
}