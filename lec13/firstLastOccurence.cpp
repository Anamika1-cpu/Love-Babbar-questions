#include <bits/stdc++.h>
using namespace std;
int firstOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1; // left m check first occurence
        }
        else if (arr[mid] > key)
        {
            e = mid - 1; // left m jao
        }
        else
        {
            s = mid + 1; // right m jao
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1; // righ m check last occurence
        }
        else if (arr[mid] > key)
        {
            e = mid - 1; // left m jao
        }
        else
        {
            s = mid + 1; // right m jao
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[5] = {1, 2, 4, 4, 9};
    cout << firstOcc(arr, 5, 5) << " ";
    cout << lastOcc(arr, 5, 5);
    return 0;
}