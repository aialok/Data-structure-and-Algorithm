#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    int size=s.size();
    
     if(s.empty())
    {
        cout<<"Stack is Empty"<<endl;
    }
    else
    {
        cout<<"Stack is not Empty"<<endl;
    }
    while(s.empty()==0)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

    if(s.empty())
    {
        cout<<"Stack is Empty"<<endl;
    }
    else
    {
        cout<<"Not Empty"<<endl;
    }

}