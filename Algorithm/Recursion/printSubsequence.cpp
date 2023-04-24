#include <iostream>
#include <vector>
using namespace std;

void generate(int i,int sum,int arr[], int n , vector<int> &v)
{   
    if(i==n)
    {
        v.push_back(sum);
        return;
    }

    generate(i+1, sum+arr[i],arr, n,v);

    generate(i+1, sum,arr,n,v);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
      vector<int> v;
    generate(0, 0,arr,n,v);

    for(int x: v)
    {
        cout<<x<<" ";
    }
  

}