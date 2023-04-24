#include <iostream>
#include <stack>
using namespace std;

void stackSpan(int arr[],int n)
{
    stack<int> s;
    s.push(0);
    for (int i = 1; i < n; i++)
    {
       while(s.empty()==0 && arr[s.top()]<=arr[i])
       {
        s.pop();
       }

       int span=s.empty()==1?(i+1):(i-s.top());
       cout<<span<<" ";
       s.push(i);
    }
    
}



int main()
{   int count=0;
    int arr[10]={15,13,12,14,16,8,6,4,10,30};
  /*  Naive Solution
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            if(arr[i]>=arr[j])
            {
                count++;
            }
        }
        cout<<count<<" ";
        count=0;
    }
    */
   stackSpan(arr,10);

}