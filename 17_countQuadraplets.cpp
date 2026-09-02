#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int target;
    cin >> target;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int count = 0;
    for (int i = 0; i < n - 3; i++)
    {
        for (int j = i + 1; j < n - 2; j++)
        {
            for (int k = j + 1; k < n - 1; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    int store = v[i] - 2 * v[j] + 3 * v[k] - 4 * v[l];
                    if (store == target)
                    {
                        count++;
                    }
                }
            }
        }
    }

    cout << count;

    return 0;
}
