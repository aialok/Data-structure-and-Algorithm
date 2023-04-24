#include <iostream>
#include <stack>
using namespace std;
bool matching(char a, char b)
{
    return ((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'));
}

bool validParanthesis(string str)
{
    stack<char> s;
    for(int i=0;i<str.length();i++)
    {
        if(str[i] == '(' || str[i] == '{'  || str[i] == '[')
        {
            s.push(str[i]); // First In
        }
        else if(s.empty()==1)
        {
            return 0;
        }
        else if(matching(s.top(), str[i])==0)
        {
            return 0; // Checking In == Out
        }
        else
        {
            s.pop(); // Then out
        }
        
    }
    if(s.empty()==1)
    {
        return 1;
    }

}

using namespace std;
int main()
{

    string s;
    cin >> s;
   
    if( validParanthesis(s))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}