//rotate the array by d places
//
#include<iostream>
using namespace std;
void printarray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
}
void rotate_array(int *arr,int size,int d)
{
    //very important
    if(d>size) d=d%(size);
    for(int i=0;i<d;i++)
    {
        int temp=arr[0];
        for(int i=1;i<size;i++)
        {
            arr[i-1]=arr[i];
        }
        arr[size-1]=temp;
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
    rotate_array(arr,size,6);
    printarray(arr, size);
}
