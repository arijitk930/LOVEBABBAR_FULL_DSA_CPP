#include <iostream>
using namespace std;

int getPivotElement(int arr[], int n)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elemnts: ";
    for (size_t i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Pivot is: "<<getPivotElement(arr, n)<<endl;
    return 0;
}