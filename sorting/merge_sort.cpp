#include <iostream>
#include<vector>
using namespace std;
void printarray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
}
void merge(int *arr, int start, int mid, int end)
{
    vector<int> v;

    int i = start, j = mid + 1;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])  // Corrected condition to handle equal elements
        {
            v.push_back(arr[i]);
            i++;
        }
        else
        {
            v.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        v.push_back(arr[i]);
        i++;
    }
    while (j <= end)
    {
        v.push_back(arr[j]);
        j++;
    }
    // Copy the elements of vector to the original array
    for (int k = start; k <=end; k++)
    {
        arr[k] = v[k-start];  // Corrected index for accessing v
    }
}


void merge_sort(int *arr, int start, int end)
{
    if (start >= end)
        return;
    int mid = start + (end - start) / 2;
    // for the left part
    merge_sort(arr, start, mid);
    // for the right part
    merge_sort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

int main()
{ // input the array
    int size;
    cout << "enter the size of the array" << endl;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter a element for the array" << endl;
        cin >> arr[i];
    }
    merge_sort(arr, 0, size - 1);
    printarray(arr, size);
}
