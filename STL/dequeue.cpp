#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> dq={10,15,20};
    dq.push_front(5); // Push front
    dq.push_back(25); //Push back
    for(auto x: dq)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    auto it=dq.begin()+3;
    dq.insert(it,100);
     dq.insert(it,100);
    // dq.pop_back(); pop back
     for(auto x: dq)
    {
        cout<<x<<" ";
    }
}