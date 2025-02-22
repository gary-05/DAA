#include <iostream>
#include <vector>
using namespace std;
int oddOcc(vector<int> &v)
{
    int res = 0;
    for (int num : v)
    {
        res = res ^ num;
    }
    return res;
}
int main()
{
    int n;
    cout << "Enter no. of elements: ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << oddOcc(v);
    return 0;
}