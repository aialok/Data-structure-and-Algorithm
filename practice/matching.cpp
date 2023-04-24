#include <bits/stdc++.h>
using namespace std;

int main()
{
  
    int t;
    cin >> t;
    while (t--)
    {
       string s;
       cin>>s;

        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='?')
            {
                count++;
            }
        }

       if(s[0]=='0')
       {
        cout<<"0"<<endl;
       }
       else if(count==0 && s[0]!=0)
       {
            cout<<"1"<<endl;
       }
       else if(s[0]=='?' && count==1)
       {
            cout<<"9"<<endl;
       }
       else if(s[0]=='?' && count>1)
       {    int product=1;
            for(int i=1;i<count;i++)
            {
                product=product*10;
            }
           
            cout<<product*9<<endl;
       }
       else if(s[0]!='?' && count>0)
       {
        cout<<pow(10,count)<<endl;
       }

    }
    return 0;
}
