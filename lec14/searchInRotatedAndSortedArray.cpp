#include <bits/stdc++.h>
using namespace std;

int findPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarySearch(int arr[], int s, int e, int key)
{
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int arr[5] = {7, 8, 9, 34, 2};
    int k = 8;
    int n = 5;
    int pivot = findPivot(arr, 5);
    if (k >= arr[pivot] && k <= arr[n - 1])
    {
        cout << binarySearch(arr, pivot, n - 1, k);
    }
    else
    {
        cout << binarySearch(arr, 0, pivot - 1, k);
    }
    return 0;
}