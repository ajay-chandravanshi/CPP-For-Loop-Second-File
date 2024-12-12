#include<iostream>
using namespace std;
int main(){
    int number=6;
    int factorial=1;
    for(int i=1;i<=number;++i)
    {
        factorial=factorial*i;
    }
    cout<<factorial;
}