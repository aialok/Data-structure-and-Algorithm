#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int index = 0;
        int flag = 0;
        int count = 0;
        int maxi = 0;
        int index2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[i] <= b[i + 1] && i != n - 1)
            {
                count++;
                index = i;
               
            }
            else
            {

                count = 0;
            }

             if (count > maxi)
                {
                    index2 = index;
                }

            maxi = max(count, maxi);
        }

        int l = index2 - maxi + 1;
        int r = index2 + 1;
        // for(int i=0;i<n;i++)
        // {
        //     if(a[i]!=b[i])
        //     {
        //         l=i;
        //         break;
        //     }
        // }
        //
        // for(int i=n-1;i>=0;i--)
        // {
        //     if(a[i]!=b[i])
        //     {
        //         r=i;
        //         break;
        //     }
        // }

        cout << l + 1 << " " << r + 1 << endl;
    }
}