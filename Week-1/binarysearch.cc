#include <iostream>
#include <vector>
using namespace std;
int binsearch(vector<int> v, int key, int &comp)
{
    int l = 0, h = v.size() - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        comp++;
        if (v[mid] == key)
            return comp;
        else if (v[mid] > key)
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
int main()
{
    vector<int> v;
    int n;
    cout << "Enter no. of elements:";
    cin >> n;
    cout << "Enter elements:";
    int comp = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int key;
    cout << "Enter element to search:";
    cin >> key;
    int s = binsearch(v, key, comp);
    if (s == -1)
        cout << "Not present " << comp;
    else
        cout << "Present " << s;
}
