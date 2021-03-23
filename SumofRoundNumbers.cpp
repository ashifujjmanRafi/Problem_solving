#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n, count = 0;
    cin >> n;
    int n1;

    vector<int> v1;
    int j = 1;

    while (n != 0)

    {

        n1 = n;
        n1 = n1 % 10;
        v1.push_back(n1);
        if (n1 >= 1 && n1 <= 9)
            count++;

        n = n / 10;
    }

    cout << count << endl;

    for (int i = 0; i < v1.size(); i++)
    {

        if (v1[i] >= 1 && v1[i] <= 9)
        {
            cout << v1[i] * j << " ";
        }
        j = j * 10;
    }
    cout << endl;
}
int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        solution();
    }

    return 0;
}
