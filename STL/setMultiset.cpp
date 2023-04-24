#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int, greater<int>>s;
    int n=5;
   
        
        s.insert(5);
        s.insert(15);
        s.insert(10);
        s.insert(10);
    
        
    // s.clear();
    for(auto i: s)
    {
        cout<<(i)<<" ";
    }

}