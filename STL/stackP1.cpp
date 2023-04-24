#include <iostream>
#include <stack>
using namespace std;

void revStr(stack<char> s, int n)
{   
     for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        s.push(ch);
    }
    while (s.empty() == 0)
    {
        cout << s.top();
        s.pop();
    }
}

int main()
{
    int n;
    cin >> n;
    stack<char> s;

   
    revStr(s,n);
}