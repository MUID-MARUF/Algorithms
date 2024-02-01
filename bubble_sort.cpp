#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Function to take array inputs
void scan_array(int arr[], int arr_size)
{
    cout<< "Enter your array elements : ";
    for (int i = 0; i < arr_size; i++)
    {
        cin >> arr[i];
    }
}

//function to print array
void print_array(int arr[], int arr_size)
{
    cout << "Your array is : ";
    for (int i = 0; i < arr_size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl<<endl;
}

//function to sort array in accending order.
void bubble_sort_deccend(int arr[], int size)
{
    bool swapped;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i-1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "Array sorting successfull in deccending order."<< endl;
}

//function to sort array in accending order.
void bubble_sort_accend(int arr[], int size)
{
    bool swapped;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i-1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "Array sorting successfull in accending order."<< endl;
}

//Driver code
int main()
{

    int n;
    cout << "How many elements will be there in the array?"<< endl;
    cin >> n;
    int arr[n];

    int size = sizeof(arr)/sizeof(arr[0]);

    scan_array(arr, n);
    print_array(arr, n);

    bubble_sort_accend(arr, size);

    print_array(arr, n);

    bubble_sort_deccend(arr, size);

    print_array(arr, n);

    return 0;
}