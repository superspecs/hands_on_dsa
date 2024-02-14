#include<iostream>
using namespace std;
void printarray(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<*(arr+i)<<" ";
    }

}
void insertion_sort(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
        printarray(arr,size);
        cout<<"\n";

    }

}
int main()
{   //input the array
    int size;
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"enter a element for the array"<<endl;
        cin>>arr[i];
    }
    insertion_sort(arr,size);
    cout<<"the final array is -->>"<<endl;
    printarray(arr,size);

}