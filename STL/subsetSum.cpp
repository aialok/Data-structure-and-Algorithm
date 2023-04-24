#include<iostream>
#include <vector>
#include <stack>
#include <set>


using namespace std;

int main()
{   int N;
    cin>>N;
    vector<int> arr(N);
  
    for(int &x: arr)
    {
        cin>>x;
    }
   
  multiset<int> s;

    s.insert(0);
    int sum=0;
    for(int i=0;i<N;i++)
    {
         sum=sum+arr[i];
        s.insert(arr[i]);
       
    }
      
    
    for(int i=0;i<N;i++)
    {   
        for (int j = i+1; j < N;j++ )
        {
            // cout<<arr[i]+arr[j]<<" ";
            if(j==1)
            {
                continue;
            }
            s.insert(arr[i]+arr[j]);
        }
        
    }

    int temp=0;
    for(int i=0;i<N;i++)
    {
        for (int j = 0; j < N-i; j++)
        {
            temp=temp+arr[j];
        }
        s.insert(temp);
        temp=0;
    }
//   if(N>2)
//   {
//     s.insert(sum);
//   }

    for(int x: s)
    {
        cout<<x<<" ";
    }


    return 0;
}
