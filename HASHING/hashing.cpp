#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // pre-comutation
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;

    while (q--)
    {
        int number;
        cin >> number;

        cout << hash[number] << endl;
    }

    return 0;
}