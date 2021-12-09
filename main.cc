#include <iostream>
#include <vector>
#include "solution.cc"

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    arr = MyOnSort(arr);
    cout << "Sorted array: \n";
    for(auto i : arr)
        cout << i << " ";
    return 0;
}