#include <bits/stdc++.h>

using namespace std;

void solution()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i = 0;
    int j = n - 1;
    int count = 0;

    while (i <= j)
    {
        if (arr[i] == arr[j])
        {
            j--;
            i++;
        }
        else if (arr[i] < arr[j])
        {
            arr[j] -= arr[i];
            count++;
            i++;
        }
        else
        {
            arr[i] -= arr[j];
            count++;
            j--;
        }
         for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    }

    cout << count << endl;
    return;
}

int main()
{
    int tT;
    cin >> tT;
    while (tT--)
    {
        solution();
    }
    return 0;
}