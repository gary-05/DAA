#include <iostream>
#include <vector>
using namespace std;
int linsearch(vector<int> v, int key)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == key)
            return i;
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
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int key;
    cout << "Enter element to search:";
    cin >> key;
    cout << "Index of " << key << " is " << linsearch(v, key);
}
