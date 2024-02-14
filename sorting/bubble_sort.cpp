#include<iostream>
#include<algorithm>
using namespace std;
void printarray(int *arr,int size)
{
    for(int i=0;i<size;i++){
        cout<<*(arr+i)<<" ";
    }

}



void bubble_sort(int *arr,int size)
{
    for(int i=size-1;i>=0;i--)
    {
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
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
    bubble_sort(arr,size);
    cout<<"the final array is -->>"<<endl;
    printarray(arr,size);

}