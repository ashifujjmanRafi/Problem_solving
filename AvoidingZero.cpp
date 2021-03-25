#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin >> n;
    int arr[n + 1];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum == 0)
        cout << "No" << endl;

    else
    {
        cout << "Yes" << endl;
        sort(arr, arr + n);
        if (sum > 0)
        {
            for (int i = n - 1; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        solution();
    }

    return 0;
}
//comment
