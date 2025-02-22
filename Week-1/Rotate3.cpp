#include <iostream>
#include <vector>
using namespace std;
void revArr(vector<int> &v, int start, int end)
{
    while (start < end)
    {
        swap(v[start], v[end]);
        start++;
        end--;
    }
}
void rotArr(vector<int> &v, int k)
{
    int n = v.size();
    k = k % n;
    if (k == 0)
        return;
    revArr(v, 0, n - 1);
    revArr(v, 0, k - 1);
    revArr(v, k, n - 1);
}
int main()
{
    int n, k;
    cout << "Enter no. of elements: ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << "Enter pos:";
    cin >> k;
    rotArr(v, k);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}