#include <iostream>
#include <vector>
using namespace std;

int firstOcc(const vector<int> &v, int key)
{
    int l = 0, h = v.size() - 1, first = -1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (v[mid] == key)
        {
            first = mid;
            h = mid - 1;
        }
        else if (v[mid] < key)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    return first;
}

int lastOcc(const vector<int> &v, int key)
{
    int l = 0, h = v.size() - 1, last = -1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (v[mid] == key)
        {
            last = mid;
            l = mid + 1;
        }
        else if (v[mid] < key)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    return last;
}

int main()
{
    int n;
    cout << "Enter no. of elements: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int key;
    cout << "Enter element to search: ";
    cin >> key;
    int f = firstOcc(v, key);
    int l = lastOcc(v, key);
    if (f == -1)
    {
        cout << "Key not present" << endl;
    }
    else
    {
        cout << key << " - " << (l - f + 1) << endl;
    }
    return 0;
}
