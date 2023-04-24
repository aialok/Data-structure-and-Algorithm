#include<iostream>
using namespace std;

void binaryToDecimal(int n)
{
    if(n==0)
        return;
    binaryToDecimal(n/2);
    cout<<n%2;   
}

int main()
{
    int n;
    cin>>n;
    binaryToDecimal(n);
    return 0;
}