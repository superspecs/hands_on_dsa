#include <iostream>
using namespace std;
void printarray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
}
int partition(int *arr, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = arr[low];
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (arr[j] > pivot &&j >= low + 1)
        {
            j--;
        }
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);

    return j;
}

void quick_sort(int *arr, int low, int high)
{
    if (low <= high)
    {
        int p_index = partition(arr, low, high);
        quick_sort(arr, low, p_index - 1);

        quick_sort(arr, p_index + 1, high);
    }
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
    quick_sort(arr, 0, size - 1);
    printarray(arr, size);
}