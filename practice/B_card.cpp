#include <iostream>
using namespace std;

int numOfCards(int i)
{
   return (i*(3*i+1))/2;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int m=n;

        int i=1;
        int count=0;  
        int found=1;
        int flag=1 ;
        int found1=1;
        while(1)
        {
            
            if(numOfCards(i)==n)
            {   found1=0;
                cout<<"1"<<endl;
                break;
            }

            if(numOfCards(i)>m && found==1)
            {   found=0;
                flag=0;
                i--;
            }
            else
            {
                if(numOfCards(i)<m && flag==1 )
                {
                   i++;
                    
                }
                else {
                    if(numOfCards(i)<=m)
                    {
                          count++;
                  m=m-numOfCards(i);
                    }
                    else{
                        if(numOfCards(i)>m)
                        {
                            i--;
                        }
                    }
                }
            }

            if(m==1 || m==0)
            {
                break;
            }

        }
        if(found1)
        {
        cout<<count<<endl;
        }
    }
}