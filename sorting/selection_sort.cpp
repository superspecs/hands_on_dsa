#include <iostream>
using namespace std;
void selection_sort(int *arr, int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        int mini = i;
        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[mini])
                mini = j;
        }
        swap(arr[i], arr[mini]);
    }
}
int main()
{
    // initialising the size
    int size;
    cout << "enter the size of the array" << endl;
    cin >> size;
    int arr[size];
    // input the array
    for (int i = 0; i < size; i++)
    {
        cout << "enter the " << i + 1 << " th element--> ";
        cin >> arr[i];
    }
    // sorting the array
    selection_sort(arr, size);
    // printing the array
    cout << "the array after sorting is -->\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}