#include <iostream>
#include <vector>
using namespace std;
int findcomp(vector<int> v, int key)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == key)
            return i + 1;
    }
    return v.size();
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
    int p = findcomp(v, key);
    if (p == -1)
        cout << "Not present " << p;
    else
        cout << "Present " << p;
    return 0;
}
