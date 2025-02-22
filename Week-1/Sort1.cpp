#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int> &arr)
{
    int l = 0, mid = 0, r = arr.size() - 1;
    while (mid <= r)
    {
        if (arr[mid] == 0)
        {
            swap(arr[l], arr[mid]);
            l++;
            mid++;
        }
        else if (arr[mid] == 1)
            mid++;
        else
        {
            swap(arr[mid], arr[r]);
            r--;
        }
    }
}
int main()
{
    cout << "Enter number of terms : ";
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}