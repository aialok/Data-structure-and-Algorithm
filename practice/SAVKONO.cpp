#include <bits/stdc++.h>
using namespace std;

int maxIndex(int arr[], int n)
{
    int maxi = 0;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= maxi)
        {
            maxi = arr[i];
            index = i;
        }
    }
    return index;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool found = 0;
        int n, z, count = 0;
        cin >> n >> z;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        while (z > 0)
        {
            int i = maxIndex(arr, n);
            z = z - arr[i];
            arr[i] = arr[i] / 2;
            count++;

            if (arr[i] == 0)
            {
                found = 1;
                break;
            }
        }
        if (found)
        {
            cout << "Evacuate" << endl;
        }
        else
        {
            cout << count << endl;
        }
    }
}