#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        
        if (n == 1)
        {
            cout << "Ramos" << endl;
        }
        else
        {
            if(n%2==0)
            {
            for (int i = 0; i < n; i=i+2)
            {
                if (s[i]!=s[i+1] && i!=n-1)
                {
                    count++;
                }
            }
            }
            else{
                 for (int i = 0; i < n; i=i+2)
            {
                if (s[i]!=s[i+1] && i!=n-1)
                {
                    count++;
                }
                if((i==(n-3)))
                {
                    if(s[n-2]==s[n-3] && s[n-2]!=s[n-1])
                    count++;
                    break;
                }
            
            }
            }

            if(count%2==0)
            {
                cout<<"Ramos"<<endl;
            }
            else
            {
                cout<<"Zlatan"<<endl;
            }
            // cout << count << endl;
        }
    }
    return 0;
}
